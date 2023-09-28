#include <stdio.h>
#include <stdlib.h>

int carp(int dizi1[],int index){
	int carpim=1;
	int i;
	
	for(i=0;i<index;i++){
		
		carpim*=dizi1[i];
		
	}return carpim;
	

}


int main(int argc, char *argv[]) {
	int n;
	printf("Dizinin kac elemanli oldugunu giriniz : ");
	scanf("%d",&n);
	
	int dizi[n];
	int i;
	
	for(i=0;i<n;i++){
		printf("dizinin %d. indexini giriniz : ",i);
		scanf("%d",&dizi[i]);
		
	}
	for(i=0;i<n;i++){
		printf("[%d]. index = %d\n",i,dizi[i]);
	}
	
	
	printf("Dizinin elemanlarinin carpimi : %d",carp(dizi,n));
	
	

	
	return 0;
}
