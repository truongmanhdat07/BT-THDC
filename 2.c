#include<stdio.h>
int main(){
	int n;
	do{
		printf("vui long nhap so phan tu cua day :");
		scanf("%d",&n);
	}while(n<0);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	int demchan=0,tong=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)	demchan++;
		tong=tong+a[i];
	}
	if(demchan!=0)	printf("gia tri can tim T la :%.2f ",(float)tong/demchan);
	else	printf("khong the chia cho 0");
	return 0;
}
