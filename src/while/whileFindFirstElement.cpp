#include <iostream>
#include <cmath>
#include "../func.h"

using namespace std;

namespace whileLoop
{
	int findFirstElement(double eps)
	{
		int i = 0;

		while (!(abs(a(i)) <= eps))
		{
			i++;
		}

		return i;
	}
}