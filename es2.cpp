//- letta in input una stringa e un carattere, verificare quante volte quel carattere compare all’interno della stringa

#include <iostream>
#include <string>

int main() {
    std::string input;
    char carattere;
    std::cout << "Inserisci una parola: ";
    std::getline(std::cin, input);

    std::cout << "Inserisci un carattere: ";
    std::cin >> carattere;ù
    

    int i;
    int count = 0;
    int l = input.length();
    for ( i = 0; i < l; i++) {
        if (input[i] == carattere) {
            count++;
        }
    }

    std::cout << "Il carattere '" << carattere << "' compare " << count << " volte nella stringa." << std::endl;

    return 0;
}
