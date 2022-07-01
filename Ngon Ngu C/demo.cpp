#include<stdio.h>
#include<conio.h>

int a[50], i, j, n, max=a[0];
float  tbc;

void nhap(int a[50], int n){
	for(int i=0;i<n;i++){
		printf("\n a[%d] = ", i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[50], int n){
	printf("\mang vua nhap la :\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
//Tinh TBC cua so chia het cho 3 va la so am
float trungbinhcong(int a[50], int n){
	float dem=0, tong=0;
	for(int i=0;i<n;i++){
		if(a[i]%3==0&&a[i]<0){
			tong = tong + a[i];
			dem++;
		}
		tbc=(float) tong/dem;
	}
	return tbc;
}

//sap xep mang theo chieu tang dan or giam dan
void sx(int a[50], int n){
	int tg=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){//giam dan la a[i]<a[j]
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	printf("\nMang sau khi sap xep la : \n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}


	

//Tim max, min va vi tri cua no
void  timmax(int a[], int n){ //phan tu lon nhat, in ket qua
	int max = a[0];
	for (int i =0; i<n; i++){
		if(max <a[i]){
			max = a[i];
		}
	}
	printf("\nphan tu lon nhat %d",max);

	printf("\nMAX = %d\n",max);
	printf("\nVi tri co gia tri lon nhat la: ");
    for(int i = 0;i < n;++i){
        if(a[i] == max){
		printf("%d ", i+1);
		}
	}
}


main(){
	do{
		printf("Nhap n : ");
		scanf("%d",&n);
	} while (n<0);
	nhap(a,n);
	xuat(a,n);
	tbc=trungbinhcong(a,n);
	printf("\nTBC = %g",tbc);
	/*int max= a[0];
    for(int i = 1;i < n;++i){
        if(a[i] > max) 
		max = a[i];
    }
     printf("\nVi tri co gia tri nho nhat la: ");
    for(int i = 0;i < n;++i){
        if(a[i] == max) 
		printf("%d ", i+1);
    }*/
    timmax(a,n);
    sx(a,n);
	getch();
}
