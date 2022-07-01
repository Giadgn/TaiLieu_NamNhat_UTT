#include<stdio.h> //nó chua hàm scanf, printf...
#include<string.h>//nó chua các hàm ve chuoi
#include<math.h> // chua ham toan hoc
#include<conio.h> //thao tác input ho?c output t? màn hình
//int %d   kieu so nguyen : ma sinh vien 
//long %ld  kieu ki tu ho ten , phong ban 
//float %f  so thuc : diem toan , anh , tong diem
//double %lf
//char %c
//char hoten[30];    gets(sv[i].hoten);
//int namsinh;       scanf("%d",&sv[i].namsinh);
//float diemtb;      scanf("%f",&sv[i].diemtb);

//int manv;          scanf("%d", &nv[i].manv);
//char hoten[30];    gets(nv[i].hoten); 
//char phongban[30]; gets(nv[i].phongban);

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
void Tongmin(thisinh ts[], int n){ // tong diem nho nhat
	thisinh min = ts[0];
	for(int i=0; i<n; i++){
		if(min.tongdiem> ts[i].tongdiem){
			min = ts[i];
		}
	}
	printf("\n----\n Thi sinh co tong diem thap nhat: \n");
	printf("\n%10s|%15s|%15s|%15s|%15s|" , "Ma ts " , "Ho ten" , "Diem toan", "Diem anh", "Tong diem");
	printf("\n%10d|%15.2f|%15.2f|%15.2f|%15.2f|", min.mats, min.hoten, min.diemtoan, min.diemanh, min.tongdiem);
}
void Tongmax(thisinh ts[], int n){ // tong diem lon nhat
	thisinh max = ts[0];
	for(int i=0; i<n; i++){
		if(max.tongdiem < ts[i].tongdiem){
			max = ts[i];
		}
	}
	printf("\n----\n Thi sinh co tong diem cao nhat : \n");
	printf("\n%10s|%15s|%15s|%15s|%15s|" , "Ma ts " , "Ho ten" , "Diem toan", "Diem anh", "Tong diem");
	printf("\n%10d|%15.2f|%15.2f|%15.2f|%15.2f|", max.mats, max.hoten, max.diemtoan, max.diemanh, max.tongdiem);
}
/*void xuatDs(sinhvien sv[],int n){ // tong diem kha 
    printf("\n-----\n Danh sach hoc sinh kha :");
    printf("\n%20s|%10s|%8s|","hoten","namsinh","diemtb");
	for(int i=0;i<n;i++){
	    if(sv[i].diemtb >= 7 && sv[i].diemtb < 8){
	        printf("\n%20s|%10d|%8.1f| ",sv[i].hoten,sv[i].namsinh ,sv[i].diemtb );
	    }
	}
}
void sinhVienDo(sinhVien sv[], int n){ // sinh vien do >=17 diem
	printf("\nDanh sach nhung sinh vien do: ");
 	for(int i = 0;i < n;++i){
        if(sv[i].tongDiem >= 17){
        	printf("\n%20d|%10s|%8.1f|",sv[i].maSV,sv[i].hoTen ,sv[i].tongDiem );
		}
    }
}
void xuatDs(sinhvien sv[],int n){ // tong diem gioi kha trung binh
    printf("\n-----\n Danh sach hoc sinh la: :");
    printf("%20s|%10s|%8s|","hoten","namsinh","diemtb");
	for(int i=0;i<n;i++){
	    if(sv[i].diemtb >= 7 && sv[i].diemtb < 8){
	        printf("\nDanh sach hoc sinh kha la : %20s|%10d|%8.1f| ",sv[i].hoten,sv[i].namsinh ,sv[i].diemtb );
	    }else if(sv[i].diemtb >= 8){
	    	printf("\nDanh sach hoc sinh gioi la : %20s|%10d|%8.1f| ",sv[i].hoten,sv[i].namsinh ,sv[i].diemtb );
		}else if(sv[i].diemtb >= 6 && sv[i].diemtb < 7){
				printf("\nDanh sach hoc sinh trung binh : %20s|%10d|%8.1f| ",sv[i].hoten,sv[i].namsinh ,sv[i].diemtb );
			}
		}		
	}
void xuatDs(sinhvien sv[],int n){ // tuoi 20 tro len
    printf("\n-----\n Danh sach hoc sinh tu 20 tuoi tro len:");
    printf("\n%20s|%10s|%8s|","hoten","namsinh","diemtb");
	for(int i=0;i<n;i++){
	    if((2022 - sv[i].namsinh) >= 20){
	        printf("\n%20s|%10d|%8.1f|",sv[i].hoten,sv[i].namsinh ,sv[i].diemtb );
	    }
	}
}*/
int main(){
	int n;
	printf("\n Nhap n: ");scanf("%d", &n);
	thisinh ts[n];
	Nhap(ts,n);
	Xuat(ts,n);
	XuatTS(ts,n, "A0001");
	Tongmin(ts,n);
	Tongmax(ts,n);
				
}



