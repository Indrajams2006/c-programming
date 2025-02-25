#include<stdio.h>
int main(){
	int num,i=1,fact=1;
	printf("Enter the number");
	scanf("%d",&num);
	if(num<=0){
		printf("invalid");
	}
	else{
		while(i<=num){
		fact=fact*i;
		i++;
		}
		printf("the factoriaL is %d",fact);
		}
	return 0;
}


