#include <cmath>
#include "../func.h"

namespace whileLoop
{
	double summ2(double eps)
	{
		double sum = 0;
		int i = 0;

		while (!(abs(a(i)) <= eps)) 
		{
			sum += a(i);
			i++;
		}

		return sum;
	}
}