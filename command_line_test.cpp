#include <iostream>
#include <cmath>
#include <string>
#include <vector>



int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    const std::string help = "there is no help for you!!!";
    
    for (int i = 0; i < cmdLineArgs.size(); i++)
    {
        std::cout << cmdLineArgs[i] << std::endl;
      
        if (cmdLineArgs[i] == "help") {

        std::cout<< help << std::endl;
        }
        if (cmdLineArgs[i] == "--help") {

        std::cout<< help  << std::endl;
        }
        if (cmdLineArgs[i] == "hp") {

        std::cout<< help  << std::endl;
        }
        if (cmdLineArgs[i] == "--hp") {

        std::cout<< help  << std::endl;
        }

    }

    for (int i = 0; i < cmdLineArgs.size(); i++)
    {
        if (cmdLineArgs[i] == "-i" && cmdLineArgs[i+2] == "-o" ) {
            std::cout<< cmdLineArgs[i+1] << std::endl;
        
        } else break;

    }
    std::cout<<"First arg: " << cmdLineArgs[0] << std::endl;

}