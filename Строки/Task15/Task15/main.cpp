// Дана строка. Если ее длина больше 10, то оставить в строке только первые 6 символов, иначе дополнить строку символами 'o' до длины 12.

#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    if (str.length() > 10) {
        str = str.substr(0, 6);
    } else {
        str.append(12 - str.length(), 'o');
    }

    std::cout << str << std::endl;

    return 0;
}
