#include <iostream>
#include <cmath>

namespace NCL
{
	unsigned int SquareRoot(const unsigned int& InSquareNumber)
	{
		if (InSquareNumber <= 1)
			return InSquareNumber;

		unsigned int ApproximateSquareRoot = std::pow(2, (std::log2(InSquareNumber) / 2) + 1);

		while (ApproximateSquareRoot > (ApproximateSquareRoot + (InSquareNumber / ApproximateSquareRoot)) / 2)
			ApproximateSquareRoot = (ApproximateSquareRoot + (InSquareNumber / ApproximateSquareRoot)) / 2;

		return ApproximateSquareRoot;
	}
}

int main()
{
	unsigned int SquareNumber = 0;
	std::cout << "Enter the number of which you want to find square root of : ";
	std::cin >> SquareNumber;
	std::cout << "Approximate square root of " << SquareNumber << " is " << NCL::SquareRoot(SquareNumber) << "\n";
	return 0;
}