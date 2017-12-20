#include <iostream>

std::string Replace (std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            str.replace(i, 1, "%20");
        }
    }
    return str;
}

int main() {
    std::string a = "Hello world !";
    std::cout << Replace(a) << std::endl;
}
