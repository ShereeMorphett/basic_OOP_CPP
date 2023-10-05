#include "vector.hpp"

#include <vector>


/*int LargestNumber(const std::vector<int>& v) {
    int largest = -1000;  // hmm... -1000 is the smallest number
    for (unsigned int i = 0; i < v.size(); i++) {
        if (v[i] > largest)
            largest = v[i];
    }
    return largest;
}*/

/**
 * \brief Finds the minimum value in the specfied vector of integers
 *
 * \param v The vector of integers that has at least one element
 * \return The minimum value in the vector
 */

int GetMin(std::vector<int> v)
{
	int min = 2147483647;

    for (unsigned int i = 0; i < v.size(); i++)
	{
        if (v[i] < min)
            min = v[i];
    }
  return min; 
}

int GetMax(std::vector<int> v)
{
	int max = -2147483640;

    for (unsigned int i = 0; i < v.size(); i++)
	{
        if (v[i] > max)
            max = v[i];
    }
  return max; 

}

double GetAvg(std::vector<int> v)
{
	double average = 0.0;

	for (unsigned int i = 0; i < v.size(); i++)
	{
		average += v[i];
	}
	if (average != 0 && v.size() != 0)
		average = average / v.size();

	return average; 
}
