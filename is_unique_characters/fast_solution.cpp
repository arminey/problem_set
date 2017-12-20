#include <iostream>

bool isUnique(const std::string& str) {
    bool arr[128] = {0};
    int index;
    for(int i = 0; i < str.size(); ++i) {
         index = (int)str[i];
         if(arr[index]) {
             return false;
         }
         arr[index] = true;
    }
    return true;
}

int main () {
    std::string a = "hi";
    std::cout << isUnique(a); 
}
