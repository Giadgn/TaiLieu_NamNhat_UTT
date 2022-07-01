# include<stdio.h>
void Nhap(int a[30], int n){ // nha
	for (int i = 0; i<n; i++){
		printf("Nhap phan tu thu %d: ", (i+1)); scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n){ // xuat
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int Tongsoduong(int a[], int n){ // tong cac so duong le, in kq
	int sum = 0;
	for (int i =0; i<n; i++){
		if(a[i] >0 && (a[i] %2 )!=0){
			sum += a[i];
		}
	}
	printf("\n Tong ca so duong la : %d ",sum);
		
}
void  max(int a[], int n){ //phan tu lon nhat, in ket qua
	int max = a[0];
	for (int i =0; i<n; i++){
		if(max <a[i]){
			max = a[i];
		}
	}
	printf("\nphan tu lon nhat %d",max);
}
void min(int a[], int n){ //pha  tu nho nhat, in ket qua
 	 int min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i])
		min = a[i];
	}
	printf("\nphan tu nho nhat %d",min);
}
void tongchanchia3(int a[], int n) { // trung binh cong cac so duong va chia het cho 3
	int sum=0, dem=0;
		for(int i=0;i<n;i++)
			if (a[i]>0&&a[i]%3==0)
			{
				dem++;
				sum+=a[i];//sum=sum+a[i];
			}
		
		if (dem==0) printf("\nkhong co tong chan chia 3");
		else 
		{
			float tb=(float)sum/dem;
			printf("\nTong duong chia 3: %f",tb);
			}
		}
void tbamduong(int a[], int n){ //tong cac so duong, so am
	int sumam=0, sumduong=0;
		for(int i=0;i<n;i++)
			if (a[i]<0)
			{
				sumam+=a[i];//sum=sum+a[i];
			}
			else
			{
			sumduong+=a[i];
			}
	if (sumam==0) printf ("\n khong co so am") ;else {printf("\n tong am : %d",sumam);}
	if (sumduong==0) printf ("\n khong co so duong"); else {printf("\n tong duong : %d ",sumduong);}
}
void chia6duoi2 (int a[],int n){ //so chia 6 va du 2
	int dem;
	printf("\nCac so chia het cho 6 va tan cung bang 2 la: ");
   for(int i = 0; i < n; i++)
    if(a[i]%6==0 && a[i]%10==2){
    	dem++;
     	printf("%d ",a[i]);
    	}
    if(dem==0) printf ("\n khong co so chia het cho 6 ket thuc =2");
}
void demsole(int a[], int n){ // dem so le in ra
	int dem=0;
	for(int i=0;i<n;i++)
		if (a[i]%2==1||a[i]%2==1){
			dem++;
	}
	printf("\n co %d so le\n",dem);
}
void xapxeptang(int a[], int n){ //sap xep tang dan

 	int tg = 0;
   	for(int i = 0; i < n; i++)
	{
    	for(int j = i + 1; j < n; j++)
		{
       		if(a[i] > a[j]){
          	tg = a[i];
          	a[i] = a[j];
          	a[j] = tg;     
       }
    }
   }
   printf("mang tang dan :");
   for(int i = 0; i < n; i++){
   	
     printf("\t%d ",a[i]);
   }
}
void tbchanle(int a[], int n){ //trung binh cong cac so le, so chan
	int sumle=0, sumchan=0,demle=0,demchan=0;
		for(int i=0;i<n;i++)
			if (a[i]%2==0)
			{
				demchan++;
				sumchan+=a[i];//sum=sum+a[i];
			}
			else
			{
			demle++;
			sumle+=a[i];
			}
		
	if (demle==0) printf("\nko co so le");
	else  
		{
			float tbsole=(float)sumle/demle;
			printf("\ntb so le: %f",tbsole);	
		}
		if (demchan==0) printf("\nko co so chan");
	else  
		{		
			float tbsochan=(float)sumchan/demchan;
			printf("\ntb so chan: %f",tbsochan);						
		}
}

int main(){
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    int a[n];
   	Nhap (a, n);
    Tongsoduong(a,n);
    min(a,n);
    max(a,n);
    
}

// trung binh cong cac so khong am
// tong cac so khong am
