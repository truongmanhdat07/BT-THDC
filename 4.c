#include<stdio.h>
int main(){
	int n;
	do{
		printf("vui long nhap so phan tu cua day :");
		scanf("%d",&n);
	}while(n<3);
	float a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i+1);
		scanf("%f",&a[i]);
	}
	float mintich=a[0]*a[1]*a[2],tichht;
	int vitri=0;
	for(int i=0;i<n-2;i++){
		tichht=a[i]*a[i+1]*a[i+2];
		if(tichht<mintich)	{
			mintich=tichht;
			vitri=i;
		}
	}
	printf("\nbo 3 phan tu co tich nho nhat la :%.2f %.2f %.2f ,mintich = %.2f ",a[vitri],a[vitri+1],a[vitri+2],mintich);
	return 0;
}
