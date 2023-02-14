// Составить алгоритм, находящий, сколько раз в тексте сочетание “мир” является отдельным словом (пробелы перед и после).
// (P.s. использую "mir", т.к. в среде с русскими симолами не работает.)

#include <iostream>
#include <string>

int main() {
    int count = 0;
    std::string text;

    std::getline(std::cin, text);

    for (int i = 0; i < text.length() - 2; i++) {
        if (text[i] == 'm' && text[i+1] == 'i' && text[i+2] == 'r') {
            if ((i == 0 || text[i-1] == ' ') && (i+3 == text.length() || text[i+3] == ' ')) {
                count++;
            }
        }
    }

    std::cout << "Количество отдельных слов 'мир': " << count << std::endl;

    return 0;
}
