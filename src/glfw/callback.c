#include "callback.h"



void error_callback(int error, const char* discription) {
  fprintf(stderr, "Error: %s\n", discription);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS){
    glfwSetWindowShouldClose(window, GLFW_TRUE);
  }
}
