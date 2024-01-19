#include <iostream>
#include <vector>
#include "Person.hpp"
int main()
{
    /*Person person{"La Palluche ", "La Faluche"};
    std::cout << "La personne s'appelle " << person.get_first_name() << person.get_surname() << std::endl;
    */
    std::vector<Person> persons;
    int nb_person = 0;
    std::cout << "Nombre de personnes: ";
    std::cin >> nb_person;
    std::string first_name;
    std::string surname;

    for (auto i = 0; i < nb_person; i++)
    {
        std::cout << "Prenom : ";
        std::cin >> first_name;
        std::cout << "Nom :";
        std::cin >> surname;
        persons.emplace_back(first_name, surname);
    }

    std::cout << "\nLes personnes sont ";
    for (const auto &person : persons)
    {
        std::cout << person.get_first_name() << person.get_surname() << " ";
    }
    std::cout << std::endl;
}