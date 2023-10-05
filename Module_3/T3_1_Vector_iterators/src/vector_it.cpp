#include "vector_it.hpp"

#include <iostream>
#include <vector>
#include <string>


std::vector<int> ReadVector()
{
  std::vector<int> v;
  int input;

  while (std::cin >> input)
    v.push_back(input);
  
  return v;
}



void PrintSum1(const std::vector<int>& v)
{
   int size = v.size();


    if (size <= 1)
    {
        std::cout << std::endl;
        return;
    }

    for (int i = 0; i < size - 1; ++i)
    {
        int sum = v[i] + v[i + 1];
        std::cout << sum << " ";
    }

    std::cout << std::endl;
  
}

/**
 * \brief Prints the sum of the first and last elements, followed by the sum of
 * the second and second-to-last, and so on.
 *
 * \param values a constant vector of integer values.
 */

void PrintSum2(const std::vector<int>& v)
{
   int size = v.size();
    
    // Check if the vector is empty or has only one element
    if (size <= 1)
    {
        std::cout << std::endl;
        return;
    }
    
    for (int i = 0; i < size / 2; ++i)
    {
        int sum = v[i] + v[size - 1 - i];
        std::cout << sum << " ";
    }
    std::cout << std::endl;
}
