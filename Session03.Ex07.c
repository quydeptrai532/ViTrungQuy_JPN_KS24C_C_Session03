#include<stdio.h>

int main(){
	int n,hangdonvi,hangchuc,hangtram,hangnghin,sum;
	printf("nhap so nguyen 4 chu so ");
	scanf("%d",&n);
	hangdonvi=n%10;
	hangchuc=(n/10)%10;
	hangtram=(n/100)%10;
	hangnghin=n/1000;
	sum=hangdonvi+hangchuc+hangtram+hangnghin;
	printf("tong cac chu so cua so vua nhap la %d",sum);
	return 0;
}
