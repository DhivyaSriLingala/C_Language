#include<stdio.h>
int main(){
	int a=4,b=4,c=4,d=4,e=4;
	a+=1;
	b-=1;
	c*=2;
	d/=2;
	e%=2;
	printf("a+=1 value=%d\n",a);
	printf("b-=1 value=%d\n",b);
	printf("c*=2 value=%d\n",c);
	printf("d/=2 value=%d\n",d);//Quotient
	printf("emod=2 value=%d",e);//remainder
	return 0;
}
