//Nhâp môt sô nguyên n(n>0). Kiêm tra xem sô dó có là sô dôi xung không ?
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

