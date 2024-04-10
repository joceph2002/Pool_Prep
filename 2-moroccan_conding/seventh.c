#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{

	int a =5;
	int* p01; //declare pointer 
	p01 = &a; // give ponter its value
	
	printf("Adress a = %d\n",&a);
	printf("Value of p = %d\n", p01);
	printf("the adress of p is :%d",&p01);
	printf("\n//////////////\n::");
	printf("the number a is %d\n",a);
	printf("the value of p is %d\n",*p01);
	*p01 = 10;
	printf("%d is the value of a after replacing.\n",a);
	printf("%d is the value of p \n",*p01);
	printf("\n\n");
	
	//Pointers Arithmetic --> it print adress
	//int and float and double 4bits and char is 1bits
	printf("this is the adress : %d\n",p01);
	printf("this is the adress +1 int :%d\n",p01+1);//add 4bits for int 

	//the write funciton test 
	write(1,"Hello",3);
	write(1,"\n",1);
	write(1,"Hello",5);
	return 0;

}
