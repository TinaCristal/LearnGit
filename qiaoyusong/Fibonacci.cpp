#include<stdio.h>

int main(){
	int i=1;
	int j=1;
	int sum =0;
	int n;
	scanf("%d",&n);
	if(n<=2){
		printf("1");
		return 0;
	}
	else{
		for(int k=2;k<n;k++){
			sum = i+j;
			j = i;
			i = sum;
		}
		printf("%d",sum);
		return 0;
	}
	
} 
