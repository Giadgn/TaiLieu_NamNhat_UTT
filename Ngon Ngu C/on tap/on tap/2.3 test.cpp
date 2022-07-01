#include <stdio.h>

void nhapMang2(int arr[][100], int n, int m){
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void xuatMang2(int arr[][100], int n, int m){
    printf("\n-----\n Mang hien tai: \n");
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

int findLastDigit(int x){
    if(x > 10){
        x = x % 10;
    }
    return x;
}

int sumLastDigit6(int arr[][100], int n, int m){
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if(findLastDigit(arr[i][j]) == 6){
                sum+= arr[i][j];
            }
        }
    }
    return sum;
}

int findMaxTwoDirection(int arr[][100], int n, int m){
    int max = arr[0][0];
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main(){
    int n, m;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap m: "); scanf("%d", &m);
    int arr[100][100];
    nhapMang2(arr, n, m);
    xuatMang2(arr, n, m);
    
    printf("\n-----\nTong cac phan tu co tan cung bang 6 la: %d", sumLastDigit6(arr, n, m));
    printf("\n-----\nPhan tu lon nhat la: %d", findMaxTwoDirection(arr, n, m));
	
	}
