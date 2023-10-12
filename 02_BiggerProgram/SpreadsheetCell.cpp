#include <filesystem>
#include <charconv>

module spreadsheet_cell;

SpreadsheetCell::SpreadsheetCell() {}

SpreadsheetCell::SpreadsheetCell(double initialValue)
{
	setValue(initialValue);
}

SpreadsheetCell::SpreadsheetCell(std::string_view initialValue)
{
	setString(initialValue);
}

void SpreadsheetCell::setValue(double value)
{
	m_value = value;
}

double SpreadsheetCell::getValue() const
{
	return m_value;
}

void SpreadsheetCell::setString(std::string_view value)
{
	m_value = stringToDouble(value);
}

std::string SpreadsheetCell::getString() const
{
	return doubleToString(m_value);
}

std::string SpreadsheetCell::doubleToString(double value) const
{
	return std::to_string(value);
}

double SpreadsheetCell::stringToDouble(std::string_view value) const
{
	double number{ 0 };
	std::from_chars(value.data(), value.data() + value.size(), number);
	return number;
}
