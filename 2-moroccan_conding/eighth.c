#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c){
	write(1,&c,1); // same for 1 or 2 in count cuz char only 				take one character
 	write(1,"\n",1);
}


int main() {

	ft_putchar('v');
	ft_putchar(97);//ascii code of a is 97
	return 0;

}
