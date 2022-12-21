
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace  std;
using namespace cv;

int main(int argc, char const *argv[])
{
    VideoCapture cap(0);
    if(!cap.isOpened()){
        cout << "Error";
        return -1;
    }

    while(1){
        Mat frame;
        cap.read(frame);
        imshow("camera", frame);
        if(waitKey(30) == 27){
            return 0;
        }
    }

    return 0;
}
