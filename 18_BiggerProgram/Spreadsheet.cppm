module;

#include <cstddef>
import <stdexcept>;
#include <utility>
import <format>;
import <algorithm>;
import <charconv>;

export module spreadsheet;

import <string>;
import <string_view>;

export class SpreadsheetApplication { };

export class Spreadsheet
{
public:

	class Cell
	{
	public:
		Cell() = default;
		Cell(double initialValue);
		Cell(std::string_view initialValue);

		void set(double value);
		void set(std::string_view value);

		double getValue() const;
		std::string getString() const;

	private:
		std::string doubleToString(double value) const;
		double stringToDouble(std::string_view value) const;

		double m_value{ 0 };
	};

	Spreadsheet(size_t width, size_t height,
		const SpreadsheetApplication& theApp);
	Spreadsheet(const Spreadsheet& src);
	~Spreadsheet();
	Spreadsheet& operator=(const Spreadsheet& rhs);

	void setCellAt(size_t x, size_t y, const Cell& cell);
	Cell& getCellAt(size_t x, size_t y);

	size_t getId() const;

	void swap(Spreadsheet& other) noexcept;

	static const size_t MaxHeight{ 100 };
	static const size_t MaxWidth{ 100 };

private:
	void verifyCoordinate(size_t x, size_t y) const;

	size_t m_id{ 0 };
	size_t m_width{ 0 };
	size_t m_height{ 0 };
	Cell** m_cells{ nullptr };

	const SpreadsheetApplication& m_theApp;

	static inline size_t ms_counter{ 0 };
};

export void swap(Spreadsheet& first, Spreadsheet& second) noexcept;
