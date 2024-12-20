#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void shiftDFT(Mat& image);

int main() {
    // 1. 이미지 불러오기 (흑백 이미지)
    Mat image = imread("images/patterned_image.png", IMREAD_GRAYSCALE);
    if (image.empty()) {
        cerr << "Error: Could not open or find the image!" << endl;
        return -1;
    }

    // 2. 푸리에 변환 수행
    Mat padded;
    int m = getOptimalDFTSize(image.rows);
    int n = getOptimalDFTSize(image.cols);
    copyMakeBorder(image, padded, 0, m - image.rows, 0, n - image.cols, BORDER_CONSTANT, Scalar::all(0));

    Mat planes[] = {Mat_<float>(padded), Mat::zeros(padded.size(), CV_32F)};
    Mat complexI;
    merge(planes, 2, complexI);

    dft(complexI, complexI, DFT_COMPLEX_OUTPUT);
    shiftDFT(complexI);

    // 3. 푸리에 스펙트럼 계산
    split(complexI, planes);
    magnitude(planes[0], planes[1], planes[0]);
    Mat magnitudeSpectrum = planes[0];
    magnitudeSpectrum += Scalar::all(1);
    log(magnitudeSpectrum, magnitudeSpectrum);

    normalize(magnitudeSpectrum, magnitudeSpectrum, 0, 1, NORM_MINMAX);

    // 4. 피크 영역(주기 성분) 제거 (중앙 주변의 특정 영역을 0으로 설정)
    int crow = complexI.rows / 2;
    int ccol = complexI.cols / 2;
    Rect roi(ccol - 50, crow - 10, 100, 20); // 특정 영역 지정
    rectangle(complexI, roi, Scalar::all(0), -1);

    // 5. 푸리에 역변환 수행
    shiftDFT(complexI);
    idft(complexI, complexI, DFT_SCALE | DFT_REAL_OUTPUT);
    //normalize(complexI, complexI, 0, 1, NORM_MINMAX);
    // 0에서 255 사이로 정규화하고 8비트로 변환
    normalize(complexI, complexI, 0, 255, NORM_MINMAX);
    complexI.convertTo(complexI, CV_8U);

    // 6. 결과 시각화
    imshow("Original Image", image);
    imshow("Magnitude Spectrum", magnitudeSpectrum);
    imshow("Reconstructed Image (After Peak Removal)", complexI);

    waitKey(0);
    return 0;
}

// DFT 결과를 중앙으로 이동시키는 함수
void shiftDFT(Mat& image) {
    int cx = image.cols / 2;
    int cy = image.rows / 2;

    Mat q0(image, Rect(0, 0, cx, cy));   // Top-Left
    Mat q1(image, Rect(cx, 0, cx, cy));  // Top-Right
    Mat q2(image, Rect(0, cy, cx, cy));  // Bottom-Left
    Mat q3(image, Rect(cx, cy, cx, cy)); // Bottom-Right

    Mat tmp; 
    q0.copyTo(tmp);
    q3.copyTo(q0);
    tmp.copyTo(q3);

    q1.copyTo(tmp);
    q2.copyTo(q1);
    tmp.copyTo(q2);
}
