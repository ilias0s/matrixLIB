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
//
double Matrix::getrows() const
{
    return rows;
}
double Matrix::getcolumns() const
{
    return columns;
}
 double Matrix::get(int row,int column) const
{
	int index = row * columns + column;
	return Matrix::arr[index];
}

void Matrix::push(double x)
{
	Matrix::arr.push_back(x);
}
//addition operator : 
Matrix& Matrix::operator+=(const Matrix& other)
{
	if (rows != other.rows || columns != other.columns)
	{
		throw std::runtime_error("the dimentions aren't the same !");
	}
	else
	{
		for (std::size_t i = 0; i < arr.size(); ++i)
		{
			arr[i] += other.arr[i];
		}
		return *this;
	}
}

