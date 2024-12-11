#include "123.h"
#include <cmath>

User::~User() {}

User::User() : User("не определено", "не определено") {}

User::User(string firstName, string surName) : _firstName(firstName), _surName(surName) {}

string User::getFirstName() { return _firstName; }
string User::getSurname() { return _surName; }

void User::setFirstName(string firstName) {
    this->_firstName = firstName;
}

void User::setSurname(string surName) {
    this->_surName = surName;
}

void User::showInfo() {
    std::cout << "Имя: " << _firstName << "\n";
    std::cout << "Фамилия: " << _surName << "\n";
}

//--------------------------------------------------------------------------------

Employee::~Employee() {}


Employee::Employee(string firstName, string surName, string nameLibrary, double salary)
    : User(firstName, surName), _nameLibrary(nameLibrary), _salary(salary) {}

Employee::Employee() : Employee("не определено", "не определено", "не определено", 0.0) {}


Employee::Employee(string nameLibrary, double salary)
    : _nameLibrary(nameLibrary), _salary(salary) {}


string Employee::getNameLibrary() {
    return _nameLibrary;
}

void Employee::setNameLibrary(string nameLibrary) {
    this->_nameLibrary = nameLibrary;
}

//--------------------------------------------------------------------------------


Client::~Client() {}

Client::Client(string firstName, string surName, int bilet)
    : User(firstName, surName), _bilet(bilet) {}

Client::Client() : Client("не определено", "не определено", 0) {}


Client::Client(int bilet)
    : _bilet(bilet) {}


int Client::getBilet() {
    return _bilet;
}

void Client::setBilet(int bilet) {
    this->_bilet = bilet;
}


void Client::showInfo() {
    User::showInfo();
    cout << "Номер читательского билета: " << _bilet << endl;
}
double Employee::getSalary() {
    return _salary;
}

void Employee::setSalary(double salary) {
    this->_salary = salary; 
}

void Employee::showInfo() {
    User::showInfo();
    cout << "Библиотека: " << _nameLibrary << endl;
    cout << "Зарплата: " << _salary << endl;
}