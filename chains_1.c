// TEST 1: FUNCION STRNCPY TO TRUNCATE A CHAIN
// https://stackoverflow.com/questions/16348512/getting-the-first-10-characters-of-a-string

#include <stdio.h>

int main() {
    
    char myString[256]="1234567"; // Input string
	char dest[256]="";     // Destination string
	
	strncpy(dest, myString, 5);
	dest[5] = 0; // null terminate destination
    printf("%s\n",dest);
    printf("Hello, World!");
    return 0;
}

/*Returns
12345
Hello, World!
*/
