#include<stdio.h>
#include<conio.h>
int a[100];
int k;

void nhap(int a[100], int k){
	for(int i=0;i<k;i++){
		printf("\na[%d] = ");
		scanf("%d",&a[i]);
	}
}

void xuat(int a[100], int k){
	printf("\nMang vua nhap la \n");
	for(int i=0;i<k;i++){
		printf("%d\t",a[i]);
	}
}

main(){
	do{
		printf("Nhap k : ");
		scanf("%d",&k);
	}while(k<0);
	nhap(a,k);
	xuat(a,k);
	getch();
}
