//b�i 19
//vi�t chuong tr�nh nh�p v�o 1 s� nguy�n n.D�m xem s� do co bao nhi�u chu s� v� t�nh t�ng cua ch�ng.in k�t qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int n, tong=0, demso=0;
	printf("nhap so :");scanf("%d", &n);
	while(n>0)
	{
		tong+=n%10;
		n/=10;
		++demso;
	}
	printf("so co %d chu so\n", demso);
	printf("tong cac chu so la: %d\n", tong);	
}
