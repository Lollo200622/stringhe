//- letta in input una stringa, stampare quali lettere (distinte) sono presenti, e, per ciascuna, quante 
 //volte compare (considerare lettere maiuscole e minuscole uguali)
#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string input;
    std::cout << "Inserisci una stringa: ";
    std::getline(std::cin, input);
    
    
    for (char letter = 'a'; letter <= 'z'; letter++) {
        int count = 0;
        int l = input.length();

      
        for (int i = 0; i < l; i++) {
            char c = input[i];
        
            c = tolower(c);
            if (c == letter) {
                count++;
            }
        }

        if (count > 0) {
            std::cout << "Lettera '" << letter << "' compare " << count << " volte." << std::endl;
        }
    }

    return 0;
}
