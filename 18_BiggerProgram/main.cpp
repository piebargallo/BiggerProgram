import spreadsheet;
#include <iostream>

int main()
{
	SpreadsheetApplication theApp;
	Spreadsheet s1{ theApp };
	Spreadsheet s2{ theApp, 5 };
	Spreadsheet s3{ theApp, 5, 6 };

	Spreadsheet::Cell c1 { 4 }, c2{ 5 };
	Spreadsheet::Cell c3 { c1 };
	c2 = c3;

	std::cout << c1.getValue() << std::endl;

	s2.getId();
}
