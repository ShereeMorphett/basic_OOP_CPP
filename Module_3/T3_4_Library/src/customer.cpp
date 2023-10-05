#include "customer.hpp"
#include <iomanip> // For formatting the date
#include <iostream>



/**
   * \brief Construct a new Customer
   *
   * \param name the customer's name (reference to const string)
   * \param id the customer number (reference to const string)
   */
  Customer::Customer(std::string name, std::string id)
  {
    name_ = name;
    id_ = id;
  }

  /**
   * \brief Get the Customer's name as a string, takes no parameters.
   *
   * This function should not alter the Customer object's state, in other
   * words the function should be const.
   *
   * Function identifier: GetName
   *
   * \return std::string
   */

    std::string Customer::GetName() const
	{
		return name_;
	}


  /**
   * \brief Get the Customer's customer number as a string, takes no
   * parameters.
   *
   * This function should not alter the Customer object's state, in other words
   * the function should be const.
   *
   * Function identifier: GetID
   *
   * \return std::string
   */
      std::string Customer::GetID() const
	{
		return id_;
	}

  /**
   * \brief Get the Customer's number of loans as an int, takes no parameters.
   *
   * This function should not alter the Customer object's state, in other words
   * the function should be const.
   *
   * Function identifier: GetLoanAmount
   *
   * \return int
   */
    int Customer::GetLoanAmount() const
    {
      int size = GetLoans().size(); 
      return size;
    }


  /**
   * \brief Get the Customer's loans as a vector<Book>, takes no parameters.
   *
   * This function should not alter the Customer object's state, in other words
   * the function should be const.
   *
   * Function identifier: GetLoans
   *
   * \return std::vector<Book>
   */
  
    std::vector<Book> Customer::GetLoans() const
    {
        return books_;
    }


  /**
   * \brief loans a book for the customer
   *
   * Function identifier: LoanBook
   *
   * \param b  a reference to the book to be loaned
   *
   * \return  the result of loaning (from Book::loan function).
   */

  bool Customer::LoanBook(Book& b)
  {

      if (b.Loan() == false)
      {
        books_.push_back(b);    
      } 
        return b.Loan();
  }

  /**
   * \brief Returns a book loaned by the customer. The function returns
   * nothing.
   *
   * Function identifier: ReturnBook
   *
   * \param b a reference to a book
   */
  
void Customer::ReturnBook(Book& b)
{

    for (auto it = books_.begin(); it != books_.end(); ++it)
    {
        if (&(*it) == &b)
        {
            it->Restore();
            books_.erase(it);
            return;
        }
    }
}


void Customer::Print() const
{
  std::vector<Book>::iterator it;

  std::cout << "Customer:" << name_ << ", " << id_ << ", has " << GetLoanAmount() << " books on loan\n";

  for (it = GetLoans().begin(); it != GetLoans().end(); it++)
  {
      it->Print();
      std::cout << std::endl;
  }

}
