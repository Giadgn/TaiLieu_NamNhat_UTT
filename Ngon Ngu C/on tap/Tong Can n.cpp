#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float sum = 0;
	printf(" Nhap so nguyen n :");scanf("%d",&n);
	if( n % 2 == 0);n--;
	for(int i=1; i<=n; i+=2){
		sum += (float)sqrt(i);
	}
	printf("\n Ket qua :%10.2f", sum);
}
