// b�i 8
// nh�p v�o 1 x�u k� tu,d�m s� tu trong x�u.dua ra m�n h�nh tu c� do dai lon nh�t
#include <stdio.h>
#include <string.h>
int demtu(char s[])
{
	int i,dem=0;
	if (s[0]!=' ') dem++;
	for (i=0;i<strlen(s);i++)
	if (s[i]==' ' && s[i+1]!=' ' && s[i+1]!='\0') dem++;
	return dem;
}
int dainhat(char s[])
{
	int i,dodaimax=0,dem=0,vitri,dodaichuoi=strlen(s);
	for (i=0;i<dodaichuoi+1;i++)
	{
		if (s[i]!=' ' && s[i]!='\t' && i<dodaichuoi)
		{
			dem++;
		}
		else 
		{
			if (dem>dodaimax)
			{
				dodaimax=dem;
				vitri=i-dem;
			}
			dem=0;
		}
	}
	printf("\n tu dai nhat la ");
	for (i=0;i<dodaimax;i++)
	{
		printf("%c",s[vitri+i]);
	}
	
}
main ()
{
	char s[50];
	int d;
	printf("\n Nhap  chuoi ki tu: ");
	gets(s);
	d=demtu(s);
	printf("\n so tu trong chuoi la %d",d);
	dainhat(s);
}
