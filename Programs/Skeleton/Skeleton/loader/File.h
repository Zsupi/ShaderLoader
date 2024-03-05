#pragma once
#include <string>

class File
{
    File() = default;
public:
    static std::string readFile(std::string filepath);
    static std::string readFile(const char* filePath);
};