#include <iostream>
#include <limits>
int main(){

    int T = 0;

    while(true)
    
        {
            std::cout << "Please enter an integer between 5 and 10 " << std::endl;
            std::cin >> T;

            if(std::cin.fail() || T < 5 || T > 10)
                {
                  std::cin.clear();
                  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                  std:: cout << "Invalid input, please enter a valid integer" << std::endl;
                }

         else
             {
                std::cout << "Input(" << T << ")" << " has been accepted"<< std::endl;
                break;
            }




        }
}