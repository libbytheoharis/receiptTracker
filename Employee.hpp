/**
*  Libby Wichman
*  Employee.hpp
**/

#pragma once
#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee {
private:
    std::string lastName;
    int employeeNum;

public:
    Employee();
    // Add other construnctors if you have time.
    Employee(std::string namePassed, int empNum);
    ~Employee();

    /**
    *  setName function places string variable passed as the last name of the
    *  Employee of the Employee Object. A bool value is returned. True means
    *  the last name of the employee object was set successfully, false means
    *  the string parameter passed was not added to the Employee instance.
    *
    *  @param A string value that represents the last name of the employee.
    *  @pre The caller must be a valid Employee object.
    *  @post The Employee object is renamed to the namePassed string.
    **/
    bool setName(std::string namePassed);

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
    bool setNumber(int numPassed);


    /**
    *  getName returns the object's member variable lastName.
    *
    *  @pre The caller must be a valid Employee object.
    *  @post The string returned is the value stored in the object's last name
    *       member variable.
    **/
    std::string getName() const;

    /**
    *  getNumber retrieves the five digit string value of the caller Employee
    *  object.
    *
    *  @pre The caller must be a valid Employee object.
    *  @post The string returned is the value stored in the object's
    *       employeeNum member variable.
    **/
    int getNumber() const;

    /**
    *  display shows the employee information for the object on the console
    *  window.
    *
    *  @pre The caller must be a valid Employee object.
    **/
    void display();

    // Tester for Employee
    bool friend testForEmployee();
};



Employee::Employee() : lastName("Unknown"), employeeNum(99999)
{} //end default constructor

Employee::Employee(std::string namePassed, int empNum) : lastName(namePassed),
        employeeNum(empNum) {}

// Destructor not needed at this point, as there is nothing being
// created on the heap. Kept just in case one might be added in the future.
Employee::~Employee() {}

bool Employee::setName(std::string namePassed){
    bool addedName = (!namePassed.empty());

    // add safe guards to ensure the string passed is a legitimate Employeee
    // name by referencing a list of records of valid employee names.
    // Better yet, a boolean call to verify the parameter passed matches a
    // value listed in an employee table schema.
    // addedName = locatedInEmployeeTable(namePassed);

    if(addedName){
        lastName = namePassed;
    }
    return addedName;
}

bool Employee::setNumber(int numPassed){
    bool numToAdd = (numPassed > 0 && numPassed <= 99999);

    if (numToAdd){
        employeeNum = numPassed;
    }

    return numToAdd;
}


std::string Employee::getName() const
{
    return lastName;
}


int Employee::getNumber() const
{
    return employeeNum;
}


void Employee::display()
{
    std::cout << "Employee Name: " << getName() << std::endl;
    std::cout << "Employee Number: " << getNumber() << std::endl;
}


bool testForEmployee()
{
    bool testSuccessful = false;

    std::cout << "TESTING for Employee Class." << std::endl;
    Employee emp1("Wichman", 39273);
    std::cout << "Test for emp1." << std::endl;
    emp1.display();

    Employee emp2;
    std::cout << "Test for emp2 and default constructor." << std::endl;
    emp2.display();

    testSuccessful = emp2.setName("Theoharis");
    std::cout << "Test for emp2's setName. Should be true (1): "
        << testSuccessful << std::endl;
    testSuccessful = emp2.setNumber(20349);
    std::cout << "Test for emp2's setNumber. Should be true (1): "
        << testSuccessful << std::endl;
    emp2.display();

    // Need to add additional tests which try values that should not
    // allowed to be passed.
    std::cout << "Testing completed successfully. Should be true (1): ";

    return testSuccessful;
}



#endif // end of Employee class.
