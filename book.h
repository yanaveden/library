#pragma once
#include <string>
using namespace std;

class Book {
public:
    ~Book();

    Book(string bookName);
    Book();

    string getBookName();

    void setBookName(string bookName);
    
    void showInfo();
    
private:
    string _bookName; 
};

//--------------------------

class Author : public Book {
public:
    Author(string bookName, string authorName);
    Author();

    string getAuthorName();

    void setAuthorName(string authorName);

    void showInfo() ;

private:
    string _authorName; 
};

//-------------------------------


class Publisher : public Author {
public:
    Publisher(std::string bookName, std::string authorName, std::string publisherName);
    Publisher();

    string getPublisherName();

    void setPublisherName(string publisherName);

    void showInfo(); 

private:
    string _publisherName; 
};