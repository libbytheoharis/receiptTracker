/**
*  Libby Wichman
*  ReceiptImage.hpp
**/

#pragma once
#ifndef RECEIPTIMAGE_H
#define RECEIPTIMAGE_H

#include <string>
#include <iostream>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
//#include <opencv2/opencv.hpp>

//using namespace cv;

class  ReceiptImage {
private:
    std::string textToDisplay;
    std::string filePath;
//    Mat img;

public:
    ReceiptImage();
    // Add other construnctors if you have time.
    ~ReceiptImage();

    bool friend testReceiptImage();
    bool setImage(std::string filePathPassed);

};
#endif


ReceiptImage::ReceiptImage() : textToDisplay("")
{
    // Creating tesseract object, which is where the image will be used.
//    tesseract::TessBaseAPI *ocr = new tesseract::TessBaseAPI();

    // Setting the language to english.
//    ocr->Init(NULL, "eng", tesseract::OEM_LSTM_ONLY);

    // Setting the page segmentation to PSM_AUTO (3)
//    ocr->SetPageSegMode(tesseract::PSM_AUTO);

    // Adapting through refences in: https://www.learnopencv.com

}


ReceiptImage::~ReceiptImage()
{
} // end destructor.

bool testReceiptImage()
{
    std::cout << std::endl << "Underconstrunction. " << std::endl << std::endl;

    return false;
}
