import spreadsheet_cell;
#include <iostream>

int main()
{
	SpreadsheetCell myCell{ 5 };
	std::cout << myCell.getValue() << std::endl;
}