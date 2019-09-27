#include <iostream>
int powerN(int base, int n);
int main()
{
    int base, n;
    std::cout << "Enter the base value:" << std::endl;
    std::cin >> base;
    std::cout << "Enter the power value:" << std::endl;
    std::cin >> n;
    std::cout << "Your number is " << powerN(base, n) << "." << std::endl;
}
int powerN(int base, int n) {
    if (n!=0) {
        return (base*powerN(base, n-1));
    } else {
        return 1;
    }
}
