#pragma once
#include <iostream>
#include <string>
#include "123.h"
using namespace std;


class Director : public Employee {
public:
    virtual ~Director();

    Director(string firstName, string surName, string nameLibrary, double salary, bool atWork, int experience);
    Director();
    Director(bool atWork, int experience);

    string getAtWork();
    int getExperience(); 
    
    void setAtWork(bool atWork);
    void setExperience(int experience);

    void showInfo();

private:
    bool _atWork; 
    int _experience;
};

class Librarian : public Employee {
public:
    ~Librarian();

    Librarian(string firstName, string surName, string nameLibrary, double salary, string specialization, int quantity);
    Librarian();
    Librarian(string specialization, int quantity);
    
    string getSpecializationL();
    int getQuantity();
    
    void setSpecialization(string specialization);
    void setQuantity(int quantity);
    
    void showInfo();
    
private:
    string _specialization; 
    int _quantity; 
};


