// bài 31
// viêt chuong trình nhâp vào 1 ký tu.kiêm tra xem ký tu do là chu cai,chu sô hay ký tu khác
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
