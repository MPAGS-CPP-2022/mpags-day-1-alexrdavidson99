#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs{argv, argv + argc};
    const std::string help =
        " there is no help for you!!!\n This is how the code will hopefully work in the in the end \n but at the moment i am just tring to see how the how vector thing works\
        \nlook this is gett very big now is there a better way of doing this ";
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