#include "library.hpp"

#include <iostream>

#include "book.hpp"
#include "customer.hpp"


Library::Library(std::string name)
{
  name_ = name;
}

  /**
   * \brief Get the library's name as a string, takes no parameters.
   *
   * This function should not alter the Library object's state, in other words
   * the function should be const.
   *
   * Function identifier: GetName
   *
   * \return std::string
   */
  	std::string Library::GetName() const
	{
		return name_;
	}

  /**
   * \brief Get the Library's books as a reference to a vector<Book>, takes no
   * parameters.
   *
   * Function identifier: GetBooks
   *
   * \return std::vector<Book>&
   */
  
    std::vector<Book>& Library::GetBooks()
	{
		return books_;
	}

  /**
   * \brief Get the Library's customers as a reference to a vector<Customer>,
   * takes no parameters.
   *
   * Function identifier: GetCustomers
   *
   * \return std::vector<Customer>&
   */
  
    std::vector<Customer>& Library::GetCustomers()
	{
		return customers_;
	}

  /**
   * \brief Searches for a book by its name.
   *
   * Function identifier: FindBookByName
   *
   * \param name the name of the book (a const reference to a string)
   *
   * \return a copy of the found Book object if it can be found. If a Book is
   * not found, a new book with an empty stringLibrary::s as parameters for the name,
   * author and isbn is returned.
   */

	Book Library::FindBookByName( std::string name)
	{
		std::vector<Book>::iterator it;

		for (it = books_.begin(); it != books_.end(); it++)
		{
			if (it->GetName() == name)
			{
				return *it;
			}
		}
		return Book("", "", "");
	}

  /**
   * \brief Searches for books by their author.
   *
   * Function identifier: FindBooksByAuthor
   *
   * \param name the author name (a const reference to a string)
   *
   * \return a vector of Books with the specified author. If no books are found,
   * an empty vector is returned.
   */
  std::vector<Book> Library::FindBooksByAuthor(std::string author)
  {
      std::vector<Book> matchingBooks; // Create an empty vector to hold matching books

      for (const Book& book : books_)
      {
          if (book.GetAuthor() == author)
          {
              matchingBooks.push_back(book); // Add the matching book to the vector
          }
      }

      return matchingBooks; // Return the vector of matching books
  }


  /**
   * \brief Returns  a vector of loaned Books, takes no parameters.
   *
   * Function identifier: FindAllLoanedBooks
   *
   * \return a vector of loaned Books. If no books are found,
   * an empty vector is returned.
   */
  	std::vector<Book> Library::FindAllLoanedBooks()
	{
		std::vector<Book> loanedBooks;
		std::vector<Book>::iterator it;

		for (it = books_.begin(); it != books_.end(); it++)
		{
			if (it->GetStatus() == true)
			{
				loanedBooks.push_back(*it);	//potential issue with pointers
			}
		}
		return loanedBooks;
	}


  /**
   * \brief Searches for a customer with specfied id
   *
   * Function identifier: FindCustomer
   *
   * \param id the id of the customer (a const reference to a string)
   *
   * \return A copy of the found customer. if a Customer is not found, a new
   * Customer with empty name and id is returned.
   */

  Customer Library::FindCustomer(std::string id)
  {
	  std::vector<Customer>::iterator it;

		for (it = GetCustomers().begin(); it != GetCustomers().end(); it++)
		{
			if (it->GetID() == id)
			{
				return *it;
			}
		}
		return Customer("", "");
  }