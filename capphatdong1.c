#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Vui long nhap n :");	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	if(a==NULL){
		printf("Khong du bo nho !");
		return 1;
	}
	for(int i=0;i<n;i++){
		printf("Vui long nhap phan tu thu %d :",i+1);
		scanf("%d",(a+i));
	}
	int sum=0,dem=0;
	for(int i=0;i<n;i++){
		if(*(a+i)>0){
			sum+=*(a+i);
			dem++;
		}
	}
	if(dem==0)	printf("\nMang khong chua phan tu nao duong");
	else		printf("\nTrung binh cong cac so duong trong mang la :%.2f",(float)sum/dem);
	a=(int*)realloc(a,(n+2)*sizeof(int));
	if(a==NULL){
		printf("\nKhong du bo nho !");
		return 1;
	}
	printf("\nNhap them 2 phan tu sau khi mo rong :\n");
	for(int i=n;i<n+2;i++){
		printf("Vui long nhap phan tu thu %d :",i+1);
		scanf("%d",(a+i));
	}
	printf("Mang sau khi mo rong la :");
	for(int i=0;i<n+2;i++){
		printf("%-5d",*(a+i));
	}
	free(a);
	return 0;
}
