#include<stdio.h>

void Nhap( int a[][100], int n, int m){
	for(int i= 0; i< n; i++){
		for(int j=0; j< m; j++){
		printf("\n Nhap phan tu a[%d][%d] :", i,j);
		scanf("%d", &a[i][j]);
		}
	}
}
void Xuat(int a[][100], int n, int m){
	printf("\n-----\n Mang hien tai: \n");
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("5%d", a[i][j]);
		}
		printf("\n");
	}
}
int Chia(int a[][100], int n, int m){
	int dem = 0;
	for(int i=0; i<n; i++ ){
		for(int j=0; j<m; j++){
			if(a[i][j] % 3 ==0 && a[i][j] >0){
				dem++;
			}
		}
	}
	return dem;
}
int Tong(int a[][100], int n, int m){
	int min = a[0][0];
	for (int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(min >a[i][j]){
				min = a[i][j];
			}
		}
	}
	return min;
}
int main(){
	int n, m;
	printf("Nhap n: "); scanf("%d", &n);
	printf("Nhap m: "); scanf("%d", &m);
	int a[100][100];
	Nhap(a,n,m);
	Xuat(a,n,m);
 	   
	printf("\n-----\nSo phan tu duong chia het cho 3: %d", Chia(a, n, m));
	printf("\n-----\nPhan tu be nhat mang la: %d", Tong(a, n, m));
}


