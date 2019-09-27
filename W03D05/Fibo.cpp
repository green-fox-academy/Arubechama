//FIBONACCI
#include <iostream>
int fibo(int x) {
    if ((x==1)||(x==0)) {
        return x;
    } else {
        return(fibo(x-1)+fibo(x-2));
    }
}
int main()
{
    int x;
    std::cout << "Give a number - get a sequence, Fibo style: " << std::endl;
    std::cin >> x;
    std::cout << "Here is your sequence: " << std::endl;
    for (int i = 0; i < x; ++i) {
        std::cout << fibo(i) << " ";
    }
    std::cout << std::endl;
}

