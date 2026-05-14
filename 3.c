#include<stdio.h>
int main(){
	int n;
	do{
		printf("vui long nhap so phan tu cua day : ");
		scanf("%d",&n);
	}while(n<2);
	int a[n],dem=0,vitri=-1;
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		if( ( a[i]+a[i+1] )!=0 ){
			if( ( ( a[i]*a[i+1] ) % ( a[i]+a[i+1] ) ) ==0 )	{
				dem++;
				vitri=i;
			}
		}
	}
	printf("\nso cap thoa man yeu cau la : %d",dem);
	if(dem>0)	printf("\n1 cap thoa man yeu cau la : %d %d",a[vitri],a[vitri+1]);
}
