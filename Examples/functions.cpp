#include <iostream>

/*
this is example 2 of C++ :)
this is simple example of functions in C++
functions are reusable blocks of code that perform a specific task
and yes they can get crazier then this but don't worry about that ill show you in future examples

biggest things to do
1. declare the function
2. define the function
3. call the function

*/


// 1. declaring the functions
int add(int a, int b);
void printMessage();
bool canVote(int age);


int main() {

    // see this is where types are used from example 1 

    // 3. calling the functions
    int x = 5;
    int y = 10;

    // see how we pass x and y too the add function
    // see how me pass x and y but the function parameters are a and b this is because the parameters are just placeholders for the values we pass when we call the function
    int sum = add(x, y);
    std::cout << "The sum of " << x << " and " << y << " is: " << sum << std::endl;
    printMessage();
    int age = 20;
    bool isEligibleToVote = canVote(age);
    std::cout << "Is the person eligible to vote?: " << (isEligibleToVote ? "Yes" : "No") << std::endl; // remember don't worry about this operator you'll learn in anohter example
    return 0;
}   

// 2. defining the functions
/*

this is the formula for defining a function and basically you can replace the return

type functionName(parameters) {
    // function body
    return value; // if the function has a return type other than void
}


*/
int add(int a, int b) {
    return a + b;
}
// this function doesn't return anything so we use void as the return type
void printMessage() {
    std::cout << "Hello, this is a message from the printMessage function!" << std::endl;
}

bool canVote(int age) {
    return age >= 18;
}