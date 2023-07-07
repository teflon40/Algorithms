/* Sieve of Eratosthenes */
void prime(int n)
{
	int i, j, *a;

	a = (int *) malloc(sizeof(int) * (n + 1));
	if (a == NULL)
		exit(EXIT_FAILURE);
	for (a[1] = 0, i = 2; i <= n; i++)
		a[i] = 1;
	for (i = 2; i * i <= n; i++)
		for (j = i * i; j <= n; j += i)
			a[j] = 0;
	for (i = 2; i <= n; i++)
		if (a[i])
			printf("%4d", i);
	free(a);
}

/************************************************
 * function prime(n : integer):void;		*
 * 	var i, j, *a: integer;			*
 * 	begin					*
 * 	a[1]:=0; i:=2				*
 * 	repeat					*
 * 	   a[i] = 1; i++;			*
 * 	until i>n;				*
 * 	i:=2					*
 * 	repeat					*
 * 	   j:=i*i				*
 * 	   repeat				*
 * 	      a[j]:=0; j:=j+i			*
 * 	   until j>n;				*
 * 	   i++					*
 * 	until i*i>n;				*
 * 	i:=2					*
 * 	repeat					*
 * 	   if a[i]!=0 then			*
 * 	      print i				*
 * 	   i++					*
 * 	until i>n;				*
 * 	free(a)					*
 * 	end;					*
 ************************************************/
