// MathFuncsDll.h

#include "stdafx.h"
#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <Windows.h>
// Include OpenCV's C++ Interface
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

#ifdef FACEFUNCSDLL_EXPORTS
#define FACEFUNCSDLL_API __declspec(dllexport) 
#else
#define FACEFUNCSDLL_API __declspec(dllimport) 
#endif

namespace FaceFuncs
{
	class MyFaceFuncs
	{
	public:

		static FACEFUNCSDLL_API void detectObjectsCustom(const Mat &img, CascadeClassifier &cascade, vector<Rect> &objects, int scaledWidth, int flags, Size minFeatureSize, float searchScaleFactor, int minNeighbors);

		static FACEFUNCSDLL_API void detectLargestObject(const Mat &img, CascadeClassifier &cascade, Rect &largestObject, int scaledWidth);

		static FACEFUNCSDLL_API std::wstring s2ws(const std::string& s);

		static FACEFUNCSDLL_API void read_csv(const string& filename, vector<Mat>& images, vector<int>& labels, vector<string>& names, char separator = ';');

		static FACEFUNCSDLL_API cv::Point pointReturn(int saved_model);
	};
}