/**
*  Libby Wichman
*  Receipt.hpp
**/

#pragma once
#ifndef RECEIPT_HPP
#define RECEIPT_HPP

#include "Employee.hpp"
#include "ReceiptImage.hpp"

class Receipt {
private:
    std::string date;
    double total;
    std::string business;
    Employee employee;
    static const int DEFAULT_CAPACITY = 6;
    std::string receiptItems[DEFAULT_CAPACITY];
    int itemCount;
    int maxItems;
//    ReceiptImage imageRecord;
    std::string imageLocation;
    int getItemLocation(std::string target);

public:
    Receipt();
    // Add other constructors if you have time.

    // Parameterized constructor. Test if you have time.
    Receipt(std::string receiptDate, double receiptTotal);

    // Destructor.
    ~Receipt();

    /**
    *  The setDate function accepts a string that represents the date of the
    *  transaction referred to by the receipt.
    *
    *  @param A string that is the date linked to the receipt puting input.
    *  @pre The caller must be a valid Receipt object.
    *  @post The date variable has been updated to the value of dateOfReceipt.
    *  @return If false is returned, the date was not set successfully. If true,
    *       the date was set successfully.
    **/
    bool setDate(std::string dateOfReceipt);

    /**
    *  The getDate function returns the value in the date member variable for
    *  the caller object.
    *
    *  @pre The caller must be a valid Receipt object.
    *  @return The string value returned is the value of the object's date
    *       date member variable.
    **/
    std::string getDate();

    /**
    *  The setTotal function changes the value of the total member variable to
    *  the double value passed as the parameter. The boolean variable returns
    *  designates a success (true) or failure (false).
    *
    *  @param receiptTotal A double that must be greater than 0.
    *           Future constraints can be placed on this variable.
    *  @pre The caller must be a valid Receipt object.
    *  @post The double passed in receiptTotal has been set as the total of this
    *       receipt object.
    *  @return bool If total has been set successfully, it returns true. If the
    *       total was not set sucessfully, it returns false.
    **/
    bool setTotal(double receiptTotal);

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    double getTotal();

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    bool setBusiness(std::string busName);

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    std::string getBusiness();

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    bool setEmployee(Employee employeeSubmitted);

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    Employee getEmployee();

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
//    bool setImage(ReceiptImage imageSubmitted);

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
//    ReceiptImage getImage();

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    bool setImageLocation(std::string filePath);

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    std::string getImageLocation();

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    int getNumberOfItems();

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    bool addItem(std::string itemName);

    /**
    *  setNumber function places the integer variable passed as the employeeNum
    *  of the Employee object. A bool value is returned. True means that the
    *  employeeNum was set successfully. False is returned if the employeeNum
    *  was not set successfully.
    *
    *  @param A 5 digit integer value that represents the employee's number.
    *       Must be greater than 0 and less than 99999.
    *  @pre The caller must be a valid Employee object.
    *  @post The parameter numPassed is set as the employeeNum of the object.
    **/
    bool removeItem(std::string itemName);

    /**
    *  The removeItemNum function removes the nth item from the receiptItem
    *  array, where nth is the interger parameter passed.
    *
    *  @param itemPlacement Must be a positive integer and must be less than
    *           itemCount.
    *  @pre The caller must be a valid Receopt object.
    *  @post A boolean value is returned. If true, the item was removed
    *  successfully. If false, the item was not removed from the array.
    **/
    bool removeItemNum(int itemPlacement);

    /**
    *  The clearItems function resets the itemCount to zero, which removes
    *  the capability of the array from referencing the previously added items.
    *
    *  @pre The caller must be a valid Receipt object.
    *  @post The itemCount is reset to zero for the Receipt object called.
    **/
    void clearItems();

    /**
    *  Displays all values present in the Receipt object.
    *
    *  @pre The caller must be a valid Receipt object.
    **/
    void display();

    /**
    *  receiptTester function tests the Receipt class. If the bool value
    *  retuned is true, the Receipt class was tested successfully.
    *
    *  @pre The caller must be a valid Receipt object.
    *  @post The Receipt class has been tested. A false bool value returned
    *       means the Receipt class was not tested successfully. True is
    *       returned, if the function ended successfully.
    **/
    bool friend receiptTester();

};
#endif //


