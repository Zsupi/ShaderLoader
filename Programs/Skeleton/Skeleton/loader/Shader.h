#pragma once
#include <string>

class Shader
{
    std::string vertexShader;
    std::string fragmentShader;
    std::string geometryShader;
public:
    Shader(std::string& name);
    Shader(std::string& vertex, std::string& fragment);
    Shader(const char* name);
    Shader(const char* vertex, const char* fragment);
    const char* fragment() const;
    const char* vertex() const;
};
