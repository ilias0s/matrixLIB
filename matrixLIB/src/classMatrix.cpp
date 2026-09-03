#include"classMatrix.h"
#include<iostream>
#include<vector>
Matrix::Matrix()
{
	rows = 1;
	columns = 1;
}
Matrix::Matrix(int rows, int columns)
{
	this->rows = rows;
	this->columns = columns;
}
void Matrix::show()
{
    for (std::size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i];

        if ((i + 1) % columns == 0)
            std::cout << '\n';
        else
            std::cout << " ";
    }
}

void Matrix::add(double x)
{
	Matrix::arr.push_back(x);
}

