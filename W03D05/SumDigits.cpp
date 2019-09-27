#include <iostream>

//SUM DIGITS
int sumDigit(int num) {
    if (num!=0) {
        return num%10+sumDigit(num/10);
    }
}

int main()
{
    std::cout << sumDigit(322);
    return 0;
}