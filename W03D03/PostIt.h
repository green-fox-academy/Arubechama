//POST IT HEADER
#ifndef W03D03_POSTIT_H
#define W03D03_POSTIT_H
#include <iostream>
#include <string>


class PostIt {
public:
    std::string backgroundColour;
    std::string text;
    std::string textColour;
    PostIt(std::string bgColour, std::string txt, std::string txtColour) {
        backgroundColour = bgColour;
        text = txt;
        textColour = txtColour;
    }
};


#endif //W03D03_POSTIT_H
