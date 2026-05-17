#include<stdio.h>
#include<stdlib.h>

void nhap(int * ,int);
void in(int * ,int);
int timmax(int *,int);
void sapxep(int *,int);

int main(){
	int n;
	printf("Vui long nhap so phan tu cua mang :");	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	if(a==NULL){
		printf("Khong the cap phat bo nho !");
		return 1;
	}
	nhap(a,n);
	in(a,n);
	printf("\nGia tri lon nhat cua mang la :%d",timmax(a,n));
	sapxep(a,n);
	printf("\nMang sau khi sap xep la :");
	in(a,n);
}

void nhap(int *a,int n){
	for(int i=0;i<n;i++){
		printf("Vui long nhap phan tu thu %d :",i+1);
		scanf("%d",a+i);
	}
}
void in(int *a,int n){
	printf("\nMang vua nhap la :");
	for(int i=0;i<n;i++){
		printf("%-5d",*(a+i));
	}
}
int timmax(int *a,int n){
	int max=*a;
	for(int i=0;i<n;i++){
		if((*a+i)>max)	max=*(a+i);
	}
	return max;
}
void sapxep(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)>*(a+j))	{
				int temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
