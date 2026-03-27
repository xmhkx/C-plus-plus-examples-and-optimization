#include <iostream>

/*
 this is example 1 of C++ :)
 this a intro to variables in C++
 the ones shown are your most basic and most used typlically in c++ similar to C


*/


int main() {
    // Declare and initialize variables

    // formaula for declaring a variable is
    // type variableName = value;

    int age = 25; // size: 4 bytes
    double height = 1.75; // size: 8 bytes
    float weight = 70.5f; // size: 4 bytes
    bool isStudent = true; // size: 1 byte
    std::string name = "Alice"; // size: depends on the length of the string

    // Output the variables
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
    std::cout << "Is Student: " << (isStudent ? "Yes" : "No") << std::endl; // don't worry about this operator this will be covered later
    std::cout << "Height: " << height << " meters" << std::endl;

    return 0;
}