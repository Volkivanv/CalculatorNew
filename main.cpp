#include <iostream>
#include <string>
#include <sstream>



int main() {
    std::stringstream text;
    std::string strText;
    double a, b;
    char c;
    std::cout << "Input string" << std::endl;
    getline(std::cin, strText);
    text.str(strText);
   // std::cout << text.str() << std::endl;
    text>>a;
    text>>c;
    text>>b;
    //std::cout<<a<<" "<<c<<" "<<b;

    switch (c) {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '/':
            std::cout << a / b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        default:
            std::cout << "Invalid Input" << std::endl;

        }


}
