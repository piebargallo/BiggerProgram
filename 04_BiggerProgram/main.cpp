#include <iostream>

module spreadsheet_cell;

int main()
{
	// For delegating constructor
	SpreadsheetCell myCell{ "6.2" };
	std::cout << "cell 1: " << myCell.getValue() << std::endl;

	// For explicit constructor
	SpreadsheetCell myCell2{ 4 };
	myCell2 = 5;
	std::cout << "Cell 2: " << myCell2.getValue() << std::endl;
}
