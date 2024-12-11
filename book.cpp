#include "book.h"
#include <cmath>
#include <iostream>

Book::~Book() {}


Book::Book() : Book ( "не определено" ) {}

Book::Book(string bookName) :  _bookName(bookName) {}



string Book::getBookName() { return _bookName; }


void Book::setBookName(string bookName)
{
    this->_bookName = bookName;
}

void Book::showInfo()
{
    std::cout << "Название книги: " << _bookName << "\n";
}

//------------------------------------------------------

Author::Author() : Author ( "не определено", "не определено") {}

Author::Author(string bookName, string authorName) 
    : Book(bookName), _authorName(authorName) {}


string Author::getAuthorName() { return _authorName; }


void Author::setAuthorName(string authorName) {
    _authorName = authorName;
}


void Author::showInfo() {
    Book::showInfo(); 
    std::cout << "Автор: " << _authorName << "\n";
}

//------------------------------------------------------

Publisher::Publisher() : Publisher ( "не определено", "не определено", "не определено") {}

Publisher::Publisher(std::string bookName, std::string authorName, std::string publisherName)
    : Author(bookName, authorName), _publisherName(publisherName) {}

string Publisher::getPublisherName() { return _publisherName; }


void Publisher::setPublisherName(string publisherName) {
    _publisherName = publisherName;
}

void Publisher::showInfo() {
    Author::showInfo(); 
    std::cout << "Название издателя: " << _publisherName << "\n";
}