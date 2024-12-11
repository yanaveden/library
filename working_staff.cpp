#include <iostream>
#include <string>
#include "working_staff.h"
using namespace std;


Director::~Director() {}

Director::Director(string firstName, string surName, string nameLibrary, double salary, bool atWork, int experience)
    : Employee(firstName, surName, nameLibrary, salary), _atWork(atWork), _experience(experience) {}

Director::Director() : Director ("не определено", "не определено", "не определено", 0.0, false, 0) {}


Director::Director(bool atWork, int experience)
    : _atWork(atWork), _experience(experience) {}

string Director::getAtWork() {
    return _atWork ? "Да" : "Нет";
}


int Director::getExperience() {
    return _experience;
}


void Director::setAtWork(bool atWork) {
    this->_atWork = atWork;
}


void Director::setExperience(int experience) {
    this->_experience = experience;
}


void Director::showInfo() {
    Employee::showInfo(); 
    cout << "На работе: " << _atWork << endl;
    cout << "Опыт: " << _experience << " лет" << endl;
}

//-------------------------------
Librarian::~Librarian() {}


Librarian::Librarian(string firstName, string surName, string nameLibrary, double salary, string specialization, int quantity)
    : Employee(firstName, surName, nameLibrary, salary), _specialization(specialization), _quantity(quantity) {}


Librarian::Librarian() : Librarian ("не определено", "не определено", "не определено", 0.0, "не определено", 0) {}

Librarian::Librarian(string specialization, int quantity)
    : _specialization(specialization), _quantity(quantity) {}


string Librarian::getSpecializationL() {
    return _specialization;
}

int Librarian::getQuantity() {
    return _quantity;
}

void Librarian::setSpecialization(string specialization) {
    this->_specialization = specialization;
}

void Librarian::setQuantity(int quantity) {
    this->_quantity = quantity;
}

void Librarian::showInfo() {
    Employee::showInfo();
    cout << "Специализация: " << _specialization << endl;
    cout << "Количество обслуженных клиентов: " << _quantity << endl;
}


