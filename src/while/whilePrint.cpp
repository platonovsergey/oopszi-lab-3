#include <iostream>
#include <cmath>
#include "../func.h"

namespace whileLoop
{
	void print(int n, int k)
	{
		int count = 1, i = 0;

		while (i < n)
		{
			if (count != k)
			{
				count++;
				std::cout << a(i) << " ";
			}
			else {
				count = 1;
			}

			i++;
		}
	}
}