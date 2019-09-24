#include <iostream>
#include <string>
#include <exception>
#include <fstream>

//WRITING A SINGLE LINE
/* int main()
{
    std::ofstream myuuFile;
    myuuFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        myuuFile.open("myurr.txt");
        std::string str = "I am a file - you put documents in me.";
        myuuFile << str;
        myuuFile.close();
    } catch (std::ofstream::failure& nya) {
        std::cout << nya.what() << std::endl;
    }
    return 0;
} */

//WRITING MULTIPLE LINES
/* int writeMultLine(std::string&, std::string&, int);
int main () {
    std::string path;
    std::string word;
    int linum;
    std::cout << "Please insert the correct path for your txt file:" << std::endl;
    std::cin >> path;
    std::cout << "Now type in the word you want written in your file:" << std::endl;
    std::cin >> word;
    std::cout << "insert the number of lines:" << std::endl;
    std::cin >> linum;
    std::cout << "You're done! If everything is correct and foolproof, your txt file should be created in no time!" << std::endl;
    writeMultLine(path, word, linum);
}
int writeMultLine(std::string& filePath, std::string& fileWords, int fileNum) {
        std::ofstream myaFile;
        myaFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
        try {
            myaFile.open(filePath);
            std::string str = fileWords;
            for (int i = 0; i < fileNum; ++i) {
                myaFile << str << "\n";
            }
            myaFile.close();
        } catch (std::ofstream::failure& meh) {
            std::cout << meh.what() << std::endl;
        }
        return 0;
} */

