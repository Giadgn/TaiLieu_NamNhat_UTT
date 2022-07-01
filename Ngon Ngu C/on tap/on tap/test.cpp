#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct thisinh{
	char mats[10]; // so nguyens
	char hoten[30];
	float diemtoan; // so thuc
	float diemanh;
	float tongdiem;
};
void Nhap(thisinh ts[], int n){ // nhap
	for(int i=0; i<n; i++){
		char ten;
		scanf("%c", &ten);
		printf("\n-------\n Nhap ma sinh vien: ");gets(ts[i].mats); // co khoang trong
		printf("\n Nhap ho ten sinh vien :");gets(ts[i].hoten);
		printf("\n Nhap diem toan: ");scanf("%f", &ts[i].diemtoan);
		printf("\n Nhap diem anh: ");scanf("%f", &ts[i].diemanh);
		ts[i].tongdiem = ts[i].diemtoan + ts[i].diemanh;
	}
}
void Xuat(thisinh ts[], int n){ // xuat
	printf("\n-----\n Danh sach thi sinh :\n");
	printf("\n%10s|%15s|%15s|%15s|%15s|" ,"Ma", "Ho ten", "Diem toan", "Diem anh", "Tong diem");
	for(int i=0; i<n; i++){
		printf("\n%10d|%15.2f|%15.2f|%15.2f|%15.2f|", ts[i].mats, ts[i].hoten, ts[i].diemtoan, ts[i].diemanh, ts[i].tongdiem);
		}		
}
void XuatTS(thisinh ts[], int n, char mats[10]){ // cac thi sinh co ma A0001
	printf("\n------\n Danh sach sinh vien co ma la %10s: \n", mats);
	printf("\n%10s|%15s|%15s|%15s|%15s|" , "Ma ts " , "Ho ten" , "Diem toan", "Diem anh", "Tong diem");
	for(int i=0; i<n; i++){
		if(strcmp(ts[i].mats, "A000") ==0){
		printf("\n%10d|%15.2f|%15.2f|%15.2f|%15.2f|", ts[i].mats, ts[i].hoten, ts[i].diemtoan, ts[i].diemanh, ts[i].tongdiem);
		}
	}
}
int main(){
	int n;
	printf("\n Nhap n: ");scanf("%d", &n);
	thisinh ts[n];
	Nhap(ts,n);
	Xuat(ts,n);
	XuatTS(ts,n, "A0001");
				
}
