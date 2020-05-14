#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv ) {
    //Read in an image from the command line
    Mat img = imread( argv[1] );

    //Check for failure
    if (img.empty())
    {
        cout << "Could not open or find the image" << endl;
        cin.get();
        return -1;
    }

    String windowName = "Viewer";
    namedWindow(windowName);
    imshow(windowName, img);
    waitKey(0);
    destroyWindow(windowName);

    return 0;
}