#include "matrix.hpp"

#include <iostream>
#include <vector>

// Implement the functions here
// Remember to use auto and ranged for-loops when they can be used!

// Assumes 'm' is a square matrix

/**
 * \brief Reads n x n matrix elements from the standard input stream one number
 * at a time.
 *
 * \param n The number of rows and columns of the matrix.
 * \return The matrix filled with read elements
 */

Matrix ReadMatrix(int n)
{
    int totalElements = n * n;
    Matrix mat(n, std::vector<int>(n));

    for (int i = 0; i < totalElements; i++)
    {
        std::cin >> mat[i / n][i % n];
    }

    return mat; 
}

Matrix Rotate90Deg(const Matrix& m)
{
    int rows = m.size();
    if (rows == 0)
    {

        return Matrix();
    }

    int cols = m[0].size();
    if (cols == 0)
    {
        return Matrix();
    }
    if (rows != cols)
    {
        return Matrix();
    }

    Matrix rotatedMatrix(cols, std::vector<int>(rows));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            rotatedMatrix[j][rows - 1 - i] = m[i][j];
        }
    }
    return rotatedMatrix;
}

void Print(const Matrix& m)
{
    int rows = m.size();

    if (rows == 0)
    {
        std::cout << "Printing out a 0 x 0 matrix:" << std::endl;
        return;
    }

    int cols = m[0].size();

    if (cols == 0)
    {
        std::cout << "Matrix has zero columns" << std::endl;
        return;
    }

    std::cout << "Printing out a " << rows << " x " << cols << " matrix:" << std::endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << m[i][j];
            if (j < cols - 1)
            {
                std::cout << " ";
            }
        }
		std::cout << " ";
        std::cout << std::endl;
    }
}