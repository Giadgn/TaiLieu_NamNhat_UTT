// b�i 24 
// vi�t chuong tr�nh nh�p v�o m�t chu�i k� tu v� m�t 1 tu.dem s� l�n xu�t hi�n cua k� tu do trong chu�i.
// In lai chu�i nguoc cua chu�i da nh�p tu chu�i ban d�u
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char s[200],s1[200],kitu;
	int tg,n,i,dem=0;
	printf("\nNhap xau:");
	gets(s);
	strcpy(s1,s);
	printf("\nNhap ki tu:");
	scanf("%c",&kitu);
	for(i=0;i<strlen(s);i++)
	if (s[i]==kitu) dem++;
	printf("\n%c xuat hien: %d\n",kitu,dem);
	n=strlen(s1)-1;
	for(i=0;i<n;i++)
	{
		tg=s1[n];
		s1[n]=s1[i];
		s1[i]=tg;
		n--;
	}
	printf("\nChuoi vua nhap:");
	puts(s);
	if(strcmp(s1,s)==0)
	printf("\nLa chuoi doi xung");
	else
	{
		printf("\nChuoi in dao nguoc:");
		puts(s1);
	}
}
