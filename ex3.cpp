#include <iostream>

int main()
{
    int n;
    char tc[30], c;
    float x;
    std::cout << "saisir un entier: ";
    std::cin >> n;
    std::cout << "saisir un reel: ";
    std::cin >> x;
    std::cout << "saisir une phrase: ";
    std::cin >> tc;
    std::cout<<"saisir une lettre: ";
    std::cin >> c;
    std::cout << "Affichage : " << n << " " << x << " " << tc << " " << c << " "<< "\n";
    
    return 0;
}