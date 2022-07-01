/*1.Nhap vao 1 chuoi ky tu. Thuc hien
	a. in xau dao nguoc
	b. kiem tra doi xung
	c. dem so lan xuat hien ki tu 'a' trong xau ki tu
	d. chuan hoa xau
	e. dem so tu trong xau 
	f. dem dau cach
	g. Bien chuoi thanh chu in hoa */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void xoavt(char *s, int vt)
{
	int i, n= strlen(s);
	for(i=vt; i<n; i++)
	 s[i] = s[i+1];
	 s[n-1] ='\0';
}
void chuanhoa(char s[50])
{
	int n = strlen(s);
	for(int i=0; i<n; i++)
	if((s[i]==' ')&&(s[i+1]==' ')) //xoa 2 dau cach lien nhau
		{
			xoavt(s,i);
			i--;
		}
	if(s[0]=' ') xoavt(s,0);
	if(s[n-1]==' ') xoavt(s,n-1);
	puts(s);
}
main(){
	char s[50];
	int i, n, dem, daucach;
	
	//a. nhap, in chuoi
	printf("\n nhap chuoi s= "); gets(s);
	printf("\n s= "); puts(s);
	
	//b. in chuoi dao nguoc     abcd -> dcba
	n = strlen(s);
	for(i=n; i>=0; i--)
		printf("%c",s[i]);
		
	//c. kiem tra chuoi doi xung
	int kt=1; //kt =1: chuoi doi xung
	for(i=0; i<n; i++)
		if(s[i] == s[n-1-i])
			kt = 1;
		else
		{
			kt = 0;
			break;
		}
	if (kt==1)
		printf("\n chuoi doi xung");
	else
		printf("\n chuoi khong doi xung");
		
	//d. dem so lan xuat hien ki tu a
	dem =0;
	for(i=0; i<n; i++)
		if(s[i]=='a')
			dem++;
	printf("\n so ki tu a xuat hien= %d", dem);
	
	/*e. chuan hoa chuoi: dau chuoi khong chua dau cach
	khong chua dau cach, cuoi chuoi khong chua dau cach, giua 2 tu chua 1 dau cach*/
	printf("\n chuoi sau khi chuan hoa la: ");
	chuanhoa(s);
	
	//f. dem dau cach
	daucach =0;
	for(i=0; i<n; i++)
		if (s[i]= ' ')
			daucach++;
	printf("\n so tu trong xau =%d", daucach+1);
	//g. Chuyên chuoi ve dang in hoa
   	strupr(s);
   	printf("\nChuoi dang chu hoa la: %s", s);
	getch();
}

