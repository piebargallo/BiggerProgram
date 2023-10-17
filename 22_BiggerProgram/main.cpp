import spreadsheet_cell;

import <string>;
#include <string_view>
#include <iostream>
#include <stdexcept>

int main()
{
	SpreadsheetCell myCell{ 4 }, anotherCell{ 5 };
	SpreadsheetCell aThirdCell{ myCell + anotherCell };

	std::string str{ "hello" };
	aThirdCell = myCell + std::string_view{ str };

	aThirdCell = myCell + 5.6;
	aThirdCell = myCell + 4;

	aThirdCell = 5.6 + myCell; // works fine
	aThirdCell = 4 + myCell;   // works fine
	aThirdCell = 4.5 + 5.5;

	aThirdCell = myCell - anotherCell;
	aThirdCell = myCell * anotherCell;
	aThirdCell = myCell / anotherCell;

	try {
		aThirdCell = myCell / 0;
	}
	catch (const std::invalid_argument& e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}

	aThirdCell -= myCell;
	aThirdCell += 5.4;
	aThirdCell *= myCell;
	aThirdCell /= myCell;

	if (myCell > aThirdCell || myCell < 10) {
		std::cout << myCell.getValue() << std::endl;
	}

	if (myCell < 10) {
		std::cout << "myCell < 10\n";
	}

	if (10 < myCell) {
		std::cout << "10 < myCell\n";
	}

	if (anotherCell == myCell) {
		std::cout << "cells are equal\n";
	}
	else {
		std::cout << "cells are not equal\n";
	}
}
