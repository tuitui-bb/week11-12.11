//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//void mygamma(Mat src,float fGamma) {
//	
//	int height = src.rows;
//	int width = src.cols;
//	for (int i = 0; i < height; i++) {
//			for (int j = 0; j < width; j++)
//				{
//					src.at<Vec3b>(i, j)[0] = saturate_cast<uchar>(pow((float)(src.at<Vec3b>(i, j)[0] / 255.0), fGamma) * 255.0f);
//					src.at<Vec3b>(i, j)[1] = saturate_cast<uchar>(pow((float)(src.at<Vec3b>(i, j)[1] / 255.0), fGamma) * 255.0f);
//					src.at<Vec3b>(i, j)[2] = saturate_cast<uchar>(pow((float)(src.at<Vec3b>(i, j)[2] / 255.0), fGamma) * 255.0f);
//				}
//			}
//}
//int main(){
//	cv::Mat src = imread("D:\\ͼƬ2.jpg");
//	cv::Mat dst;
//	float f = 3.22;
//	mygamma(src, f);
//	cv::imshow("src", src);
//	
//	waitKey(0);
//}
