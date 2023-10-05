#ifndef ELEC_AS_CPP_CUSTOMER
#define ELEC_AS_CPP_CUSTOMER

#include <string>
#include <vector>

#include "book.hpp"

class Customer
{
    public:
        Customer(std::string name, std::string id);
        std::string GetName() const;
        std::string GetID() const;
        int GetLoanAmount() const;
        void Print() const;
        bool LoanBook(Book& b);
        void ReturnBook(Book& book);
        std::vector<Book> GetLoans() const;
    private:
        std::string name_;
        std::string id_;
        std::vector<Book> books_;
};

#endif
