#include<stdio.h>
int main(){
	int a=5,b=10,c=5;
	printf("%d\n",-7%2);
	printf("%d\n",-7%-2);      //when it is modulus then sign of output depends on sign of numerator value
	printf("%d\n",7%2);
	printf("%d\n",7%-2);
	printf("%d\n",-7/2);
	printf("%d\n",-7/-2);       //when it is division sign of output depends on mahematical operations only
	printf("%d\n",7/2);
	printf("%d\n",7/-2);
	printf("%d\n",a&b);
	printf("%d\n",a|b);
	printf("%d\n",a&c);
	printf("%d\n",a|c);
	printf("%d\n",a<<2);         //a*2^b gives value of left shift operator
	printf("%d\n",a>>2);         //a/2*b gives value of right shift operator
	return 0;
}
