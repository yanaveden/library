#pragma once
#include <iostream>
#include <string>
using namespace std;

class User {
public:
    virtual ~User();

    User(string firstName, string surName);
    User();

    string getFirstName();
    string getSurname();

    void setFirstName(string firstName);
    void setSurname(string surName);
    
    virtual void showInfo();
    
private:
    string _firstName; 
    string _surName; 
};

//-------------------------------------------------

class Employee : public User {
public:
    ~Employee();

    Employee(string firstName, string surName, string nameLibrary, double salary);
    Employee();
    Employee(string nameLibrary, double salary);
    
    string getNameLibrary();
    void setNameLibrary(string nameLibrary);
    
    double getSalary();
    void setSalary(double salary);
    
    void showInfo();

private:
    string _nameLibrary; 
    double _salary; 
};

//-------------------------------------------------

class Client : public User {
public:

    ~Client();
    
    Client(string firstName, string surName, int bilet);
    Client();
    Client(int bilet);
    
    int getBilet();
    void setBilet(int bilet);
    
    void showInfo();

private:
    int _bilet;
};