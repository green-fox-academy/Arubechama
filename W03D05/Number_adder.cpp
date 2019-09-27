#include <iostream>

int NumAdd(int n) {
    if (n>1) {
        return n+NumAdd(n-1);
    }
}
int main()
{
    int n = 4;
    std::cout << NumAdd(n) << std::endl;
}

