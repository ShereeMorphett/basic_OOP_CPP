#ifndef ELEC_AS_CPP_BOOK
#define ELEC_AS_CPP_BOOK

#include <ctime>
#include <string>

/**
 * \brief Date structure
 *
 */
struct Date
{
  int day;   /** The day of the date*/
  int month; /** The month of the date*/
  int year;  /** The year of the date*/

  /**
   * \brief Constructs a Date after setting its date field to local calendar
   * date of the computer.
   *
   * \return Date New Date object
   *
   * \note This is a static function. We have not covered static class member
   * functions. But, for this example it is enough to assume that
   * static members are associated with classes not objects. Thus,
   * static members are called with Date::Today() syntax.
   */
  static Date Today()
  {
    Date d;
    std::time_t t = time(0);
    struct tm* now = localtime(&t);
    d.day = now->tm_mday;
    d.month = now->tm_mon + 1;
    d.year = now->tm_year + 1900;
    return d;
  }
};

// Placeholder class definitions for Book, Customer, and Library
class Book {
public:
    Book(std::string name, std::string author, std::string isbn);
    Book(std::string name, std::string author, std::string isbn, bool status, std::initializer_list<int> date);
    std::string GetName() const;
    std::string GetAuthor() const;
    std::string GetISBN() const;
    bool GetStatus() const;
    Date GetDueDate() const;
    void Print();
    bool Loan();
    void Restore();
private:
    // Placeholder data members
    std::string name_;
    std::string author_;
    std::string isbn_;
    Date due_date_;
    bool loaned_;
};

#endif
