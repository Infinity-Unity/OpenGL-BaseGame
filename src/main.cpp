#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "iostream"


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

    window = glfwCreateWindow(640, 480, "Game", nullptr, nullptr);
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
   


    glClearColor(2, 3, 5, 0);

    
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);


        glfwSwapBuffers(window);


        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
