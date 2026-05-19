#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct toado{
	char ten[3];
	float x,y;
}toado;

void nhap(toado *p,int n);
void in(toado *p,int n);
float tongkc(toado *p,int n);
void timdiem(toado *p,int n);

int main(){
	int n;
	printf("Vui long nhap so diem :");
	scanf("%d",&n);
	toado *p=(toado*)malloc(n*sizeof(toado));
	nhap(p,n);
	in(p,n);
	printf("\nTong khoang cach tu cac diem den goc toa do la :%.2f",tongkc(p,n));
	timdiem(p,n);
	free(p);
}

void nhap(toado *p,int n){
	for(int i=0;i<n;i++){
		printf("Vui long nhap diem thu %d :",i+1);
		printf("\nTen diem :");
		fflush(stdin);			gets(p[i].ten);
		printf("Toa do x:");	scanf("%f",&p[i].x);
		printf("Toa do y:");	scanf("%f",&p[i].y);
	}
}
void in(toado *p,int n){
	printf("\nCac diem vua nhap la :");
	for(int i=0;i<n;i++){
		printf("\nTen diem :%s(%.2f,%.2f)",p[i].ten,p[i].x,p[i].y);
	}
}

float tongkc(toado *p,int n){
	float sum=0;
	for(int i=0;i<n;i++){
		float bpkc = p[i].x * p[i].x + p[i].y * p[i].y;
		sum+=sqrt(bpkc);
	}
	return sum;
}
void timdiem(toado *p,int n){
	int k;
	printf("\nVui long nhap goc phan tu can kiem tra : ");	scanf("%d",&k);
	if(k==1){
		printf("\nCac diem thuoc goc phan tu thu 1 la :");
		for(int i=0;i<n;i++){
			if(p[i].x>0&&p[i].y>0){
				printf("\nDiem :%s(%.2f,%.2f)",p[i].ten,p[i].x,p[i].y);
			}
		}
	}
	if(k==2){
		printf("\nCac diem thuoc goc phan tu thu 2 la :");
		for(int i=0;i<n;i++){
			if(p[i].x<0&&p[i].y>0){
				printf("\nDiem :%s(%.2f,%.2f)",p[i].ten,p[i].x,p[i].y);
			}
		}
	}
	if(k==3){
		printf("\nCac diem thuoc goc phan tu thu 3 la :");
		for(int i=0;i<n;i++){
			if(p[i].x<0&&p[i].y<0){
				printf("\nDiem :%s(%.2f,%.2f)",p[i].ten,p[i].x,p[i].y);
			}
		}
	}
	if(k==4){
		printf("\nCac diem thuoc goc phan tu thu 4 la :");
		for(int i=0;i<n;i++){
			if(p[i].x>0&&p[i].y<0){
				printf("\nDiem :%s(%.2f,%.2f)",p[i].ten,p[i].x,p[i].y);
			}
		}
	}
}
