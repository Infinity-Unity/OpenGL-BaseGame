#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "iostream"

extern "C"
{
    _declspec(dllexport) unsigned long NvOptimusEnablement = 0x00000001; // select the  nvidia driver
}


void Display()
{
    //glClearColor();
}

const int WIDTH = 800;
const int HEIGHT = 600;

int main(void)
{
    
    
    if (!glfwInit())
    {
        std::cout << "glfwInit failed!!\n";
        return -1;
    }


    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    


    GLFWwindow* window;
    window = glfwCreateWindow(WIDTH, HEIGHT, "Game", nullptr, nullptr);
    

    if (!window)
    {
        glfwTerminate();
        return -1;
    }


    glfwMakeContextCurrent(window);
    

    if (!gladLoadGL())
    {
        std::cout << "I don`t load GLAD\n";
        return -1;
    }

    std::cout << "Renderer: " << glGetString(GL_RENDERER) << "\n";
    std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << "\n";
   
    glClearColor(0.1f,0.2f,0.2f,0);
    

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glViewport(5, 5, 800, 600);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
