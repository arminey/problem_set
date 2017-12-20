#include <iostream>

bool isUnique(const std::string& str) {
    //bool a;
    for(int i = 0; i < str.size(); ++i) {
        for(int j = i + 1; j < str.size(); ++j) {
            if(str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::string b = "aaaagaggga";
    std::cout << isUnique(b) << std::endl;
    std::string a = "hi";
    std::cout << isUnique(a) << std::endl;
}
