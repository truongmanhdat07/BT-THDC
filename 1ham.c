#include<stdio.h>

void nhapmang(float a[],int n);
void tichkhac0(float a[],int n);
void timmin(float a[],int n);
void inmang(float a[],int n);
int main(){
	int n;
	printf("Vui long nhap so phan tu cua mang :");
	scanf("%d",&n);
	float a[n];
	nhapmang(a,n);
	tichkhac0(a,n);
	timmin(a,n);
	inmang(a,n);
}


void nhapmang(float a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i+1);
		scanf("%f",&a[i]);
	}
}
void tichkhac0(float a[],int n){
	float tich=1;
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			tich*=a[i];
			dem++;
		}
	}
	if(dem!=0)	printf("Tich cac so khac 0 cua day la :%.2f ",tich);
	else printf("Khong co phan tu nao khac 0");
}
void timmin(float a[],int n){
	float min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min)	min=a[i];
	}
	printf("\nGia tri nho nhat cua mang la : %.2f",min);
}
void inmang(float a[],int n){
	printf("\nCac phan tu trong mang la :");
	for(int i=0;i<n;i++){
		printf("%5.2f",a[i]);
	}
}
