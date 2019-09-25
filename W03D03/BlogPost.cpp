#include "BlogPost.h"
//BLOG POST
int main ()
{
    BlogPost First("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet", "2000.05.04");
    BlogPost Second("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10");
    BlogPost Third("William Turton", "One Engineer is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, does not want to be the center of attention. When I asked to take his picture outside one of IBMs New York City offices, he told me that he was not really into the whole organizer profile thing.", "2017.03.28");
    std::cout << First.title << " titled by " << First.authorName << " posted at " << First.publicationDate << std::endl;
    std::cout << First.text << std::endl;
    std::cout << Second.title << " titled by " << Second.authorName << " posted at " << Second.publicationDate << std::endl;
    std::cout << Second.text << std::endl;
    std::cout << Third.title << " titled by " << Third.authorName << " posted at " << Third.publicationDate << std::endl;
    std::cout << Third.text << std::endl;
}