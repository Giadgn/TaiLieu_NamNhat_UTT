#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n;
	int S = 0;
	printf("\n Nhap n: ");scanf("%d",&n);
	for(int i=1; i<n; i++){
		S += (i*(i+1));
	}
	printf("Ket qua la: %d", S);
}
