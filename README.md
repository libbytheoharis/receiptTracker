

# Receipt Tracker


 

Keeps track of each employee's expense receipts for a weekly expense report.

 

## About

 

Receipt Tracker is a C++ program that consumes receipt information and itemizes the receipt based on the text retrieved from the image itself.

 

Welcome menu allows the user to navigate between four options.

Options are listed here:

1. Enter Receipts.

   Allows the user to input receipts as an employee with a designated employee number. 

2. Test.

   Shows all current functionality that is available in the current source code. 

3. Display.

   Ideally this would be able to show an list of receipts that have been submitted for the current week. 

4. Exit.

   Ends the program.

 

It's currently a working prototype, but does not yet have all of its features fully implemented.

All non-functioning calls will return dummy values, which are all notated in the comments present within the source code.

 

 

## High-Level Work flow

![Alt text](https://raw.githubusercontent.com/libbywichman/receiptTracker/master/receiptTracker.png "Work flow Example")

 

 

### How to Run

The program was written with Code::Blocks, but can be run on most IDEs.

* Although the ReceiptImage class has some additional include headers...Since the actual image reader is not yet working, you will not need opencv or tesseract added to your local machine.

 

### Running Receipt Tracker

Within the program is option "2. Testing", which gives the user a view of the simple prototype version that shows most of the features being tested.

 

Built based on the following "requirement ideas": 

* Menu that allows the user to navigate between options.

* User identifies individual tied to the receipt to be submitted.

* _Ideally, the individual would be validated through some sort of call to search a table or list of current employees able to submit expense receipts._

* User asked for image's file path or link.

* User inputs receipt file path or link.

* Receipt image location is saved.

* _Image itself is saved using opencv._

* _Image is scanned for text using ocr._

* _Text from image is parsed for key words (number of items, total, tax, etc) using regEx._

* _Image is displayed in separate window, which is responsive to screen size._

* User asked to edit, if necessary, and verify.

* _Information is sent to database/file for loading into database._

 

Note: The requirements which are not yet available are in italics. 

 

I discovered I needed to give myself a couple more days to figure out how to integrate libraries that allow the recognition of text within images.

Ideas centered around this were from * [OpenCV](https://docs.opencv.org/master/index.html) and a * [Document Scanner](https://developer.ibm.com/tutorials/document-scanner/).

 

## Deployment

Deployment is VERY limited with the current C++ version of the program.
Each individual user would need to run the program from their local machine.
This would be problematic in at least a couple ways:
- Users would need to get a copy of the source code and run it themselves. This would be complicated for some non-technical users.
- Current input in the program is limited to the console. This can be frustrating for those not used to dealing in a text based environments.
- The user support needed to implement the program would be impractical.


I believe Receipt Tracker would be better suited to JavaScript and/or Python combination. 
There could be a company wide accessible website built for the user input portion and it could make and receive calls to either a database or to a file for later insertion into a database.
JavaScript would allow a more user friend interface, presentation and accessibility. Python could be utilized for the parsing of the image for the text.


Generally, I aim to match the programming language to the program requested.

Since this is a time restricted exercise, I chose to code in C++, which is the programming language with which I feel most comfortable. This prevented me from getting too bogged down in the syntax and language specific issues.

 

#### By Libby Wichman

Last edited March 4, 2019.
