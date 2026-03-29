#include <iostream>

/*
this is example 4 of C :)
this is a simple example/intro of operators in C
what is covered in this example:
1. arithmetic operators
2. assignment operators
3. comparison operators
4. logical operators
5. bitwise operators
6. increment and decrement operators
7. operator precedence and associativity

*/

int main() {
    //1. arithmetic operators

    // these are used to perform basic mathematical operations
    // formula for arithmetic operators is
    /*
    this can be a variable or a actual number you can interchange it with either one

    variable + variable; // addition
    variable - variable; // subtraction
    variable * variable; // multiplication
    variable / variable; // division
    variable % variable; // modulus (remainder)

    */

    int x = 15;
    int y = 5; 
    int sum = x + y; // this will add x and y and store the result in sum
    int x_sum = x + 10; // this will add 10 to x and store the result in x_sum
    int difference = x - y; // this will subtract y from x and store the result
    int product = x * y; // this will multiply x and y and store the result in product
    int quotient = x / y; // this will divide x by y and store the result
    int remainder = x % y; // this will give the remainder of x divided by y and store the result in remainder

    std::cout << "Sum: " << sum << "\n";
    std::cout << "x + 10: " << x_sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    std::cout << "Quotient: " << quotient << "\n";
    std::cout << "Remainder: " << remainder << "\n";


    // 2. assignment operators

    // these are used to assign values to variables
    // formula for assignment operators is:
    /*
    quick note: value can be a variable as well if we set a variable to a value
    variable += variable; // this will add the variable to the variable and assign the result to the variable

    variable = value; // this will assign the value to the variable
    variable += value; // this will add the value to the variable and assign the result to the variable
    variable -= value; // this will subtract the value from the variable and assign the result to the variable
    variable *= value; // this will multiply the variable by the value and assign the result to the variable
    variable /= value; // this will divide the variable by the value and assign the result to the variable
    variable %= value; // this will give the remainder of the variable divided by the value and assign the result to the variable
        
    */

    int a = 10;
    a += 5; // this will add 5 to a and assign the result to a 
    std::cout << "a after += 5: " << a << "\n";
    a -= 3; // this will subtract 3 from a and assign the result to a
    std::cout << "a after -= 3: " << a << "\n";
    a *= 2; // this will multiply a by 2 and assign the result to a
    std::cout << "a after *= 2: " << a << "\n";
    a /= 4; // this will divide a by 4 and assign the result to a
    std::cout << "a after /= 4: " << a << "\n";
    a %= 4; // this will give the remainder of a divided by 4 and assign the result to a
    std::cout << "a after %= 4: " << a << "\n";

    // 3. comparison operators

    // these are used to compare two values and return a boolean result (true or false)
    // formula for comparison operators is
    /*
    this is pretty important to control flow, go back to that example to see how its used and if you understand it better

    variable == variable; // this will check if the two variables are equal and return true if they are and false if they are not
    variable != variable; // this will check if the two variables are not equal and return true if they are not and false if they are
    variable > variable; // this will check if the first variable is greater than the second variable and return true if it is and false if it is not
    variable < variable; // this will check if the first variable is less than the second variable and return true if it is and false if it is not
    variable >= variable; // this will check if the first variable is greater than or equal to the second variable and return true if it is and false if it is not
    variable <= variable; // this will check if the first variable is less than or equal to the second variable and return true if it is and false if it is not
    
    */

    int num1 = 10;  
    int num2 = 20;


    if (num1 < num2) {
        std::cout << num1 << " is less than " << num2 << "\n";
        
    } else if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << "\n";
        
    } else if (num1 == num2) {
        std::cout << num1 << " is equal to " << num2 << "\n";
    }



    // 4. logical operators

    // these are used to combine multiple conditions and return a boolean result (true or false)
    // formula for logical operators is
    /*

    variable && variable; // this will return true if both variables are true and false if either variable is false
    variable || variable; // this will return true if either variable is true and false if both variables are false
    !variable; // this will return true if the variable is false and false if the variable is true

    */

    
    int age = 25;
    int drinking_age = 21;
    if (age >= 18 && age < 65) {
        std::cout << "You are an adult and not a senior citizen.\n";
    }
    
    if (age < 18 || age >= 65){
        std::cout << "You are either a minor or a senior citizen.\n";
    }
    if (!(age >= drinking_age)){
        std::cout << "You are not old enough to drink alcohol.\n";
    } else {
        std::cout << "You are old enough to drink alcohol.\n";
    }

    // 5. bitwise operators

    // these are used to perform bitwise operations on integers
    // we use bitwise operators to manipulate individual bits of an integer value
    // this is more of an advanced topic and is not used as often as the other operators 
    // but is used a lot in low level programming and is important to understand if you want to do that type of programming
    // formula for bitwise operators is
    /*

    variable & variable; // this will perform a bitwise AND operation on the two variables and return the result
    variable | variable; // this will perform a bitwise OR operation on the two variables and return the result
    variable ^ variable; // this will perform a bitwise XOR operation on the two variables and return the result
    ~variable; // this will perform a bitwise NOT operation on the variable and return the result
    variable << value; // this will perform a left shift operation on the variable by the value and return the result
    variable >> value; // this will perform a right shift operation on the variable by the value and return the result
    
    */

    int bit1 = 5; // in binary: 0101
    int bit2 = 3; // in binary: 0011
    // this equals 1 in binary: 0001 because only the last bit is 1 in both numbers
    int and_result = bit1 & bit2; // this will perform a bitwise AND operation on bit1 and bit2 and return the result
    // this equals 7 in binary: 0111 because the first three bits are 1 in either number
    int or_result = bit1 | bit2; // this will perform a bitwise OR operation on bit1 and bit2 and return the result
    // this equals 6 in binary: 0110 because the first and second bits are 1 in either number but not both
    int xor_result = bit1 ^ bit2; // this will perform a bitwise XOR operation on bit1 and bit2 and return the result

    // this equals -6 in binary: 1010 because the bitwise NOT operator will flip all the bits of bit1 and return the result
    // see how its not 10, thats cause this is a signed integer and the leftmost bit is the sign bit 
    // and is used to indicate if the number is positive or negative and in this case it is negative so the result is -6 instead of 10
    int not_result = ~bit1; // this will perform a bitwise NOT operation on bit1 and return the result

    // this equals 10 in binary: 1010 because the left shift operator will shift all the bits of bit1 to the left by 1 and return the result
    int left_shift_result = bit1 << 1; // this will perform a left shift operation on bit1 by 1 and return the result   
    // this equals 2 in binary: 0010 because the right shift operator will shift all the bits of bit1 to the right by 1 and return the result
    int right_shift_result = bit1 >> 1; // this will perform a right shift operation on bit1 by 1 and return the result
    std::cout << "Bitwise AND: " << and_result << "\n";
    std::cout << "Bitwise OR: " << or_result << "\n";
    std::cout << "Bitwise XOR: " << xor_result << "\n";
    std::cout << "Bitwise NOT: " << not_result << "\n";
    std::cout << "Left Shift: " << left_shift_result << "\n";
    std::cout << "Right Shift: " << right_shift_result << "\n";

    // 6. increment and decrement operators
    // these are used to increment or decrement a value by 1
    // formula for increment and decrement operators is
    /*

    variable++; // this is post-increment and will use the current value first then add one
    variable--; // this is post-decrement and will use the current value first then subtract one
    ++variable; // this is pre-increment and will add one first then use the new value
    --variable; // this is pre-decrement and will subtract one first then use the new

    */
    {
        int count = 0;
        while (count++ < 5){
            std::cout << "Count: " << count << "\n"; // this will print the value of count from 1 to 5 because of the post-increment operator
        }
    }

    {
        int count = 0;
        while (++count < 5){
            std::cout << "Count: " << count << "\n"; // this will print the value of count from 1 to 4 because of the pre-increment operator
        }
    }

    {
        int count = 5;
        while (count-- > 0){
            std::cout << "Count: " << count << "\n"; // this will print the value of count from 4 to 0 because of the post-decrement operator
        }
    }

    {
        int count = 5;
        while (--count > 0){
            std::cout << "Count: " << count << "\n"; // this will print the value of count from 4 to 1 because of the pre-decrement operator
        }
    }

    // 7. operator precedence and associativity

    // precedence = which operation happens first
    // associativity = which direction operations happen in when they are equal
    // formula for operator precedence and associativity is
    /*
    variable + variable * variable; // this will evaluate the multiplication first because the multiplication operator has a higher precedence level than the addition operator
    variable * variable + variable; // this will evaluate the multiplication first because the multiplication operator has a higher precedence level than the addition operator
    variable + variable + variable; // this will evaluate from left to right because the addition operator has left-to-right associativity
    variable * variable * variable; // this will evaluate from left to right because the multiplication operator has left-to-right associativity
    variable + variable * variable - variable; // this will evaluate the multiplication first because the multiplication operator has a higher precedence level than the
    (variable + variable) * variable; // this will evaluate the addition first because the parentheses have a higher precedence level than the multiplication operator
    */
    {
        int x = 10 + 5 * 2; // this will evaluate the multiplication first and then the addition so the result will be 20
        int y = (10 + 5) * 2; // this will evaluate the addition first because of the parentheses and then the multiplication so the result will be 30
        int z = 10 + 5 + 2; // this will evaluate from left to right because the addition operator has left-to-right associativity so the result will be 17 
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n";
        std::cout << "z: " << z << "\n";
    }

    return 0;
}