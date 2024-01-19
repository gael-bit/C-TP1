#pragma once
#include <string>

class Person
{
public:
    Person(const std::string &first_name, const std::string &surname)
        : _first_name(first_name), _surname(surname)
    {
    }
    const std::string &get_first_name() const;
    const std::string &get_surname() const;

private:
    std::string _first_name;
    std::string _surname;
};