//Nh�p m�t s� nguy�n n(n>0). Ki�m tra xem s� d� c� l� s� d�i xung kh�ng ?
#include<stdio.h>
#include<conio.h>

main()
{
	int n, m, n1;
	printf("Nhap n = "); scanf("%d",&n);
	n1=n;
	m=0;
	while(n>0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if(n1==m)
		printf("n la so doi xung");
	else
		printf("n khong la so doi xung");
	return 0;
}

