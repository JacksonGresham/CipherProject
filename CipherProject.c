#include<stdio.h> //Library used for 'fget()' and 'stdin'
#include<string.h> //Library used for 'stringlen()'
#include<stdlib.h>

void cipher(char* text, int cipherkey); //Function definition

int main(void){
	
	char text[101]; //The variable used for manipulation of the ASCII characters
    int cipherkey = 1; //By how many letters the text will be switched
	printf("Enter text"); //Text to be encrypted
	fgets(text, sizeof(text), stdin); //Uses 'fget' to store text into text variable
	printf("The ciphered text is : ");
	caesarcipher(text, cipherkey); //Prints encrypted text
	system("pause");
}

void caesarcipher(char* text, int cipherkey){ //Function prototype
	
	int i=0;
	int ciphervalue;
	char cipher;
	
	while( text[i] != '\0' && strlen(text)-1 > i){ //Takes one letter from the text to encrypt and limits the number of times this encryption occurs by using the string length
		ciphervalue = ((int)text[i] -97 + cipherkey) % 26 + 97; //Makes it so that the ASCII characters follow a=1, b=2 etc. and then reconverts it back to letters once the encryption is done
		cipher = (char)(ciphervalue);
		printf("%c", cipher);
		i++;
	}
	printf("\n");
}
