#include<stdio.h>
int main(){
	int n;
	do{
		printf("Vui long nhap so phan tu cua day :");
		scanf("%d",&n);
	}while(n<0);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Vui long nhap phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	int min=a[0],dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<min)	min=a[i];
		if(a[i]>=3 && a[i]<=50)	dem++;
	}
	printf("Gia tri nho nhat cua day la : %d",min);
	if(min%2==0)	printf("\nDo la so chan ");
	else			printf("\nDo la so le ");
	if(dem>0)	printf("\nSo phan tu thuoc doan [3,50] la : %d",dem);
	else		printf("\nKhong co phan tu nao thuoc doan [3,50] ");
	return 0;
}
