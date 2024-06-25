#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Inserisci una stringa: ";
    std::getline(std::cin, input);

    std::string c = input; 
    int n = c.length();
    int i;

    for (i = 0; i < n / 2 && c[i] == c[n - 1 - i]; i++);

    if (i == n / 2) {
        std::cout << "La stringa è palindroma." << std::endl;
    } else {
        std::cout << "La stringa non è palindroma." << std::endl;
    }

    return 0;
}
