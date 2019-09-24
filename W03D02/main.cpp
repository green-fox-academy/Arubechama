#include <iostream>
#include <string>
#include <exception>

//DIVIDE BY 0 W/O EXCEPTION
/* int main ()
{
    int a = 10;
    int b = 0;
    if (b==0) {
     std::cout << std::string("Jimmy, no!");
    } else {
        std::cout << a/b << std::endl;
    }
    return 0;
} */

//DIVIDE BY 0 W/ EXCEPTION
/* int main()
{
    try {
        int a = 10;
        int b = 0;
        if (b==0) {
            throw std::string("Jimmy! Are you trying to divide something by 0 again?! That's illegal!");
        }
    } catch (std::string& e) {
        std::cout << e << std::endl;
    }
    return 0;
} */