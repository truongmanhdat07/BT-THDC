#include<stdio.h>
#include<stdlib.h>
struct sinhviennode{
	int masv;
	char hoten[50];
	float gpa;
};
void nhap(struct sinhviennode *sv1);
void in(struct sinhviennode *sv1);

int main(){
	struct sinhviennode *sv1=(struct sinhviennode *)malloc(sizeof(struct sinhviennode));
	if(sv1==NULL){
		printf("Khong the cap phat bo nho!");
		return 1;
	}
	nhap(sv1);
	in(sv1);
	free(sv1);
	return 0;
}
void nhap(struct sinhviennode *sv1){
	printf("Vui long nhap thong tin sinh vien thu 1 :");
	printf("\nMa Sinh Vien :");
	scanf("%d",&sv1->masv);
	printf("Ho Va Ten :");
	fflush(stdin);
	gets(sv1->hoten);
	printf("Diem Trung Binh :");
	scanf("%f",&sv1->gpa);
}
void in(struct sinhviennode *sv1){
	printf("\nThong tin sinh vien 1 la :");
	printf("\nMa Sinh Vien :%d",sv1->masv);
	printf("\nHo Va Ten :%s",sv1->hoten);
	printf("\nDiem Trung Binh :%.2f",sv1->gpa);
}
