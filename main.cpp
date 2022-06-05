#include <iostream>
#include "Adder/adder.h"
#include <GLFW/glfw3.h>
#include <OLASConfig.h>

int main(int argc, char* argv[ ]){
  std::cout << "Helllo, Ramazan";
  std::cout << argv[0] << " Version " <<  OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << "\n";

  float res = adder(13.4, 45.32);

  std::cout << "\nresult_2 : " << res;

  GLFWwindow *window;

  if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

  return 0;
}