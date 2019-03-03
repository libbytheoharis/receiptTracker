///**
//*  Libby Wichman
//*  ReceiptImage.hpp
//**/
//
//#pragma once
//#ifndef RECEIPTIMAGE_H
//#define RECEIPTIMAGE_H
//
//#include <string>
//#include <iostream>
//#include <tesseract/baseapi.h>
//#include <leptonica/allheaders.h>
//#include <opencv2/opencv.hpp>
//#include <opencv2/core.hpp>
//#include <imgcodecs.hpp>
//#include <highgui.hpp>
//
//using namespace cv;
//
//class  ReceiptImage {
//private:
//    string textToDisplay;
//    string filePath;
//    Mat img;
//
//public:
//    ReceiptImage();
//    // Add other construnctors if you have time.
//    ~ReceiptImage();
//
//    void friend testReceiptImage();
//    bool setImage(string filePathPassed);
//
//};
//#endif
//
//
//ReceiptImage::ReceiptImage() : textToDisplay("")
//{
//    // Creating tesseract object, which is where the image will be used.
//    tesseract::TessBaseAPI *ocr = new tesseract::Tess;
//
//    // Setting the language to english.
//    ocr->Init(NULL, "eng", tesseract::OEM_LSTM_ONLY);
//
//    // Setting the page segmentation to PSM_AUTO (3)
//    ocr->SetPageSegMode(tesseract::PSM_AUTO);
//
//}


//ReceiptImage::~ReceiptImage();
//{
//} // end destructor.

//void testReceiptImage()
//{
//
//}
