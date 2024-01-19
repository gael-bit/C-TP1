#include <iomanip>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Entre ton nom: ";

    // char name[20] = ""; // avec un char lorsqu'on lui donne un nom de plus de 20 lettres il n'affiche pas le reste
    std::string name;
    std::cin >> name;
    // std::cout << "Bonjour Palluche La Falluche !" << std::endl;
    std::cout << "Bonjour " << name << std::endl;

    return 0;
}
