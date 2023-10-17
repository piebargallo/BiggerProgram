import spreadsheet_cell;
#include <iostream>

int main()
{
	SpreadsheetCell myCell{ 4 }, anotherCell{ 5 };
	SpreadsheetCell aThirdCell{ myCell.add(anotherCell) };
	auto aFourthCell{ aThirdCell.add(anotherCell) };
	std::cout << aThirdCell.getValue() << std::endl;
}