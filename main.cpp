#include <iostream>
#include <string>

double operation(std::string str){
    double firstNum, secondNum;
    for(int i = 0; i < str.length(); i++){
        if((str[i] == '+')||(str[i] == '-')||(str[i]=='/')||(str[i]=='*')){

           // std::cout << firstNum <<" "<< secondNum << std::endl;
           if(i == 0){
               std::cout <<"Invalid Input" << std::endl;
               return 0;
           }
           if(i == str.length()-1){
               std::cout <<"Invalid Input" << std::endl;
               return 0;
           }
           firstNum = std::stod(str.substr(0,i-1));
           secondNum = std::stod(str.substr(i+1));

            switch (str[i]){
                case '+': return firstNum + secondNum;
                case '-': return firstNum - secondNum;
                case '*': return firstNum * secondNum;
                case '/': return firstNum / secondNum;
              //  default : return firstNum + secondNum;
            }
        }
    }
    std::cout << "Invalid Input";
    return 0;
}

int main() {
    std::string text;
    //double firstNum, secondNum;
    std::cout << "Input string" << std::endl;
    std::getline(std::cin, text);
    std::cout << operation(text);
    return 0;
}
