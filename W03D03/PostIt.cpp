//POST IT
#include "PostIt.h"
int main ()
{
    PostIt First("Orange", "Idea1", "Blue");
    PostIt Second("Pink", "Awesome!", "Black");
    PostIt Third("Yellow", "Superb!", "Green");
    std::cout << First.text << std::endl;
    std::cout << Second.text << std::endl;
    std::cout << Third.text << std::endl;
}
