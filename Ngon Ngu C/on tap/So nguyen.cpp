#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,n,x;
    float S =100 ;
    printf("\nNhap x: ");scanf("%d", &x);
    printf("\nNhap n: ");scanf("%d", &n);
    if(n<=0)
    {
    	printf("\n Nhap n khong hop le");
	}else
	{
		i=1;i<=n;i++;
		S = S + (pow(-1,i+1)*x)/(10*i);
		printf("\nTong S = %f",S);
	}
}
#include <stdio.h>
#include <math.h>
printf .....
for (int i = 1; i <= n; i += 2) {
sum += (float) sqrt(i);
}
	printf("Ket qua: %d", sum);
