#include "../include/book.h"

#include <iostream>
#include <fstream>

Book::Book(int id, const std::string& title, const std::string& author, int totalCopy, int availableCopy)
    : id(id), title(title), author(author), totalCopy(totalCopy), availableCopy(availableCopy) {}

int Book::getId() const {
    return id;
}

int Book::getAvailableCopy() const {
    return availableCopy;
}

bool Book::borrowBook() {
    if (availableCopy > 0) {
        --availableCopy;
        return true;
    }
    return false;
}

bool Book::returnBook() {
    if (availableCopy < totalCopy) {
        ++availableCopy;
        return true;
    }
    return false;
}

void Book::display() const {
    std::cout << "  Book ID: " << id  
              << "  Title: " << title 
              << "  Author: " << author
              << "  Total Copies: " << totalCopy
              << "  Available Copies: " << availableCopy << "\n";
}

void Book::save(std::ofstream& out) const {
    out << id << '\n' << title << '\n' << author << '\n' << totalCopy << '\n' << availableCopy << '\n';
}


Book Book::load(std::ifstream& in) {
    int id, totalCopy, availableCopy;
    std::string title, author;
    in >> id;
    in.ignore();
    std::getline(in, title);
    std::getline(in, author);
    in >> totalCopy >> availableCopy;
    return Book(id, title, author, totalCopy, availableCopy);

}