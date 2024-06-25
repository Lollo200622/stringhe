//- lette due stringhe verificare quante lettere hanno in comune (se una lettera compare due volte in
//entrambe le stringhe la si conti due volte)

#include <iostream>
#include <string>
#include <map>

int contolettere(const std::string& str1, const std::string& str2) {
    std::map<char, int> map1, map2;

	 for (int i = 0; i < str1.length(); ++i) {
        char c = str1[i];
        if (c >= 'a' && c <= 'z') {
            map1[c] = true; 
        }
    }
    for (int i = 0; i < str2.length(); ++i) {
        char c = str2[i];
        if (c >= 'a' && c <= 'z') {
            map2[c] = true; 
        }
    }

    int count = 0;
    
    for (const std::pair<char, int>& pair : map1) {
        char letter = pair.first;
        int map_str1 = pair.second;
        int map_str2 = map2[letter];

       
        if (map_str2 > 0) {
            count += std::min(map_str1, map_str2);
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
    std::cout << "Numero di lettere comuni : " << result << std::endl;

    return 0;
}

