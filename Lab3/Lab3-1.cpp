#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream file("subject.txt");
    std::string line;

    while (std::getline(file, line)) {
        if (line == ".......") {
            break;
        }

        size_t pos = line.find("love");
        if (pos != std::string::npos) {
            std::cout << pos << std::endl;
        }
    }

    std::string longLine;
    if (std::getline(file, longLine)) {
        std::cout << longLine.length() << std::endl;
    }

    return 0;
}
