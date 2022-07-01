#include<stdio.h>
#include<math.h>
int main(){
	int x;
	int n;
	int T = 100;
	printf("\n Nhap so nguyen x la :");scanf("%d",&x);
	printf("\n Nhap so nguyen n la :");scanf("%d",&n);

	for(int i=2; i<=n; i++){
		T += x/i;
	}
	printf("Ket qua : %d",T);
}
