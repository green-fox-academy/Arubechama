#include <iostream>
int bunnyEars(int bunny, int bunears);
/* int main()
{
    int bunny;
    std::cout << "Insert the number of BUNNIES" << std::endl;
    std::cin >> bunny;
    int bunears = 2;
    std::cout << bunnyEars(bunny, bunears) << std::endl;
    return 0;
} */
int bunnyEars(int bunny, int bunears) {
    if (bunny != 0&& bunears != 0) {
        return (bunny+bunnyEars(bunny, bunears-1));
    } else {
        return 0;
    }
}


