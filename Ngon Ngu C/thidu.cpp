#include<stdio.h>
#include<string.h>
#include<conio.h>

struct NhanVien{
	char manv[50];
	char hoten[50];
	char phongban[50];
};

void nhapdanhsachNhanVien(NhanVien nv[], int &n){
	do{
		printf("Nhap so luong nhan vien n : ");
		scanf("%d",&n);
	}while(n<0);
	for(int i=0;i<n;i++){
		printf("\nNhap vao sinh vien thu %d",i+1);
		printf("\nNhap MaNV : "); fflush(stdin); gets(nv[i].manv);
		printf("Nhap Hoten : "); fflush(stdin); gets(nv[i].hoten);
		printf("Nhap Phong ban :"); fflush(stdin); gets(nv[i].phongban);
	}
}

void xuatdanhsachNhanVien(NhanVien nv[], int n){
		printf("%10s|%10s|%10s|","MaSV","Hoten","DTB");
		printf("\n");
	for(int i=0;i<n;i++){
		printf("%10s|%10s|%10g|",nv[i].manv,nv[i].hoten,nv[i].phongban);
		printf("\n");
	}
}

/*b. dtb<4, yeu
	4<=dtb<5, loai kem
	5<=dtb<7,loai TB
	con lai la gioi*/

/*void xeploaisinhvien(SinhVien sv[], int &n){
		printf("\nXep loai hoc sinh :  ");
		printf("\n%10s|%10s|%10s|%10s|","MaSV","Hoten","DTB","Hoc Luc");
		printf("\n");
	for(int i=0;i<n;i++){
		if(sv[i].dtb<4)
		{
			strcpy(sv[i].hocluc,"Yeu");
		} else if(sv[i].dtb>=4&&sv[i].dtb<5) 
				{
				strcpy(sv[i].hocluc,"Loai Kem");
				} 	else if(sv[i].dtb>=5 && sv[i].dtb<7) 
					{
						strcpy(sv[i].hocluc,"Loai TB");
					}
		else 
		{
			strcpy(sv[i].hocluc,"Gioi");
		}
		printf("%10s|%10s|%10g|%10s|",sv[i].masv,sv[i].hoten,sv[i].dtb,sv[i].hocluc);
		printf("\n");
	}
}

//in ra sinh vien co diem tb max
void timmax_dtb(SinhVien sv[], int &n){
		printf("\nSinh vien co diem MAX :  ");
		printf("\n%10s|%10s|%10s|%10s|","MaSV","Hoten","DTB","Hoc Luc");
		printf("\n");
	int max=0;
	for(int i=0;i<n;i++){
		if(sv[i].dtb>max){
			max=sv[i].dtb;
		}
	}
	for(int i=0;i<n;i++){
	if(sv[i].dtb==max){
		printf("%10s|%10s|%10g|%10s|",sv[i].masv,sv[i].hoten,sv[i].dtb,sv[i].hocluc);
		printf("\n");	
	}
	}
}

//sapxep danh sach sinh vien theo thu tu DTB
void sapxepsachSinhVientheodtb(SinhVien sv[], int &n){
		printf("\nDanh sach moi sau khi in :  ");
		printf("\n%10s|%10s|%10s|%10s|","MaSV","Hoten","DTB","Hoc Luc");
		printf("\n");
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
			if(sv[i].dtb>sv[j].dtb){
				SinhVien tg;
				tg = sv[i]; 
				sv[i] = sv[j];
				sv[j]=tg;
				}
			}
		}
		for(int i=0;i<n;i++){
		printf("%10s|%10s|%10g|%10s|",sv[i].masv,sv[i].hoten,sv[i].dtb,sv[i].hocluc);
		printf("\n");
		}
}
 
//tim sinh vien masv la "A001"
void timsinhvien(SinhVien sv[], int &n){
		printf("\nSinh vien co ma la :  ");
		printf("\n%10s|%10s|%10s|%10s|","MaSV","Hoten","DTB","Hoc Luc");
		printf("\n");
		for(int i=0; i<n-1; i++){
			if(strcmp(sv[i].masv,"A001")==0){
			printf("%10s|%10s|%10g|%10s|",sv[i].masv,sv[i].hoten,sv[i].dtb,sv[i].hocluc);
			printf("\n");
			}
		}
}

/*sapxep danh sach sinh vien theo thu tu hoten
void sapxepsachSinhVientheodten(SinhVien sv[], int &n){
		printf("\nDanh sach moi 2 sau khi in :  ");
		printf("\n%10s|%10s|%10s|%10s|","MaSV","Hoten","DTB","Hoc Luc");
		printf("\n");
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
			if(strcmp(sv[i].hoten,sv[j].hoten)>0){
				SinhVien tg;
				tg = sv[i]; 
				sv[i] = sv[j];
				sv[j]=tg;
				}
			}
		}
		for(int i=0;i<n;i++){
		printf("%10s|%10s|%10g|%10s|",sv[i].masv,sv[i].hoten,sv[i].dtb,sv[i].hocluc);
		printf("\n");
		}
}*/

main(){
	int n;
	NhanVien nv[n];
	nhapdanhsachNhanVien(nv,n);
	xuatdanhsachNhanVien(nv,n);
	//xeploaisinhvien(sv,n);
	//sapxepsachSinhVientheodtb(sv,n);
	//sapxepsachSinhVientheodten(sv,n);
	//timmax_dtb(sv,n);
	//timsinhvien(sv,n);
	getch();
}
