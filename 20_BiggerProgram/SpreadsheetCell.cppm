export module spreadsheet_cell;

import <charconv>;
import <string>;
import <string_view>;

export class SpreadsheetCell
{
public:
	SpreadsheetCell() = default;
	SpreadsheetCell(double initialValue);
	SpreadsheetCell(std::string_view initialValue);

	void set(double value);
	void set(std::string_view value);

	double getValue() const;
	std::string getString() const;

	// First Attempt
	SpreadsheetCell add(const SpreadsheetCell& cell) const;

private:
	static std::string doubleToString(double value);
	static double stringToDouble(std::string_view value);

	double m_value{ 0 };
};