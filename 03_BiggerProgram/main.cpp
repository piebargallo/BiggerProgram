#include <iostream>

module spreadsheet_cell;

int main()
{
	SpreadsheetCell myCell1{ 4 };
	SpreadsheetCell myCell2{ myCell1 };
	
	std::cout << "Cell 1: " << myCell1.getValue() << std::endl;
	std::cout << "Cell 2: " << myCell2.getValue() << std::endl;
}