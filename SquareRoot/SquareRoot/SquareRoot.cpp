#include <iostream>
#include <cmath>

namespace NCL
{
	unsigned int SquareRoot(const unsigned int& InSquareNumber)
	{
		unsigned int ApproximateSquareRoot = InSquareNumber / 2;

		while ((ApproximateSquareRoot != 0) && ApproximateSquareRoot > (ApproximateSquareRoot + (InSquareNumber / ApproximateSquareRoot)) / 2)
			ApproximateSquareRoot = (ApproximateSquareRoot + (InSquareNumber / ApproximateSquareRoot)) / 2;

		return ApproximateSquareRoot;
	}
}

int main()
{

	for (unsigned int i = 0; i * i < 10000; i++)
	{
		std::cout << "Approximate square root of " << i*i << " is " << NCL::SquareRoot(i*i) << "\n";
	}
	return 0;
}