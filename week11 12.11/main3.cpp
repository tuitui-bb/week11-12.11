#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main() {
	cv::Mat src = imread("D:\\ͼƬ1.jpg");
	cv::Mat dst;
	src.copyTo(dst);
	float fGamma =1/3.9;
	uchar lut[256];
	for (int i = 0; i < 255; i++)
	{
		lut[i] = saturate_cast<uchar>(pow((float)(i / 255.0), fGamma) * 255.0f);
	}

	
	int height = dst.rows;
	int width = dst.cols;

	

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
		{
			dst.at<Vec3b>(i, j)[0] = lut[dst.at<Vec3b>(i, j)[0]];
			dst.at<Vec3b>(i, j)[1] = lut[dst.at<Vec3b>(i, j)[1]];
			dst.at<Vec3b>(i, j)[2] = lut[dst.at<Vec3b>(i, j)[2]];
		}
	}

	cv::imshow("src", src);
	cv::imshow("dst", dst);
	
	waitKey(0);
}