import cv2 as cv 
import numpy as np

img1 = cv.imread("/home/mo/Desktop/projects/python/anything/mindcloud/Fourth Task/diff1.jpg")
img2 = cv.imread("/home/mo/Desktop/projects/python/anything/mindcloud/Fourth Task/diff2.jpeg")


gray1 = cv.cvtColor(img1,cv.COLOR_BGR2GRAY)
gray2 = cv.cvtColor(img2,cv.COLOR_BGR2GRAY)


diff = cv.absdiff(gray1,gray2)

_ ,threshold = cv.threshold(diff,30,255,cv.THRESH_BINARY)

contours, hierarchy = cv.findContours(threshold, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE)

for contour in contours:
    if cv.contourArea(contour) > 50:  
        x, y, w, h = cv.boundingRect(contour)
        cv.rectangle(img1, (x, y), (x + w, y + h), (0, 255, 0), 2)
        cv.rectangle(img2, (x, y), (x + w, y + h), (0, 255, 0), 2)

diff = np.hstack((img1, img2))

cv.imshow('diff', diff)
cv.waitKey(0)
cv.destroyAllWindows()