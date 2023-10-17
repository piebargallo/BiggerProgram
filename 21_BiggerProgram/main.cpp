import spreadsheet_cell;
#include <string>
#include <string_view>

int main()
{
	SpreadsheetCell myCell{ 4 }, anotherCell{ 5 };
	SpreadsheetCell aThirdCell{ myCell + anotherCell };
	//SpreadsheetCell aThirdCell{ myCell.operator+(anotherCell) };
	auto aFourthCell{ aThirdCell + anotherCell };

	std::string str{ "hello" };
	aThirdCell = myCell + std::string_view{ str };

	aThirdCell = myCell + 5.6;
	aThirdCell = myCell + 4;
}
