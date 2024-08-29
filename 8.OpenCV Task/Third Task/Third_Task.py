import cv2 as cv 
import numpy as np
import matplotlib.pyplot as plt

img = cv.imread('/home/mo/Downloads/color_detection.jpg')

canny = cv.Canny(img,100,200)

titles = ["image","canny"]
images = [img , canny]

for i in range (2):
    images[i] = cv.cvtColor(images[i],cv.COLOR_BGR2RGB)
    plt.subplot(1,2,i+1),plt.imshow(images[i],'gray')
    plt.title(titles[i])
    plt.xticks([]),plt.yticks([])


plt.show()
plt.savefig("/home/mo/Desktop/projects/python/anything/mindcloud/Third Task/plt.jpg")

