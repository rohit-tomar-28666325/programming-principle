#pragma once

#include <fstream>
#include <string>


class Book {
private:
    int id;
    std::string title;
    std::string author;
    int totalCopy;
    int availableCopy;

public:
    Book(int id, const std::string& title, const std::string& author, int totalCopy, int availableCopy);
    int getId() const;
    int getAvailableCopy() const;
    bool borrowBook();
    bool returnBook();
    void display() const;
    void save(std::ofstream& out) const;
    static Book load(std::ifstream& in);


};