// b�i 31
// vi�t chuong tr�nh nh�p v�o 1 k� tu.ki�m tra xem k� tu do l� chu cai,chu s� hay k� tu kh�c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
main ()
{
	char s[100];
	int i,n,so=0,chu=0,khac;
	printf("\n Nhap vao sau:");
	gets(s);
	n=strlen(s);
	for (i=0;i<n;i++)
	{
		if (isalpha(s[i])) chu++;
		if (isdigit(s[i])) so++;
	}
	khac=n-so-chu;
	puts("xau:"); puts(s);
	printf("\n Co %d so , co %d chu, co %d ky tu khac",so,chu,khac);
}
