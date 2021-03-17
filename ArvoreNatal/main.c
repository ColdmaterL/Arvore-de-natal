#include <stdio.h>
#include <stdlib.h>


int main(){
	int i, j, k, c=1, tam;
	printf("what's the size of your tree?");
	scanf("%d", &tam);
	system("cls");
	k = tam -1;
	c=1;
	for(i=0;i<tam;i++){
		if(k!=0){
			for(j=0;j<k;j++)
				printf(" ");
			k--;
		}
		for(j=0;j<c;j++){
			if(i==0 && tam>2)
				printf("*");
			else
				printf("#");
		}
		c=c+2;
		printf("\n");
	}
	c=c/2-2;
	for(i=0;i<c;i++){
		printf(" ");
	}
	if(tam>1)
		printf("|||");
	printf("\n");
	return 0;
}
