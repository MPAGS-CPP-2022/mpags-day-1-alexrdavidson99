#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs{argv, argv + argc};
    const std::string help =
        " will add a more indepth help when code is updated";
    // outputs the help command 
    for (int i = 0; i < cmdLineArgs.size(); i++) {
        std::cout << cmdLineArgs[i] << std::endl;

        if ((cmdLineArgs[i] == "help") || (cmdLineArgs[i] == "--help") ||
            (cmdLineArgs[i] == "--hp") || (cmdLineArgs[i] == "hp")) {
            std::cout << help << std::endl;
        }
    }
    // input and output files names  
    for (int i = 0; i < cmdLineArgs.size(); i++) {
        if (cmdLineArgs[i] == "-o"|| (cmdLineArgs[i] == "-i")) {
            if (i + 1 == cmdLineArgs.size()) {
                break;
            }
            std::cout << cmdLineArgs[i + 1] << std::endl;
        }  
    }
}