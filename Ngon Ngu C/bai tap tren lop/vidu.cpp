//nh�p vao s� nguy�n n(n>0).T�nh TBC c�c s� chia h�t cho 3 trong khoang tu 1 den n.
#include<stdio.h>
int main () {
	int  n, i, tong, dem;
	float tbc;
	do
	{
	printf(" Nhap n : "); scanf("%d",&n);
	if (n<0) printf("\n Nhap lai");
	} while (n<0);
	tong  = 0;
	dem = 0;
	for(i=1;i<=n;i++)
	if((i%3==0)&&(i%10==6))
	{
	tong = tong + i;
	dem = dem+ 1;
	}
	tbc = (float) tong/dem;
	printf("\n TBC = %g",tbc);
	return 0;
}


