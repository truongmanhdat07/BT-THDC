#include<stdio.h>
int main(){
	int n,dem1=0,dem2=0;
	do{
		printf("Vui long nhap so phan tu cua day :");
		scanf("%d",&n);
	}while(n<=0);
	float a[n],x,tong=0;
	for(int i=0;i<n;i++){
		printf("Vui long nhap phan tu thu %d :",i+1);
		scanf("%f",&a[i]);
	}
	printf("Vui long nhap x :");
	scanf("%f",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x)	dem1++;
		if(a[i]>x){
			dem2++;
			tong=tong+a[i];
		}
	}
	if(dem1>0)	printf("\nSo phan tu co gia tri = x la :%d",dem1);
	else		printf("\nKhong co phan tu nao co gia tri = x");
	if(dem2!=0)	printf("\nTrung binh cong cua cac phan tu lon hon x la :%.2f",(float)tong/dem2);
	else		printf("\nKhong co phan tu nao co gia tri lon hon x");
	return 0;
}
