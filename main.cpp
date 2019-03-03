/**
* Libby Wichman
* main.cpp
**/

#include "Employee.hpp"
#include "Receipt.hpp"
#include "ReceiptImage.hpp"





int main()
{
    bool readyToExit = false;
    int userInput = 0;
    while (!readyToExit || userInput == 0)
    {
        std::cout << "RECEIPT TRACKER" << std::endl << "---------------"
            << std::endl;
        std::cout << "Menu Options are below. " << std::endl;
        std::cout << "1. Enter Receipt(s)." << std::endl;
        std::cout << "2. Test the program." << std::endl;
        std::cout << "3. Display Receipt records." << std::endl;
        std::cout << "4. Exit." << std::endl;
        std::cout << "Please enter the number of your choice and press ENTER: ";
        std::cin >> userInput;
        std::cin.ignore();
        if(userInput == 1)
        {
            std::cout << "Underconstrunction. Returning to main menu."
                << std::endl << std::endl;
        }
        else if(userInput == 2)
        {
            char usrTesting;
            std::cout << "Press any key to test the Employee Class.";
            std::cin >> usrTesting;
            std::cin.ignore();
            std::cout << testForEmployee() << std::endl;
            std::cout << "Press any key to test the Receipt Class.";
            std::cin >> usrTesting;
            std::cin.ignore();
            std::cout << receiptTester() << std::endl;
            std::cout << "Press any key to test the ReceiptImage Class.";
            std::cin >> usrTesting;
            std::cin.ignore();
        }
        else if(userInput == 3)
        {
            std::cout << "Underconstruction Returning to main menu."
                << std::endl << std::endl;
            userInput = 0;
        }
        else if(userInput == 4)
        {
            readyToExit = true;
        }
    }

    return 1;

} // end main.



