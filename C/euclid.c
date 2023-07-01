/* Finding the greatest common divisor */
int gcd(int m, int n)
{
	int hold;

	while (n > 0)
	{
		hold = m % n;
		m = n;
		n = hold;
	}
	return m;
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", gcd(12, 4));
	return 0;
}

	/* OR */
int gcd1(int m, int n)
{
	int hold;

	while (m > 0)
	{
		if (m < n)
		{
			hold = m;
			m = n;
			n = hold;
		}
		m = m - n;
	}
	return n;
}
