#include "transaction.h"


Transaction::Transaction(std::string firstName, std::string surName, int bilet, string bookName, int borrowDays)
    : Client(firstName, surName, bilet), Book(bookName), _borrowDays(borrowDays) {}

Transaction::Transaction() : Transaction ("не определено", "не определено", 0, "не определено", 0) {}

Transaction::~Transaction() {}


int Transaction::getBorrowDays()  {
    return _borrowDays;
}

void Transaction::setBorrowDays(int borrowDays) {
    _borrowDays = borrowDays;
}


void Transaction::showInfo() {
    cout << "Информация о транзакции:" << endl;
    Client::showInfo(); 
    Book::showInfo();   
    cout << "Количество дней на которые взята книга: " << _borrowDays << endl;
}

//--------------------------

LateReturn::LateReturn(string firstName, string surName, int bilet, string bookName, int borrowDays, double lateFeePerDay)
    : Transaction(firstName, surName, bilet, bookName, borrowDays), 
      _isReturned(false), _overdueDays(0), _lateFee(0.0) {}

void LateReturn::returnBook(bool isReturned) {
    _isReturned = isReturned;

    if (_isReturned) {
        if (getBorrowDays() < 0) {
            _overdueDays = -getBorrowDays(); 
            _lateFee = _overdueDays * _lateFeePerDay; 
        } else {
            _overdueDays = 0;
            _lateFee = 0.0;
        }
    }
}

void LateReturn::showInfo() {
    cout << "Название книги: " << getBookName() << endl; 

    if (_isReturned) {
        cout << "Книга была возвращена." << endl;
        if (_overdueDays > 0) {
            cout << "Просрочка: " << _overdueDays << " дней." << endl;
            cout << "Штраф за просрочку: " << _lateFee << " валютных единиц." << endl;
        } else {
            cout << "Книга была возвращена вовремя." << endl;
        }
    } else {
        cout << "Книга еще не была возвращена." << endl;
    }
}