Receipt::Receipt() : date("yyyymmdd"), total(0), business("Unknown"),
    itemCount(0), maxItems(DEFAULT_CAPACITY), imageLocation("Unknown")
    {
        Employee employeeCreated; // Creating Employee.
        // ReceiptImage receiptImageCreated; // Creating ReceiptImage.
    }

    // Add other construnctors if you have time.
Receipt::Receipt(std::string receiptDate, double receiptTotal) :
    date(receiptDate), total(receiptTotal), business("Unknown"),
    itemCount(0), maxItems(DEFAULT_CAPACITY), imageLocation("Unknown") {}
Receipt::~Receipt() {}


int Receipt::getItemLocation(std::string target)
{
    bool itemFound = (!target.empty() && itemCount > 0);
    int itemLocation = -1;

    if(itemFound)
    {
        for(int i = 0; i < itemCount; i++)
        {
            if(target == receiptItems[i])
            {
                itemLocation = i;
            }
        }
    }
    return itemLocation;
}


bool Receipt::setDate(std::string dateOfReceipt)
{
    bool validDate = (!dateOfReceipt.empty());

    if(validDate)
    {
    // Regular Expressions here to check for valid date input
    // There are so many ways to express dates...
    // Ideally, there would be a drop down calendar that would be more
    // user friendly.
        date = dateOfReceipt;
    }
    return validDate;
}

std::string Receipt::getDate()
{
    return date;
}

bool Receipt::setTotal(double receiptTotal)
{
    bool totalSet = receiptTotal > 0;

    if(totalSet)
    {
        total = receiptTotal;
    }
    return totalSet;
}

double Receipt::getTotal()
{
    return total;
}

bool Receipt::setBusiness(std::string busName)
{
    bool nameSet = (!busName.empty());

    if(nameSet)
    {
        business = busName;
    }
    return nameSet;
}

std::string Receipt::getBusiness()
{
    return business;
}

//bool Receipt::setEmployee(Employee employeeSubmitted)
//{
//
//}
//
//Employee Receipt::getEmployee()
//{
//
//}


//bool Receipt::setImage(ReceiptImage imageSubmitted)
//{
//    //stub
//    return false;
//}
//
//
//ReceiptImage Receipt::getImage()
//{
//    //stub
//}


bool Receipt::setImageLocation(std::string filePath)
{
    bool filePathAdded = (!filePath.empty());

    if(filePathAdded)
    {
        // Need to find out how to check the file path here.

    }
    return filePathAdded;
}

std::string Receipt::getImageLocation()
{
    return imageLocation;
}

int Receipt::getNumberOfItems()
{
    return itemCount;
}


bool Receipt::addItem(std::string itemName)
{
    bool itemAdded = (!itemName.empty());

    if(itemAdded)
    {
        receiptItems[itemCount] = itemName;
        itemCount++;
    }
    return itemAdded;
}


bool Receipt::removeItem(std::string itemName)
{
    bool itemRemoved = (!itemName.empty());

    if(itemRemoved)
    {
        int itemLocation = getItemLocation(itemName);
        // Finish this with the change up.

    }

    return itemRemoved;
}


bool Receipt::removeItemNum(int itemPlacement)
{
    // Needs to be finished.
}


void Receipt::clearItems()
{
    itemCount = 0; // "clears out array"
}

void Receipt::display()
{
    char userInput = 'N';
    std::cout << "Employee Info... " << std::endl;
    employee.display();
    std::cout << "Date of obj: " << getDate() << std::endl;
    std::cout << "Business Name: " << getBusiness() << std::endl;
    std::cout << "Total Amt: " << getTotal() << std::endl;
    std::cout << "Current number of Items on Receipt: " << getNumberOfItems()
        << std::endl;
    std::cout << "File path: " << getImageLocation() << std::endl;
        // call on image to be displayed.
        // give instructions on screen on how to close image window.
    std::cout << "End of Receipt data." << std::endl;
}

bool receiptTester()
{
    bool testSuccessful = false;

    std::cout << std::endl << "TESTING for Receipt Class" << std::endl;
    std::cout << "Test for receipt1." << std:: endl;
    Receipt receipt1;
    std::cout << "receipt1 created using the default constructor." << std::endl;
    receipt1.display();



 //   bool setTotal(double receiptTotal);

//
//    bool setDate(std::string dateOfReceipt);
//
//    std::string getDate();

    return false;
}
