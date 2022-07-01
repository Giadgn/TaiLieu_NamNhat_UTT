//Nhâp vào sô nguyên n. Tính S=1*2+2*3+3*4+..+n*(n+1)
#include<stdio.h>
#include<math.h>
main()
{
	int i, n, S=0;
	printf("Nhap vao so nguyen n : "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	S=S+i*(i+1);
	printf("Tong cua S = %d",S);
	return 0;	
}
