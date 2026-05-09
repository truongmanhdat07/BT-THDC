#include<stdio.h>
int main(){
	int n,sum=0;
	printf("Vui long nhap n :");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	printf("Tong cac so hang tu 1 den %d la : %d",n,sum);
}
