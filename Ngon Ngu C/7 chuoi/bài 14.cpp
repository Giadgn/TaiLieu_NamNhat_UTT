// bài 14
// nhâp vào 1 xâu kí tu.nêu có aa...a(k chu a) trong xâu thì thay bang chu k a(ka) voi k là chu sô a
// VD:aaaaabbAAAcc=>5a2b3A2c
#include <stdio.h>
#include <ctype.h>
#include <string.h>
main ()
{
	int i,n,dem=1;
	char k,s[100];
	printf("\n Nhap xau ki tu:");
	gets(s);
	puts(s);
	for (i=0;i<strlen(s);i++)
		if(s[i]==s[i+1])
		{
			dem++;
		}
		else 
		{
		printf("%d%c",dem,s[i]);
		dem=1;
		}
}
