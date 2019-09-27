//FIND MAX
//I wonder - where did Max even go?
#include <iostream>

int findMax(int yarr[], int ele) {
    if (ele==1) {
        return yarr[0];
    } else {
        return std::max(yarr[ele-1], findMax(yarr, ele-1));
    }
}

int main()
{
    int yarr[5] = {42, 420, 69, 76, 11};
    int ele = sizeof(yarr)/ sizeof(yarr[0]);
    std::cout << "The Lady of house Patat hath found'th y'r maximum: " << findMax(yarr, ele) << std::endl;
}

