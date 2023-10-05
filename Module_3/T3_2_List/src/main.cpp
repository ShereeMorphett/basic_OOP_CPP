#include <cstdlib>  // For EXIT_FAILURE macro
#include <fstream>
#include <iostream>

#include "list.hpp"

int main() 
{
  std::list<std::string> list;
  std::ifstream f("/home/sheree/Desktop/cpp-basics-2023/Module_3/T3_2_List/src/main.cpp");
  // Read the file into list
  if (!f.is_open() || !GetLines(f, list).eof()) {
    std::cerr << "Error reading main.cpp" << std::endl;
    return EXIT_FAILURE;
  }
  // Print the contents
  Print(list);
  std::cout << "---" << std::endl;
  // Sort and unique
  SortAndUnique(list);
  Print(list);
  std::cout << "---" << std::endl;
  // Print again
  Print(list);
  
}
