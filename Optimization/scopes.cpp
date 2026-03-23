#include <iostream>

int main(){
     int x = 10; // This variable is in the scope of the main function
    std::cout << "Value of x in main: " << x << std::endl;
    {
          x = 20; // This variable is in the scope of the inner block
        
        std::cout << "Value of x in inner block: " << x << std::endl; // x is still accessible here
    }
        std::cout << "Value of x in main after inner block: " << x << std::endl; 

    return 0;
}