#include "Shader.h"

#include "File.h"


/**
 * \brief Loads shaders with the same name. [Vertex -> .vert | Fragment -> .frag ]
 * \warning THE SHADERS HAS TO HAVE THE SAME NAME
 * \param name the name of the shader-files
 */
Shader::Shader(std::string& name) {
    this->vertexShader = File::readFile("../Skeleton/shaders/" + name + ".vert");
    this->fragmentShader = File::readFile("../Skeleton/shaders/" + name + ".frag");
}

Shader::Shader(const char* name) : Shader(std::string(name)){}

/**
 * \brief Loads shaders. [Vertex -> .vert | Fragment -> .frag ]
 * \param vertex the name of the vertex shader-files
 * \param fragment the name of the fragment shader-files
 */
Shader::Shader(std::string& vertex, std::string& fragment)
{
    this->vertexShader = File::readFile("../Skeleton/shaders/" + vertex + ".vert");
    this->fragmentShader = File::readFile("../Skeleton/shaders/" + fragment + ".frag");
}

Shader::Shader(const char* vertex, const char* fragment) : Shader(std::string(vertex), std::string(fragment)) {}

/**
 * \return fragment shader's source
 */
const char* Shader::fragment() const {
    return this->fragmentShader.data();
}

/**
 * \return vertex shader's source
 */
const char* Shader::vertex() const {
    return this->vertexShader.data();
}
