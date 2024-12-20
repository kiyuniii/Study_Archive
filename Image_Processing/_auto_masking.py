import cv2
import numpy as np
import matplotlib.pyplot as plt

# 1. 이미지 불러오기 (흑백 이미지)
image = cv2.imread('images/patterned_image.png', cv2.IMREAD_GRAYSCALE)

# 2. 푸리에 변환 수행
dft = cv2.dft(np.float32(image), flags=cv2.DFT_COMPLEX_OUTPUT)
dft_shift = np.fft.fftshift(dft)

# 3. 푸리에 스펙트럼 계산
magnitude_spectrum = 20 * np.log(cv2.magnitude(dft_shift[:, :, 0], dft_shift[:, :, 1]) + 1)

# 4. Peak 검출을 위한 임계값 처리
_, thresh = cv2.threshold(magnitude_spectrum, 0.7 * np.max(magnitude_spectrum), 255, cv2.THRESH_BINARY)
thresh = np.uint8(thresh)

# 5. Contour 검출
contours, _ = cv2.findContours(thresh, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

# 6. 마스크 생성 (모든 픽셀을 1로 초기화)
rows, cols = image.shape
mask = np.ones((rows, cols, 2), np.uint8)

# 7. 검출된 Peak 영역 마스킹
for contour in contours:
    x, y, w, h = cv2.boundingRect(contour)
    cv2.rectangle(mask, (x, y), (x + w, y + h), (0, 0), -1)  # 해당 영역을 0으로 설정

# 8. 마스크 적용
fshift = dft_shift * mask

# 9. 푸리에 역변환 수행
f_ishift = np.fft.ifftshift(fshift)
img_back = cv2.idft(f_ishift)
img_back = cv2.magnitude(img_back[:, :, 0], img_back[:, :, 1])

# 10. 결과 시각화
plt.figure(figsize=(12, 8))

plt.subplot(2, 2, 1)
plt.title('Original Image')
plt.imshow(image, cmap='gray')

plt.subplot(2, 2, 2)
plt.title('Magnitude Spectrum')
plt.imshow(magnitude_spectrum, cmap='gray')

plt.subplot(2, 2, 3)
plt.title('Thresholded Peaks')
plt.imshow(thresh, cmap='gray')

plt.subplot(2, 2, 4)
plt.title('Reconstructed Image (After Peak Removal)')
plt.imshow(img_back, cmap='gray')

plt.show()
