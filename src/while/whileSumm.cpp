#include <cmath>
#include "../func.h"

namespace whileLoop
{
	double summ(int n)
	{
		double sum = 0;
		int i = 0;

		while (i < n)
		{
			sum += a(i);
			i++;
		}

		return sum;
	}
}