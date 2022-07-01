#include<stdio.h>
int main(){
	int n;
	printf("\n Nhap n:"); scanf("%d",&n);
	int tong =0;
	for(int i=1; i<n; i++){
		tong += i*(i+1);	
	}
	printf("Ket qua : %d", tong);
}
