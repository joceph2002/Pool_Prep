#include <unistd.h>
#include <stdio.h>

int main()
{
	//Break and continue and Goto in Loops
	
	//Break Example
	int n, s, i;
	s = 0;
	i = 0;
	while (i<5){
		printf("enter a positive number: ");
		scanf("%d",&n);
		if (n<0)
			break;
		s = s +n;
		i++;
	} 	
	printf("the sum is %d",s);
	
	printf("\n\n\n");
	
	//Continue Example 
	
	int n01, s01, i01;
	s01 = 0;
	i01 = 0;

	while (i01 <5)
	{
		printf("Enter a positive number: ");
		scanf("\n%d", &n01);
		if (n01 < 0)
			continue;
		s01 = n01 + s01;
		i01++;
	}

	printf("the sum is %d",s01);

	printf("\n\n");
	//Goto Example same as do while
	
	
	int n02;
	starthna:
	printf("enter a number between 1 and 5: ");
	scanf("%d",&n02);
	if (n02 <1 || n02 >5)
		goto starthna;
	printf("nadi rak da5lti mabin 1 o 5. ");


	printf("\n\n");

	//tables 
	
	float table [5];
	int i03 = 0;
	while (i03<5)
	{
		printf("enter the grade of your student nmb %d: ",i03+1);
		scanf("%f",&table[i03]);
		i03++;
	}
	float s03;
	int i04;
	s03 = 0;
	i04 = 0;
	
	while (i04 <5)
	{
		s03 = s03 + table[i04];
		i04++;
	}
	
	printf("the sum of note is %f: ", s03);
	printf("\nthe average note is %f: ", s03/5);












	return 0;
}

