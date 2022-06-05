#include <iostream>
#include <GLFW/glfw3.h>
#include <OLASConfig.h>

#ifdef USE_ADDER
  #include <adder.h>
#endif

int main(int argc, char* argv[ ]){
  std::cout << "Helllo, Ramazan";
  std::cout << argv[0] << " Version " <<  OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << "\n";

#ifdef USE_ADDER
  float res = adder(13.4, 45.32);
  std::cout << "\nuse adder result : " << res;
#else
  float res = 13.4 + 45.32;
  std::cout << "\nnot use adder result : " << res;
#endif

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