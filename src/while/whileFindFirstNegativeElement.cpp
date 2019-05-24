#include <cmath>
#include "../func.h"

namespace whileLoop
{
	int findFirstNegativeElement(double eps)
	{
		int output, i = 0;

		while (true)
		{
			if ((abs(a(i)) <= eps) && (a(i) < 0)) {
				output = i;
				break;
			}

			i++;
		}

		return output;
	}
}