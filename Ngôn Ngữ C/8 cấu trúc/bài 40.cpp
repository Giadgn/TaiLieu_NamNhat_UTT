// b�i 40
// x�y dung c�u tr�c s� phuc g�m 2 th�nh ph�n:ph�n thuc,ph�n ao.y�u c�u:nh�p 2 s� phuc
// t�nh t�ng,hi�u,t�ch,thuong 2 s� phuc.vi�t k�t qua ra m�n h�nh
// z=a+bi,z'=a'+b'i
#include <stdio.h>
#include <math.h>
  struct sophuc
   { 
    float thuc,ao; 
   };
// z=a+a'i+z'=b+b'i
  sophuc tong(sophuc a, sophuc b)
   {
   	sophuc c;
   	c.thuc= a.thuc+b.thuc; 
    c.ao = a.ao + b.ao;
    return c;
   }
// z=a+a'i-z'=b+b'i
  sophuc hieu(sophuc a, sophuc b)
   {
   	sophuc c;
   	c.thuc= a.thuc-b.thuc; 
    c.ao = a.ao - b.ao;
    return c;
   }
// z=a+a'i*z'=b+b'i
  sophuc tich(sophuc a, sophuc b)
   {
   	sophuc c;
   	c.thuc =a.thuc*b.thuc - a.ao*b.ao;
    c.ao = a.thuc*b.ao + a.ao*b.thuc;
    return c;
   }
// z=a+a'i/z'=b+b'i
  sophuc thuong(sophuc a, sophuc b)
   {
   	sophuc c;
	float t;
   	t = b.thuc*b.thuc + b.ao*b.ao;
 	c.thuc = (a.thuc*a.ao + b.thuc*b.ao)/t;
    c.ao = (a.ao*b.thuc - a.thuc*b.ao)/t;
 	return c;
   } 
  void xuatdulieu (sophuc a)
   { 
   	printf("%5.2f + %5.2fi\n",a.thuc,a.ao); 
   }  
main()
 {
    sophuc sp,sp1,sp2;
    printf("Nhap so phuc thu nhat:\n"); 
    printf("Phan thuc: ");scanf("%f",&sp1.thuc); 
    printf("Phan ao: ");scanf("%f",&sp1.ao); 
    printf("Nhap so phuc thu hai:\n"); 
    printf("Phan thuc: ");scanf("%f",&sp2.thuc); 
    printf("Phan ao: ");scanf("%f",&sp2.ao); 
    sp=tong(sp1,sp2); 
    printf("Tong 2 so phuc: ");xuatdulieu(sp);
    sp=hieu(sp1,sp2);
    printf("Hieu 2 so phuc: ");xuatdulieu(sp);
    sp=tich(sp1,sp2);
    printf("Tich 2 so phuc: ");xuatdulieu(sp);
    sp=thuong(sp1,sp2);
    printf("Thuong 2 so phuc: ");xuatdulieu(sp);
 }

