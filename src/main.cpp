#include "1.h"
#include <opencv2/highgui.hpp>
#include <iostream>

int main(int argc, const char *argv[])
{
    // read image
    
    cv::Mat img = cv::imread(argv[1], cv::IMREAD_COLOR);

    // channel swap
    cv::Mat out = channel_swap(img);

    cv::imwrite(argv[2], out);
    //cv::imshow("argv[2]", out);
    //cv::waitKey(0);
    //cv::destroyAllWindows();

    return 0;
}
