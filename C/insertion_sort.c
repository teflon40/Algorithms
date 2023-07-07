/* Insertion sort algorithm */
void insertion(int a[], int n)
{
	int j, i;

	for (i = 1; i < n; i++)
	{
		int key = a[i];

		j = i - 1;
		for (; j >= 0 && a[j] > key; j--)
			a[j + 1] = a[j];
		a[j + 1] = key;
	}
}

/************************************************
 * function insertion(a[], n: integer)		*
 * 	var j, i: integer;			*
 * 	begin					*
 * 	i = 1					*
 * 	repeat					*
 * 	    key:= a[i]				*
 * 	    j:= i - 1				*
 *						*
 * 	    while j >= 0 and a[j] > key		*
 * 	        a[j + 1] := a[j]		*
 * 	        j:= j - 1			*
 * 	    a[j + 1] = key			*
 * 	    i:= i + 1				*
 * 	until i >= n - 1			*
 * 	end					*
 ************************************************/
