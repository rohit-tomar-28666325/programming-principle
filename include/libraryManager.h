
#pragma once

#include "library.h"
#include "transaction.h"
#include "user.h"
#include <fstream>
#include <vector>

class LibraryManager {
private:
    static Library library;
    // std::vector<User> users;                  
    vector<Transaction> transactions;

public:
    ~LibraryManager();
    void start();                     
    void logTransaction(const Transaction& transaction);  
    void displayTransactions() const; 
    void saveData() const;
    void loadData();
    std::tm calculateFutureDate(const std::tm& currentDate, int daysToAdd);
    static Library getLibrary() { return library; }
    size_t getTransactionCount() const { return transactions.size(); }

};
