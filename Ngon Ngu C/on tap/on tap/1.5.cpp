#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int T = 100;
	printf("\n Nhap n: ");scanf("%d",&n);
	for (int i=2; i<n; i++){
		if(i % 2 == 0){
			T -= 10*i;
		}else{
			T +=10*i;
		}
	}
	printf("\n Ket qua: %d",T);
}
