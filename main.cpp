#include "opencv2/core.hpp"
#include "opencv2/core/mat.hpp"
#include "opencv2/core/version.hpp"
#include "opencv2/imgcodecs.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main() {
    cout << "Testing OpenCV" << endl;
    cout << "OpenCV version: " << CV_VERSION << endl;
    cout << "Major version: " << CV_MAJOR_VERSION << endl;
    cout << "Minor version: " << CV_MINOR_VERSION << endl;
    cout << "Subminor version: " << CV_SUBMINOR_VERSION << endl;

    cout << "Inverting a PNG file..." << endl;
    Mat img = imread("./images/Quick_brown_fox.png");
    bitwise_not(img, img);
    imwrite("./images/Inverted_Fox.png", img);
    return 0;
}
