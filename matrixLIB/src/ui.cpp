#include <iostream>
#include <cmath>
#include "ui.h"
void ui::showMatrix(const Matrix& matrix)
{
	for (int row = 0; row < matrix.getrows(); ++row)
	{
		for (int column = 0; column < matrix.getcolumns(); ++column)
		{
			std::cout << matrix.get(row, column) << " ";
		}

		std::cout << '\n';
	}
}
void ui::run()
{
	std::cout << "**********matrixLib************" << "\n" << "please .Enter a the dimentions of the two arrays you wanna operate "
		<< "\n" << "enter rows : ";
	int  rows;
	std::cin >> rows;
	std::cout << "enter columns : ";
	int columns;
	std::cin >> columns;

	Matrix matrix1(rows, columns);
	Matrix matrix2(rows, columns);

	std::cout << "enter the " << rows * columns << " elements of the first matrix one by one ->\n";

	for (int i = 0;i < rows * columns;i++)
	{
		double usernum;
		std::cin >> usernum;
		matrix1.push(usernum);
	}

	std::cout << "enter the " << rows * columns << " elements of the second matrix one by one ->\n";

	for (int i = 0;i < rows * columns;i++)
	{
		double usernum;
		std::cin >> usernum;
		matrix2.push(usernum);
	}

	std::cout << " \n\nfirst matrix : \n\n";
	showMatrix(matrix1);
	std::cout << " \n\nsecond matrix : \n\n";
	showMatrix(matrix2);

}