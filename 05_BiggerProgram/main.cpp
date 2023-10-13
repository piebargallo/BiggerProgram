#include <iostream>

module spreadsheet_cell;

int main()
{
	SpreadsheetCell* cellPtr1{ new SpreadsheetCell{ 5 } };
	std::cout << "cellPtr1: " << cellPtr1->getValue() << std::endl;

	delete cellPtr1; // destroys cellPtr1
	cellPtr1 = nullptr;
}
