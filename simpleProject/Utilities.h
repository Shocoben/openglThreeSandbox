#pragma once
#include <glew\glew.h>
#include <glm.hpp>
#include <vector>

class Utilities
{
	public:
		static GLuint loadShader(const char * vertex_file_path,const char * fragment_file_path);
		static GLuint loadBMP_custom(const char* imagepath);
		static GLuint loadTGA_glfw(const char * imagepath);
		static GLuint loadDDS(const char * imagepath);
		static bool loadOBJ(const char * path,std::vector < glm::vec3 > & out_vertices, std::vector < glm::vec2 > & out_uvs, std::vector < glm::vec3 > & out_normals);
};

