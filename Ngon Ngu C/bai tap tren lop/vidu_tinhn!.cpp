//Nhâp vào sô nguyên n. Tính n!
#include<stdio.h>
#include<math.h>
main()
{
	float i, n;
	float S;
	printf("Nhap so nguyen n : "); scanf("%d",&n);
	if ((n==0)||(n==1))
		S=1;
		else if(n<0)
		printf("Khong tinh duoc n!\n");
		else if(n>100||n<1000)
	{
	for (i=101;i<=n;i++)
		S=S*i;
	}
		printf("%f",S);
	return 0;	
}
