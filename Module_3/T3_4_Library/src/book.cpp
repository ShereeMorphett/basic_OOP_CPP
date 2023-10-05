#include "book.hpp"

#include <ctime>
#include <iostream>


  /**
   * \brief Construct a new Book object
   *
   * \param name the book's name (reference to const string),
   * \param author the book's author (reference to const string),
   * \param isbn the book's ISBN number (reference to const string)
   * \param loaned the status of the book, loaned or not (bool), which is by
   *               default false
   * \param due_date due date as a Date structure (Date), which is by default
   *                  0-0-0
   */
   Book::Book(std::string name, std::string author, std::string isbn)
	{
		name_ = name;
		author_ = author;
		isbn_ = isbn;
		loaned_ = false;
		due_date_.day = 0;
		due_date_.month = 0;
		due_date_.year = 0;
	}

  Book::Book(std::string name, std::string author, std::string isbn, bool status, std::initializer_list<int> date)
      : name_(name), author_(author), isbn_(isbn), loaned_(status)
  {
      if (date.size() >= 3)
      {
          auto it = date.begin();
          due_date_.day = *it;
          due_date_.month = *(it + 1);
          due_date_.year = *(it + 2);
      }
      else
      {

          due_date_.day = 0;
          due_date_.month = 0;
          due_date_.year = 0;
      }
  }

  /**
   * \brief Get the Name of the book. It has no parameters.
   *
   * This function should not alter the Book object's state, in other words the
   * function should be const.
   *
   * Function identifier: GetName
   *
   * \return the Book's name as a std::string
   */
  	std::string Book::GetName() const
	{
		return name_;
	}

  /**
   * \brief Get the Book's author as a string, takes no parameters.
   *
   * This function should not alter the Book object's state, in other words the
   * function should be const.
   *
   * Function identifier: GetAuthor
   *
   * \return std::string
   */
  	std::string Book::GetAuthor() const
	{
		return author_;
	}

  /**
   * \brief Get the Book's ISBN as a string, takes no parameters.
   *
   * This function should not alter the Book object's state, in other words the
   * function should be const.
   *
   * Function identifier: GetISBN
   *
   * \return std::string
   */
  	std::string Book::GetISBN() const
	{
		return isbn_;
	}

  /**
   * \brief Get the Book's status as a bool, takes no parameters.
   *
   * This function should not alter the Book object's state, in other words the
   * function should be const.
   *
   * Function identifier: GetStatus
   *
   * \return true if the book is loaned
   * \return false otherwise
   */
	bool Book::GetStatus() const
	{
		return loaned_;
	}

  /**
   * \brief Get the Book's due date, takes no parameters.
   *
   * This function should not alter the Book object's state, in other words the
   * function should be const.
   *
   * Function identifier: GetDueDate
   *
   * \return Date
   */
  Date Book::GetDueDate() const
	{
		return due_date_;
	}

  /**
   * \brief Loans the book
   *
   * 1. Sets the due date to current date + 1 month.
   *    For example, if today is 1.9 ==> due date 1.10.
   *
   * 2. Sets the status to true returns true if loaning was successful
   *
   * 3. Returns the book's new status
   *
   * HINT: There is a function Today in the Date struct that returns the
   *       current date
   *
   * Function identifier: Loan
   *
   * \return true if loaning is successful
   * \return false otherwise.
   */

	bool Book::Loan()
	{
		if (loaned_ == false)
		{
			loaned_ = true;
			due_date_ = due_date_.Today();
			due_date_.month += 1;
			return true;
		}
		else
			return false;

	}

  /**
   * \brief Restores the book status to not loaned
   *
   * 1. sets the due date to 0-0-0
   *
   * 2. sets the status to false
   *
   * Function identifier: Restore
   */
  	void Book::Restore()
	{
		loaned_ = false;
		due_date_.day = 0;
		due_date_.month = 0;
		due_date_.year = 0;
	}

  /**
   * \brief Prints the book's information to the standard output stream.
   *
   * The function takes no parameters and returns nothing.
   * This function should not alter the Book object's state, in other words
   * the function should be const.
   *
   * The output format should be like the following:
   *
   * Book: <name>, author: <author>, ISBN: <isbn>, loaned <true/false>, due
   * date: <day>.<month>.<year>\n
   *
   * (On a single line)
   *
   * Function identifier: Print
   */
	void Book::Print()
	{
		std::cout << "Book: " << GetName() << ", author: "<< author_ << ", ISBN: " << isbn_ << ", loaned ";
    if (GetStatus() == 0)
      std::cout << "false, ";
    else
      std::cout << "true, ";
    std::cout << "due date: ";
		std::cout << GetDueDate().day << "." << GetDueDate().month << "." << GetDueDate().year << std::endl;
	}
