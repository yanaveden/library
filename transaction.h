#pragma once
#include <iostream>
#include <string>
#include "123.h" 
#include "book.h"
using namespace std;

class Transaction : public Client, public Book {
public:
    Transaction(std::string firstName, std::string surName, int bilet, string bookName, int borrowDays);
    Transaction();
    ~Transaction();

    int getBorrowDays() ;
    void setBorrowDays(int borrowDays);
    void showInfo() ;

private:
    int _borrowDays; 
};

//-------------------------------------------

class LateReturn : public Transaction {
public:
    LateReturn(string firstName, string surName, int bilet, string bookName, int borrowDays, double lateFeePerDay);

    void returnBook(bool isReturned);
    void showInfo();

private:
    bool _isReturned;     
    int _overdueDays;     
    double _lateFee;     
    double _lateFeePerDay; 
};