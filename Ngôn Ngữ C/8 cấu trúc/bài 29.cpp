// b�i 29
// x�y dung c�u tr�c phanso g�m 2 th�nh ph�n:tuso,mauso.y�u c�u:
// nh�p 2 ph�n s�,t�nh t�ng,hi�u,t�ch,thuong cua 2 ph�n s�.dua ph�n s� k�t qua v� dang t�i gian
#include <stdio.h>
#include <math.h>
  struct phanso
   { 
    int tu,mau; 
   };
  int UCLN(int a, int b)
   {
   	a=abs(a);b=abs(b);
    while (a!=b)
     if (a>b) a=a-b;
     else b=b-a;
    return a;
   }
  phanso toigian(phanso c)
   {
   	int UC;
   	UC=UCLN(c.tu,c.mau);
   	c.tu= c.tu/UC; 
    c.mau = c.mau /UC;
 	return c;
   }
  phanso tong(phanso a, phanso b)
   {
   	phanso c;
   	c.tu= a.tu*b.mau+b.tu*a.mau; 
    c.mau = a.mau * b.mau;
    c=toigian(c);
    return c;
   }
  phanso hieu(phanso a, phanso b)
   {
   	phanso c;
   	c.tu= a.tu*b.mau-b.tu*a.mau; 
    c.mau = a.mau * b.mau;
    if ((c.tu!=0) && (c.mau!=0)) c=toigian(c);
    return c;
   }
  phanso tich(phanso a, phanso b)
   {
   	phanso c;
   	c.tu= a.tu*b.tu; 
    c.mau = a.mau * b.mau;
    c=toigian(c);
    return c;
   }
  phanso thuong(phanso a, phanso b)
   {
   	phanso c;
   	c.tu= a.tu*b.mau; 
    c.mau = a.mau*b.tu;
    c=toigian(c);
 	return c;
   } 
  void xuatdulieu(phanso a)
   { 
   	printf("%d/%d\n",a.tu,a.mau); 
   }  
  void nhapdulieu(phanso &a)
   {
   	 printf(" Nhap tu so: ");scanf("%d",&a.tu);
     do
      {
        printf("\n Nhap mau so: ");scanf("%d",&a.mau); 
      }
     while (a.mau==0);
   }
  
main()
 {
    phanso ps,ps1,ps2;
    printf("Nhap phan so thu nhat:\n"); 
	nhapdulieu(ps1);
    printf("\nNhap phan so thu hai:\n"); 
	nhapdulieu(ps2);
    ps=tong(ps1,ps2);
    printf("Tong 2 phan so: ");xuatdulieu(ps);
    ps=hieu(ps1,ps2);
    printf("Hieu 2 phan so: ");xuatdulieu(ps);
    ps=tich(ps1,ps2);
    printf("Tich 2 phan so: ");xuatdulieu(ps);
    ps=thuong(ps1,ps2);
    printf("Thuong 2 phan so: ");xuatdulieu(ps);  
 }

