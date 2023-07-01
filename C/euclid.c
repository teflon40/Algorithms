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
