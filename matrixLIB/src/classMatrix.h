#include<vector>
class Matrix
{
private : 
	int rows;
	int columns;
	std::vector<double> arr;
public:
	//constructors:
	Matrix();
	Matrix(int rows, int columns);
	//
	void add(double x);
	void show();
};