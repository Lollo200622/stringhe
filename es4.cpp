//- lette due stringhe verificare quante lettere diverse tra loro hanno in comune (se una lettera
//compare due volte in entrambe le stringhe la si conti una volta)

#include <iostream>
#include <string>
#include <map>

int contolettere(const std::string& str1, const std::string& str2) {
    std::map<char, bool> map1, map2;

    
    for (int i = 0; i < str1.length(); ++i) {
        char c = str1[i];
        if (c >= 'a' && c <= 'z') {
            map1[c] = 1; 
        }
    }
    for (int i = 0; i < str2.length(); ++i) {
        char c = str2[i];
        if (c >= 'a' && c <= 'z') {
            map2[c] = 1; 
        }
    }
    int count = 0;
    for (const auto& pair : map1) {
        if (map2.find(pair.first) != map2.end()) {
            count++;
        }
    }

    return count;
}

int main() {
    std::string str1, str2;

    std::cout << "Inserisci la prima stringa: ";
    std::getline(std::cin, str1);
    std::cout << "Inserisci la seconda stringa: ";
    std::getline(std::cin, str2);

    int result = contolettere(str1, str2);
    std::cout << "Numero di lettere diverse in comune: " << result << std::endl;

    return 0;
}
