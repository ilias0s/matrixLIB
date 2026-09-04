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
	//gets: 
	double getrows() const;
	double getcolumns() const;
	//
	void push(double x);
	double get(int row, int column) const;
};