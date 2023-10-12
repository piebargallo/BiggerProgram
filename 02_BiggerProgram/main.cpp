#include <iostream>

module spreadsheet_cell;

int main()
{
	SpreadsheetCell* myCellp{ nullptr };
	myCellp = new SpreadsheetCell{ 4 };
	std::cout << "cell 1: " << myCellp->getValue() <<
		" " << myCellp->getString() << std::endl;
	delete myCellp;
}