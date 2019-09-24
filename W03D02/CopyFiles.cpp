#include <iostream>
#include <string>
#include <exception>
#include <fstream>

//COPYING THE FILE
/* void fileKOPYKAT(std::string&, std::string&);
int main () {
    std::string fileOri;
    std::string fileCopy;
    std::cout << "The name of the file you want to copy, please:" << std::endl;
    std::cin >> fileOri;
    std::cout << "Name your copycat:" << std::endl;
    std::cin >> fileCopy;
    fileKOPYKAT(fileOri, fileCopy);
    return 0;
}
void fileKOPYKAT(std::string& originalfile, std::string& copiedfile) {
    std::ifstream origifile(originalfile);
    std::ofstream copycatfile(copiedfile);
    std::string content = "";
    int i;
    for (; origifile.eof() != true; i++) {
        content += origifile.get();
    }
    i--;
    content.erase(content.end()-1);
    origifile.close();
    copycatfile << content;
    copycatfile.close();
    if (copycatfile) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
} */