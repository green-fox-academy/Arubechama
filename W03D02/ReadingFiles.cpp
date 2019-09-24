#include <iostream>
#include <exception>
#include <string>
#include <fstream>

//PRINT EACH LINE
/* int main ()
{
    std::ifstream nyanFile;
    try {
        nyanFile.open("H A T R E D.txt");
        std::string texty;
        if (!nyanFile.is_open()) {
            throw std::string("No such file in this realm.");
        }
        int lineNumber = 0;
        while (!nyanFile.eof()) {
            getline(nyanFile, texty);
            std::cout << texty << std::endl;
            lineNumber++;
        }
        std::cout << "The amount of lines in this file is " << lineNumber << "." << std::endl;
        nyanFile.close();
    } catch (std::string& nyan) {
        std::cout << nyan << std::endl;
    }
    return 0;
} */

int lineCounter(std::string &);
int main ()
{
    std::string randFile;
    std::cout << "Enter the name of the file for Lady Patat:" << std::endl;
    getline(std::cin, randFile, '\n');
    lineCounter(randFile);
    return 0;
}
int lineCounter(std::string &randFile) {
    int lineNumb = 0;
    std::string text;
    std::ifstream datFile(randFile);
    if (!datFile) {
        std::cout << 0 << std::endl;
    }
    while (!datFile.eof()) {
        getline(datFile, text);
        lineNumb++;
    }
    std::cout << lineNumb << " is the number you were looking for." << std::endl;
}

