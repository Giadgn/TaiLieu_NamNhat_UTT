// bài 24 
// viêt chuong trình nhâp vào môt chuôi kí tu và môt 1 tu.dem sô lân xuât hiên cua kí tu do trong chuôi.
// In lai chuôi nguoc cua chuôi da nhâp tu chuôi ban dâu
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
