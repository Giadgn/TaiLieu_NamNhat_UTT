#include<stdio.h>

void Nhap(int a[][100], int n, int m ){ // nhap
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("\n Nhap phan tu a[%d][%d]: ", i, j);scanf("%d", &a[i][j]);
		}
	}
}
void Xuat(int a[][100], int n, int m){  // xuat
	for (int  i= 0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	
}
void Tong(int a[][100], int n, int m){  // tong các phan tu có tan cùng = 6
    printf("\n Tong cac phan tu co so tan cung bang 6 = ");
	int sum = 0;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if(a[i][i]%10==6){ // cac so chia cho 10 du 6  
                sum+= a[i][j];   // % chia lay phan du
            }					// Sum+=a <=> sum = sum+a
        }
    }
    printf("%d ",sum);
}
void Max(int a[][100], int n, int m){ // Phan tu lon nhat
	printf ("\n Phan tu lon nhat cua mang ");
    int max = a[0][0];
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
        }
    }
    printf("%d ",max);
}
void Min(int a[][100], int n, int m){ // Phan tu nho nhat
	printf ("\n Phan tu nho nhat cua mang ");
    int min = a[0][0];
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if(min > a[i][j]){
                min = a[i][j];
            }
        }
    }
    printf("%d ",min);
}
void chanchia3 (int a[][30],int d, int c){ // So phan tu chan chia het cho 3
	int dem=0;
	for(int i=0;i<d;i++)
	for(int j=0;j<c;j++)
	{
	if (a[i][j]%2==0 && a[i][j]%3==0)
	 dem++;
	}
	if (dem==0) printf ("\n khong co phan tu chan chia het cho 3");
	else printf("\n co %d phan tu chan chia het cho 3");
}
void tonghang2 (int a[][30],int d, int c){	 // tong cac phan tu hang 2
	int sum=0;
	if (d<=1) printf ("\n khong co hang 2");
	else 
	{	
		for(int j=0;j<c;j++)
		{
			sum=sum+a[1][j];
		}
		printf("\n tong cac phan tu hang 2 %d",sum);
	}
}
void cheochinh(int a[][30], int d, int c){ // tong cheo chinh
	if (d==c)
	{
		int sum=0;
		printf("\nCac phan tu tren dg cheo chinh: ");
		for(int i=0;i<d;i++)
		for(int j=0;j<c;j++)
			{
				if (i==j) 
				{printf("%d\t",a[i][j]);
				sum=sum+a[i][j];
				}
				}
		printf("\nTong cac phan tu tren cheo chinh: %d",sum);
		}
	else printf("\n khong co duong cheo chinh");
	}
void tbcot2 (int a[][30], int d ,int c){ // trung binh cong cac phan tu tren cot 2
int sum=0, dem=0;
if(c<=1) printf ("\n khong co cot 2");
else 
{
	for (int i=0;i<d;i++)
	{
		dem++;
		sum=sum+a[i][1];
	}
	float tb=(float)sum/dem;
	printf("\nTb cac phan tu cot 2: %f",tb);
}
}


int main(){
	int n, m;
	printf("Nhap n: "); scanf("%d", &n);
	printf("Nhap m: "); scanf("%d", &m);
	int a[100][100];
	Nhap(a,n,m);
	Xuat(a,n,m);
    Tong(a,n,m);
    Max(a,n,m);
    Min(a,n,m);
}
// trung binh cong cac so le chia het cho 3




