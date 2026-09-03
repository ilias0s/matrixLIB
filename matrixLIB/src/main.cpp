#include<iostream>
#include <cmath>
#include"classMatrix.h"
#include"functions.h"
int main()
{
	std::cout << "**********matrixLib************" << "\n" << "please .Enter a the dimentions of the two arrays you wanna operate "
		<< "\n" << "enter rows : ";
	int  rows; 
	std::cin >> rows;
	std::cout<< "enter columns : ";
	int columns;
	std::cin >> columns;

	Matrix matrix1(rows, columns);
	Matrix matrix2(rows, columns);

	std::cout << "enter the " << rows * columns << " elements of the first matrix one by one ->\n";

	for (int i=0;i < rows * columns;i++)
	{
		double usernum;
		std::cin >> usernum;
		matrix1.add(usernum);
	}

	std::cout << "enter the " << rows * columns << " elements of the second matrix one by one ->\n";

	for (int i = 0;i < rows * columns;i++)
	{
		double usernum;
		std::cin >> usernum;
		matrix2.add(usernum);
	}

	std::cout << " \n\nfirst matrix : \n\n";
	matrix1.show();
	std::cout << " \n\nsecond matrix : \n\n";
	matrix2.show();

	return 0;
}