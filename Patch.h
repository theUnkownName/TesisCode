#pragma once

#ifndef patch_H
#define patch_H

#include "opencv2/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/photo.hpp"
#include "opencv2/imgcodecs.hpp"
#include <iostream>


using namespace cv;
using namespace std;

typedef struct _patches
	{
    	double error;
    	Mat image;
    }_patches;

class Patch
{
public:
	Patch(Mat &img);
	Patch();
	int width, height;
	Mat image; //new image on the patch
	Mat roiOfPatch, roiOfTarget, roiOfTopPatch, roiOfBotTarget, halfOfTarget;
	double error; 
	int typeOfTexture; //Type of texture; 1) background or 2) detail
	
private:
};

#endif
