#include <iostream>
/*
this is example 3 of C++ :)
this is a simple example of control flow in C++
this might be a bit more complex but thats ok caus will cover the basics and build a good foundation

what is covered in this example:
1. if statements
2. else if statements
3. else statements
4. switch statements
5. loops (for, while, do-while)
6. break and continue statements(this is mixed in with loops)
7. ternary operator
8. goto statement (not really recommended but still good to know about)
9. nestered control flow (if statements inside if statements, loops inside loops, etc.)

*/
int main(){

// 1. if statement

    // formula for if statement is
    /*
    if (condition) {
        // code to be executed if condition is true
    }
    
    */
    int number = 10;
    if (number > 0) {
        std::cout << number << " is a positive number." << std::endl;
    }

// 2. else if statement

    // formula for else if statement is
    /*
    if (condition) {
        // code to be executed if condition is true
    } else if (condition) {
        // code to be executed if condition is true
    }
    
    */
    if (number > 0) {
        std::cout << number << " is a positive number." << std::endl;
    } else if (number < 0) {
        std::cout << number << " is a negative number." << std::endl;
    }

// 3. else statement

    // formula for else statement is
    /*
    if (condition) {
        // code to be executed if condition is true
    } else {
        // code to be executed if condition is false
    }
    */
    double temperature = 25.5;
    if (temperature > 30) {
        std::cout << "It's a hot day." << std::endl;
    } else {
        std::cout << "It's a nice day." << std::endl;
    }

// 4. switch statement

    // !!!!! IMPORTANT !!!!!
    // switch statements only work with integral types (int, char, etc.) 
    // and cannot be used with floating point types (float, double) or strings
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    // switch statements are nothing more than a way to write cleanier code and is the same as 
    // if else if statements but is used when you have multiple cases or "if conditions"
    // formula for switch statement is
    /*
    switch (expression) {
        case value1:
            // code to be executed if expression equals value1
            break;
        case value2:
            // code to be executed if expression equals value2
            break;
        default:
            // code to be executed if expression doesn't match any case
    }
    */

    int grade = 85;
    switch(grade) {
        case 90:
            std::cout << "You got an A!" << std::endl;
            break;
        case 80:
            std::cout << "You got a B!" << std::endl;
            break;
        case 70:
            std::cout << "You got a C!" << std::endl;
            break;
        default:
            std::cout << "You got a F!" << std::endl;

    }


//5 loops (for, while, do-while)

    // loops are used to repeat a block of code until a certain condition is met
    // formula for: for loop is
    /*
    for (initialization; condition; increment/decrement) {
        // code to be executed
    }
    */
    for (int i = 0; i < 5; i++) {
        // this will print the value of i from 0 to 4 hence why we have i in the print statement
        std::cout << "For loop iteration: " << i << std::endl;
    }

    // formula for while loop is
    /*
    
    while (condition) {
        // code to be executed
        break; // this will exit the loop if the condition is met 
        // continue; this will skip the rest of the code in the loop and go to the next iteration if the condition is met
    }
    */

    int count = 0;
    while (count < 10) {
        std::cout << "While loop iteration: " << count << std::endl;
        count++; // count++ is just adding 1 to its self and is the same as count = count + 1
    }

    while(true) {
        std::cout << "This will run forever until we break out of it." << std::endl;
        break; // this will exit the loop
    }

    while(count < 20) {
        count++;
        if (count == 15) {
            continue; // this will skip the rest of the code in the loop and go to the next iteration
        }
        std::cout << "While loop iteration: " << count << std::endl;
    }

// !!!!!!!!!!!!!!! IMPORTANT !!!!!!!!!!!!!!
// do-while loops will always execute the code block at least once even if the condition is
// false because the condition is checked after the code block is executed
// while loops and for loops check the condition before executing the code block 
// and if the condition is false then the code block will not be executed at all
    
// formula for do-while loop is
    /*

    do {
        // code to be executed
    } while (condition);
    
    */

    int num = 0;
    do {
        std::cout << "Do-while loop iteration: " << num << std::endl;
        num++;
    } while (num < 5);

// 7. ternary operator

    // the ternary operator is just a short and quick use of a if else statement
    // formula for ternary operator is
    /*

    condition ? expression1 : expression2;

    // if condition is true then expression1 is executed and if condition is false then expression2 is executed
    */

    int age = 18;
    std::string result = (age >= 18) ? "You are an adult." : "You are a minor.";
    std::cout << result << std::endl;

// 8. goto statement (not recommended, but still good to know about)
    // The goto statement jumps to a labeled location in the code.
    // It is generally discouraged because it can make code harder to read,
    // follow, and maintain. It may still be useful in a few rare cases.

    // formula for goto statement is
    /*
    
    goto label;

    label:
        // code to be executed

    */


        int x = 0;
        if (x == 0) {
            goto label; // this will jump to the label and execute the code there
        }
    
        std::cout << "This will be skipped because of the goto statement." << std::endl;
    
        label:
            std::cout << "This is the label that we jumped to." << std::endl;

// 9. nested control flow (if statements inside if statements, loops inside loops, etc.)
        // you can nest control flow statements inside each other to create more complex logic

        //formula for nested if statements is
        /*
        if (condition) {
            // code to be executed if condition is true
            if (condition) {
                // code to be executed if condition is true
            } else {
                // code to be executed if condition is false
            }
        } else {
            // code to be executed if condition is false
        }   
        
        */

        int a = 5;
        if (a > 0) {
            std::cout << "a is a positive number." << std::endl;
            if (a % 2 == 0) {
                std::cout << "a is an even number." << std::endl;
            } else {
                std::cout << "a is an odd number." << std::endl;
            }
        } else {
            std::cout << "a is a negative number." << std::endl;
        }

        //this is now a nested for loop which is a for loop inside a for loop
        // formula for nested for loop is
        /*
        !!!!!!! IMPORTANT !!!!!!!
            the inner loop will run for every iteration until the condition is met
            then the outer loop will increment and the inner loop will run again 
            until the condition for  is met and this will continue until the outer loop's condition is met
        !!!!!!!!!!!!!!!!!!!!!!!!!
        for (initialization; condition; increment/decrement) {
            // code to be executed
            for (initialization; condition; increment/decrement) {
                // code to be executed
            }
        }
        
        */
        for (int row = 1; row <= 3; row++) {
            for (int col = 1; col <= 3; col++) {
                std::cout << "(" << row << ", " << col << ") ";
            }
        }
            std::cout << std::endl;
        

        
    return 0;
}