// b�i 9
// vi�t 1 chuong tr�nh nh�p v�o 1 x�u k� tu,dem xem trong x�u vua nhap c� bao nhi�u chu cai,bao nhi�u chu s� v� bao nhi�u k� tu kh�c
#include <stdio.h>
#include <string.h>
int baonhieu(char a[])
{
	int i,so=0,chu=0,khac=0;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]>='a' && a[i]<='z') chu++;
		else if (a[i]>='0' && a[i]<='9') so++;
		else if (a[i]!=' ') khac++;
	}
	printf("\n xau co %d so",so);
	printf("\n xau co %d chu",chu);
	printf("\n xau co %d ky tu khac",khac);
}
main ()
{
	char a[100];
	printf("\n Nhap xau ky tu:");
	gets(a);
	baonhieu(a);
}
