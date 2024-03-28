#include<stdio.h>
int main(){
	int a[3][3],b[3][3],mul[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
			}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mul[i][j]=a[i][j]*b[i][j];
			printf("%d ",mul[i][j]);
			}
		printf("\n");
	}
	return 0;
}
