// Составить алгоритм, подсчитывающий количество слов в тексте.

#include <iostream>
#include <string>

int main() {
    int count = 0;
    std::string text;

    std::getline(std::cin, text);

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i < text.length() - 1 && text[i+1] != ' ' && text[i+1] != '\0') {
                count++;
            }
        }
    }

    if (text.length() > 0) {
        count++;
    }

    std::cout << "Количество слов: " << count << std::endl;

    return 0;
}
