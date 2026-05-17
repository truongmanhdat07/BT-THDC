#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *A=(struct node*)malloc(sizeof(struct node));
	struct node *B=(struct node*)malloc(sizeof(struct node));
	struct node *C=(struct node*)malloc(sizeof(struct node));
	
	if(A==NULL || B==NULL || C==NULL){
		printf("Khong the cap phat bo nho!");
		return 1;
	}
	
	A->data=10;
	B->data=20;
	C->data=30;
	
	A->next=B;
	B->next=C;
	C->next=NULL;
	
	printf("Du lieu cua A :%d",A->data);
	printf("\nDu lieu cua B :%d",A->next->data);
	printf("\nDu lieu cua C :%d",A->next->next->data);
	
	free(A);
	free(B);
	free(C);
	
	return 0;
}
