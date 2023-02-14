//Дана строка. Вставить после каждого символа пробел. Пробел не считается символом, после которого надо ставить пробел.

#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
        if (i < str.length() - 1 && str[i] != ' ') {
            result += ' ';
        }
    }

    std::cout << result << std::endl;

    return 0;
}
