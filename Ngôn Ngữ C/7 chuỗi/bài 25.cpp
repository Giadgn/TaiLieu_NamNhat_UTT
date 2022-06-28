// bài 25
// viêt chuong trình nhâp vào 1 chuôi kí tu.kiêm tra tính dôi xung cua chuôi và in lai chuôi
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char s[200],s1[200];
	int tg,n,i;
	printf("\nNhap xau:");
	gets(s);
	strcpy(s1,s);
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
		printf("\nKhong phai la chuoi doi xung\n \nChuoi in dao nguoc:");
		puts(s1);
	}
}
