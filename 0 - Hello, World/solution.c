#include <stdio.h>

int main(void)
{
	char s[100];

    /* - %*[^\n] scans everything until a newline \n
         (Doesn't scan \n) and discards it,i.e, doesn't
         store the scanned data anywhere.
       - %*c scans and discards the \n character, upto
         which the first format specifier has scanned.
    */
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s", s); 
	return (0);
}
