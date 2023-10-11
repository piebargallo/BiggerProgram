#include <iostream>

module spreadsheet_cell;

int main()
{
	SpreadsheetCell* myCellp{ new SpreadsheetCell { } };
	myCellp->setValue(4.4);
	std::cout << "cell 1: " << myCellp->getValue() <<
		" " << myCellp->getString() << std::endl;
	delete myCellp;
	myCellp = nullptr;
}