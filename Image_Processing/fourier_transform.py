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

# 4. 피크 영역(주기 성분) 제거 (중앙 주변의 특정 영역을 0으로 설정)
rows, cols = image.shape
crow, ccol = rows // 2, cols // 2  # 중앙 좌표
mask = np.ones((rows, cols, 2), np.uint8)
#mask[crow-10:crow+10, ccol-50:ccol+50] = 0  

mask[crow-88:crow-70, ccol-10:ccol+10] = 0
mask[crow-82:crow-78, ccol-80:ccol+80] = 0
mask[crow-50:crow-30, ccol-10:ccol+10] = 0
mask[crow-42:crow-38, ccol-80:ccol+80] = 0
mask[crow+30:crow+50, ccol-10:ccol+10] = 0
mask[crow+38:crow+42, ccol-80:ccol+80] = 0
mask[crow+70:crow+90, ccol-10:ccol+10] = 0
mask[crow+78:crow+82, ccol-80:ccol+80] = 0
mask[crow-2:crow+2, ccol-80:ccol-20] = 0
mask[crow-2:crow+2, ccol+20:ccol+80] = 0

mask[crow-80:crow-15, ccol-2:ccol+2] = 0
mask[crow+15:crow+80, ccol-2:ccol+2] = 0

# 5. 마스크 적용
fshift = dft_shift * mask

# 6. 푸리에 역변환 수행
f_ishift = np.fft.ifftshift(fshift)
img_back = cv2.idft(f_ishift)
img_back = cv2.magnitude(img_back[:, :, 0], img_back[:, :, 1])

# 7. 결과 시각화
plt.figure(figsize=(12, 8))

plt.subplot(2, 2, 1)
plt.title('Original Image')
plt.imshow(image, cmap='gray')

plt.subplot(2, 2, 2)
plt.title('Magnitude Spectrum')
plt.imshow(magnitude_spectrum, cmap='gray')

plt.subplot(2, 2, 3)
plt.title('Modified Spectrum (Mask Applied)')
plt.imshow(20 * np.log(cv2.magnitude(fshift[:, :, 0], fshift[:, :, 1]) + 1), cmap='gray')

plt.subplot(2, 2, 4)
plt.title('Reconstructed Image (After Peak Removal)')
plt.imshow(img_back, cmap='gray')

plt.show()
