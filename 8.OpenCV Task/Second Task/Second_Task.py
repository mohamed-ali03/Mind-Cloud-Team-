import cv2 as cv 
import numpy as np

im = cv.imread("/home/mo/Desktop/projects/python/anything/mindcloud/Second Task/0.jpg")

gray = cv.cvtColor(im,cv.COLOR_BGR2GRAY)

_ , threshold = cv.threshold(gray,120,255,cv.THRESH_BINARY)


contours , hierarchy = cv.findContours(threshold,cv.RETR_TREE,cv.CHAIN_APPROX_SIMPLE)


for contour in contours :
    epsilon = 0.02 * cv.arcLength(contour,True)
    approx = cv.approxPolyDP(contour, epsilon, True)
    area = cv.contourArea(contour)

    # print (area)
    if area > 600 and area <4000:
        cv.drawContours(im,[approx],0,(0,255,0),2)
        print(area)
        x = approx.ravel()[0]
        y = approx.ravel()[1]
        if len(approx) == 3:
            cv.putText(im,"Triangle",(x,y),cv.FONT_HERSHEY_COMPLEX,1,(52,140,235))
        elif len(approx) == 4 :
            x,y,w,h = cv.boundingRect(approx)
            aspectRatio = float(w)/h   

            if aspectRatio >= 0.95 and aspectRatio <= 1.05 :
                cv.putText(im,"Square",(x,y),cv.FONT_HERSHEY_COMPLEX,1,(52,140,235))
            else:
                cv.putText(im,"rectangle",(x,y),cv.FONT_HERSHEY_COMPLEX,1,(52,140,235))
        elif len(approx) == 5 :
            cv.putText(im,"Pentagon",(x,y),cv.FONT_HERSHEY_COMPLEX,1,(52,140,235))
        elif len(approx) == 6 :
            cv.putText(im,"Hexagon",(x,y),cv.FONT_HERSHEY_COMPLEX,1,(52,140,235))
        else:
            cv.putText(im,"Circle",(x,y),cv.FONT_HERSHEY_COMPLEX,1,(52,140,235))

cv.imshow("Shapes",im)

cv.waitKey(0)
cv.destroyAllWindows()