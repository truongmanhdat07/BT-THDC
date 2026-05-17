#include<stdio.h>
#include<stdlib.h>

void nhapmatran(int **,int,int);
void inmatran(int **,int,int);

int main(){
	int rows,cols;
	printf("Vui long nhap so hang :");	scanf("%d",&rows);
	printf("Vui long nhap so cot :");	scanf("%d",&cols);
	int **a=(int **)malloc(rows*sizeof(int *));
	for(int i=0;i<rows;i++){
		a[i]=(int *)malloc(cols*sizeof(int));
	}
	nhapmatran(a,rows,cols);
	inmatran(a,rows,cols);
	for(int i=0;i<rows;i++){
		free(a[i]);
	}
	free(a);
}

void nhapmatran(int **a,int rows,int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("Vui long nhap phan tu hang %d cot %d :",i+1,j+1);
			scanf("%d",*(a+i)+j);
		}
	}
}
void inmatran(int **a,int rows,int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%-5d",*( *(a+i)+j) );
		}
		printf("\n");
	}
}
