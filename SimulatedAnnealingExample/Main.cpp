#include <iostream>



int main(int argc, char** argv)
{
    try
    {

    }
    catch(const std::exception& error)
    {
        std::cerr << error.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}