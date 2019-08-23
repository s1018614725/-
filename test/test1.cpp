#include<stdio.h>
#include<Windows.h>
int fun(int n){
		int i;
	for(i=2;i<n;i++)
		if (n%i==0) return 0;
	return 1;
}
void main(){
		int j=0,a=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(fun(i)){
			printf("%4d",i);
			j++;
			if(j%5==0)printf("\n");
		}
	}
	printf("\n总共有%d个质数\n",j);
		system("pause");
}