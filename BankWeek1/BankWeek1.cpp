// BankWeek1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This is an include statement.
// This includes the iostream library.
// Iostream library allows us to do input and output from the concole.
#include <iostream>

// We need to add a library that allows us to have string types, as
// it is not naturally supported in c++.
#include <string>

// in c++ every single line of code that we want to be executed has to be inside of a function.
// the starting point for any c++ project is this function called main
int main()
{

    // LETS DECLARE SOME VARIABLES.
    // In c++ we have to declare variables before we use them. 
    // We can give the variables types of int, float, and string.
    // To initialize a variable like int, you cana set it to 0. 
    // Initialization of a variable provides its initial value
    // at the time of construction.
    // This is why it needs to be initialized, or else it will not
    // work when it runs.
    // The function below will read type=int id_number intial value=0;
    int id_Number = 0;

    // The function below will read type=string accountName ="";
    // We need to add standard library to be able to set
    // account name to a string. 
    // It means we want to use the string type in the standard name space.
    // You kind of read this in reverse of languages like Python. 
    // Take a moment to read this and understand.
    std::string accountName = "";

    // Float is built into c++, so we do not need to include
    // any libraries.
    float balance = 0;

    // LETS UPDATE ACCOUNT NAMES VALUE
    //
    accountName = "Bob";

    // NOW LETS PRINT OUT THE NAME OF THE ACCOUNT HOLDER
     // std::cout = "standard c out."
    // This allows us to print things to the console.
    // std::cout is similar to print in Python.
    // << is the operator. 
    // This reads as, whatever is to the 
    // right of the operator will be printed to the console.
    // It may run slower than inspected if you are used to 
    // programming in Python. Python is an interpretor language.
    // That means, when you run the code it runs it in real time,
    // line by line through an interpretor.
    // C++ takes the source code and runs it through a compiler.
    // The compiler will grab the libraries that were included,
    // and goes through all of the code line by line, and converts
    // it into machine code. Then, it links all of the libraries that
    // were included with it.
    // In return we get back an executable program.
    // Lastly it runs that program.
    // endl is a way we can tell c++ that we want a new line at the end of the
    // end of the string.
    std::cout << "Hello, " << accountName << ". Your balance is" << balance << std::endl;

   
        std::cout << "Hello World!\n"; 
}

// The program should print: 
// "Hello, Bob. Your balance is 0. 
// Hello World!"