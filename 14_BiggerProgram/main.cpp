import spreadsheet;
#include <iostream>

int main()
{
	Spreadsheet sheet1{ 5, 6 };
	SpreadsheetCell& cell1{ sheet1.getCellAt(1, 1) };
	cell1.set("6");

	const Spreadsheet sheet2{ 5, 6 };
	const SpreadsheetCell& cell2{ sheet2.getCellAt(1, 1) };
}
