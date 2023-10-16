import spreadsheet_cell;
#include <iostream>

int main()
{
	SpreadsheetCell myCell{ 5 };
	std::cout << myCell.getValue() << std::endl; 
	
	myCell.setString("6");             
	const SpreadsheetCell& myCellConstRef{ myCell };
	std::cout << myCellConstRef.getValue() << std::endl; 
}