#include <iostream>

bool isPermutation(std::string str1, std::string str2) {
    std::size_t found = str1.size() >= str2.size() ? str1.find(str2) : str2.find(str1);
    return found != std::string::npos;
}

int main() {
    std::string a = "Yepremyan";
    std::string b = "Armine Yepremyan";
    std::cout << isPermutation(a, b) << std::endl;
}
