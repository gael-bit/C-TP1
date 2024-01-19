#include "Person.hpp"

const std::string &Person::get_first_name() const
{
    return _first_name;
}

const std::string &Person::get_surname() const
{
    return _surname;
}