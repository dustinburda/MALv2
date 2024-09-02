//
// Created by Dustin on 9/1/24.
//
#include <iostream>

std::string READ (const std::string& readline) {
    return readline;
}

std::string EVAL(const std::string& line) {
    return line;
}

std::string PRINT(const std::string& line) {
    return line;
}

std::string rep(const std::string& input) {
    return PRINT(EVAL((READ(input))));
}



int main() {
    while(true) {
        std::cout << "user> ";

        std::string input;
        std::getline(std::cin, input);

        if(std::cin.eof())
            return 0;

        std::cout << rep(input) + "\n";
    }
}
