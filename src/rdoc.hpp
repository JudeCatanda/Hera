#pragma once
#include <Windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW/glfw3native.h>
#include "renderdoc_app.h"

void get_render_doc(RENDERDOC_API_1_5_0* rdoc_api);
void Throw_Error(GLFWwindow* window, const char* szErrorMessage);
