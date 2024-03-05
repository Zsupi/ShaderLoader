#include "File.h"

#include <fstream>
#include <iostream>

std::string File::readFile(std::string filepath) {
    return readFile(filepath.data());
}

std::string File::readFile(const char* filePath) {
    std::string content;
    std::ifstream fileStream(filePath);
    if (!fileStream.is_open()) {
        std::cerr << "could not read file: " << filePath << '\n';
        throw "File does not exist!";
    }
    std::string line;
    while (!fileStream.eof()) {
        std::getline(fileStream, line);
        content.append(line + "\n");
    }

    fileStream.close();
    return content;
}
