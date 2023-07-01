/* Finding the greatest common divisor */

int gcd(int m, int n)
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
		m = m % n;
	}
	return n;
}

/************************************************
 * function gcd(m, n: integer): integer;	*
 * 	var hold: integer;			*
 * 	begin					*
 * 	repeat					*
 * 	   if m<n then				*
 * 	       begin				*
 * 	          hold:=m;			*
 * 	          m:=n;				*
 * 	          n:=hold			*
 * 	       end;				*
 * 	   m:=m%n				*
 * 	   until m=0;				*
 * 	gcd:=n;					*
 * 	end;					*
 ************************************************/
