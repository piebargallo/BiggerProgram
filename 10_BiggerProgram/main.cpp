#include <cstddef>
#include <iostream>
#include <vector>
import spreadsheet;

Spreadsheet createObject()
{
	return Spreadsheet{ 3, 2 };
}

int main()
{
	std::vector<Spreadsheet> vec;
	for (size_t i{ 0 }; i < 2; ++i) {
		std::cout << "Iteration " << i << std::endl;
		vec.push_back(Spreadsheet{ 100, 100 });
		std::cout << std::endl;
	}

	Spreadsheet s{ 2, 3 };
	s = createObject();

	Spreadsheet s2{ 5, 6 };
	s2 = s;
}
