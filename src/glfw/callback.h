

#ifndef CALLBACK_H
#define CALLBACK_H

#include <stdio.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

void error_callback(int error, const char* discription);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);



#endif
