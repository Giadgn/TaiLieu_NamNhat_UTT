#include <stdio.h>
#include <math.h>

int main ()
{
	
	int a; 
	int b;
	float x;
      
	printf("\nNhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
      
	if(a == 0 && b == 0){
		printf("\nPhuong trinh co vo so nghiem");
	} else if (a == 0 && b != 0){
		printf("\nPhuong trinh vo nghiem");
	} else {
		float x = (float) -b/a;
		printf("\nPhuong trinh co 1 nghiem la %f",x);
		}
	}

