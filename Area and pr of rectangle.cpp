#include<stdio.h>
int main(){
	int l,b,ar,pr;
	printf("Enter Length:");
	scanf("%d",&l);
	printf("Enter Breadth:");
	scanf("%d",&b);
	ar=l*b;
	pr=2*(l+b);
	printf("Area=%d\n",ar);
	printf("Perimeter=%d\n",pr);
}