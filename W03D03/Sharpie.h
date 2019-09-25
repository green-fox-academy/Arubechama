#ifndef W03D03_SHARPIE_H
#define W03D03_SHARPIE_H

#include <iostream>
#include <string>
class Sharpie {
public:
    Sharpie() {
        _inkAmount = 100;
    }
    void use() {
        _inkAmount--;
    }
private:
    std::string colour;
    float width;
    float inkAmount;
    float _inkAmount;
};


#endif //W03D03_SHARPIE_H
