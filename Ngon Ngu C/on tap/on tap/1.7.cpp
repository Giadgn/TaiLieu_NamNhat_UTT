#include<stdio.h>
#include<conio.h>

int a[30];
int i,n;


void nhap(int a[30], int n){
	for(int i=0;i<n;i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[30], int n){
	printf("\nMang vua nhap la : \n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void trungbinhcong(int a[30], int n){ 
	int tong=0, dem=0;
	for(i=0;i<n;i++){
		if(a[i]%3==0&&a[i]%10==6){
			tong = tong +a[i];
			dem++;
		}
	}
	if(dem==0){
		printf("\nKhong co so nao");
	} else {
		float tbc=(float)tong/dem;
	printf("\nTBC = %g",tbc);	
	}

}



main(){
	do{
		printf("Nhap n : ");
		scanf("%d",&n);
	}while(n<0);
	nhap(a,n);
	xuat(a,n);
	trungbinhcong(a,n);
	getch();
}
