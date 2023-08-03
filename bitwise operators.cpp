#include<stdio.h>

int main(){
//	int a=15, b=7;
//	printf("%d\n",a^b);//14bitwise xor
//	printf("%d\n",a&b);//1 bitwise and
//	printf("%d\n",a|b);//15 exclusive
//	printf("%d\n",a<<2);//left shift
//	printf("%d\n",a>>2);//right-shift
//	printf("%d\n",~11);//bitwise not

int a= 17, b=10 ,x;
x= (b>a)?a:b;
printf("%d\n",x);//10
printf("%d\n",(x&a)&b);//0
printf("%d\n",x<<2);//40
printf("%d\n",x>>2);//2
printf("%d\n",a^b);//27
printf("%d\n",~(-4));//-38

}
