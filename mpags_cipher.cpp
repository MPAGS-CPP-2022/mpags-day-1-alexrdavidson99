#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int getMax (double num1, double num2 ) {
       int result {3};
       if(num1 > num2) {
            result = num1;
       } else {
       result = num2;
       }
       return result;

}


int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argc, argv+argc };
    char in_char {'x'};
    std::string out_str{""}; 
    // take each letter from user input and in each case:
    while (std::cin >> in_char)
    { 
        
    
    // -convert to upper case 
    if (std::isalpha(in_char))
        {   
            out_str += std::toupper(in_char);
            continue;
        }

    // - change numbers to words 
    switch (in_char)
    {
    case '1':
        out_str += "ONE";
        break;
    case '2':
        out_str += "TWO";
        break;
    case '3':
        out_str += "THREE";
        break;
    case '4':
        out_str += "FOUR";
        break;
    case '5':
        out_str += "FIVE";
        break;
    case '6':
        out_str += "SIX";
        break;
    case '7':
        out_str += "SEVEN";
        break;
    case '8':
        out_str += "EIGHT";
        break;
    case '9':
        out_str += "NINE";
        break;
    case '0':
        out_str += "ZERO";
        break;
    default:
        // do nothing 
        break;
    }
    // - Igore any other (non- alpha) characters 

    //  - In each case, add result to a string variable 
    
    }

    std::cout << out_str << std::endl ;
    // print out the new string 

 


 
}