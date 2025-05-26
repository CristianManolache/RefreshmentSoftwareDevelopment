//Section 4 Challenge
//============ =
//
//Create a C++ program that asks the user for their favorite number between 1 and 100
//then read this number from the console.
//
//Suppose the user enters 24.
//
//Then display the following to the console :
/*
Amazing!!That's my favorite number too!
No really!!, 24 is my favorite number!
//
//
//Below are 2 sample runs of the program :
//====================================== =
Enter your favorite number between 1 and 100 : 24
Amazing!!That's my favorite number too!
No really!!, 24 is my favorite number!

//Enter your favorite number between 1 and 100 : 75
//Amazing!!That's my favorite number too!
//No really!!, 75 is my favorite number!


*/
#include <iostream>

int main()
{
    int favoriteNumber; // My favorite number is stored here
    std::cout << "Hello, type in your favorite number between 1 and 100" << std::endl;
    std::cin >> favoriteNumber;
    std::cout << "Wow you choose " << favoriteNumber << " that's my favorite number too!" << std::endl;
    std::cout << "-------------*********************************-------------" << std::endl;
    std::cout << "No Really!!, " << favoriteNumber << " is my favorite number!" << std::endl;

    return 0;
}
