#pragma once

#include <glew\glew.h>
#include <glfw.h>
#include <glm.hpp>


void computeMatricesFromInputs();
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();

