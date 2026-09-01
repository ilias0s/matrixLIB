#include"classMatrix.h"
Matrix::Matrix()
{
	rows = 1;
	columns = 1;
	arr[1];
}
Matrix::Matrix(int rows, int columns)
{
	this->rows = rows;
	this->columns = columns;
    arr[rows * columns];
}
