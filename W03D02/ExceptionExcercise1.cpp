#include <iostream>
#include <fstream>

//DIVIDE BY ZERO
/* int main ()
{
    int a = 10;
    int b;
    std::cout << "Please enter a number for Lady Patat to divide with:" << std::endl;
    std::cin >> b;
    if (b==0) {
        std::cout << "Woah, it failed! What a surprise.." << std::endl;
    } else {
        std::cout << a/b << std::endl;
    }
    return 0;
} */

//THIS TIME WITH EXCEPTIONS!YAY!
int main ()
{
    try {
        int a = 10;
        int b;
        std::cout << "Enter a number and Lady Patat shall divide!" << std::endl;
        std::cin >> b;
        if (b == 0) {
            throw std::string("F A I L U R E");
        } else {
            std::cout << a/b << std::endl;
        }
    }
    catch (std::string& nyan) {
            std::cout << nyan << std::endl;
        }
    return 0;
    }

