#include <iostream>
#include "123.h"
#include "working_staff.h"
#include "book.h"         
#include "transaction.h"
using namespace std;

int main() {
    Director director("Иван", "Иванов", "Центральная библиотека", 50000.0, true, 10);
    Librarian librarian("Анна", "Петрова", "Центральная библиотека", 30000.0, "Специалист по редким книгам", 5);
    
    cout << "Информация о директоре:" << endl;
    director.showInfo();
    cout << endl; 

    cout << "Информация о библиотекаре:" << endl;
    librarian.showInfo();
    cout << endl;

    Client client("Иван", "Иванов", 12345);
    
    Book book("Война и мир");
    
    Transaction transaction("Иван", "Иванов", 12345, "Война и мир", 14);
    
    cout << "Информация о клиенте:" << endl;
    client.showInfo();
    cout << endl;

    cout << "Информация о книге:" << endl;
    book.showInfo();
    cout << endl;
    
    transaction.showInfo();
    
    LateReturn lateReturn("Синельников", "Станислав",  4567, "Война и мир", 16, 1.5);
    lateReturn.returnBook(true);
    
    cout << endl << "Информация о просроченном возврате:" << endl;
    lateReturn.showInfo();

    return 0;
}
