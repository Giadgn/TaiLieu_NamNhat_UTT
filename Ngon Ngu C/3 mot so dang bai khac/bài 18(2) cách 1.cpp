// bài 18(2) cách 1
// S2=1+1/(2^2)+...+1/(n^2)
#include <stdio.h>
#include <math.h>
main ()
{
	int n;
	int i;
	float S2;
	S2=0;
	i=1;
	printf(" Nhap so nguyen n="); scanf("%d",&n);
	while (i<=n)
	{
		S2=S2+1/(pow(i,2));
		i++;
	}
	printf(" S2= %f",S2);
}
