
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::VideoCapture cap(0);

    if (!cap.isOpened()) {
        std::cout << "can't open camera." << std::endl;
        return -1;
    }

    cap.set(cv::CAP_PROP_FRAME_WIDTH, 640);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, 480);

    cv::Mat frame;

    while (true) 
    {
        cap.read(frame);

        if (frame.empty())   
        {  
            std::cout << "can't raed frame." << std::endl;
            break;
        }

        cv::imshow("Camera Viewer", frame);

        if (cv::waitKey(1) == 'q') {  
            break;
        }
    }

    cap.release(); 
    cv::destroyAllWindows(); 

    return 0;
}
