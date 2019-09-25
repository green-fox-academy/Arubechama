#ifndef W03D03_BLOGPOST_H
#define W03D03_BLOGPOST_H
#include <iostream>
#include <string>

class BlogPost {
public:
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;
    BlogPost(std::string auNa,std::string titl, std::string txt, std::string pubDate) {
        authorName = auNa;
        title = titl;
        text = txt;
        publicationDate = pubDate;
    }
};


#endif //W03D03_BLOGPOST_H
