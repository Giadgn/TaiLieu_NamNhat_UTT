//b�i 19
//vi�t chuong tr�nh nh�p v�o 1 s� nguy�n n.D�m xem s� do co bao nhi�u chu s� v� t�nh t�ng cua ch�ng.in k�t qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int n,dem=0,tong=0;
	printf("nhap so n\n");scanf("%d",&n);
	while(n>0)
	{
		tong+=n%10;
		n/=10;
		++dem;
	}
	printf("so co %d chu so",dem);
	printf("tong cac chu so",tong);
}
