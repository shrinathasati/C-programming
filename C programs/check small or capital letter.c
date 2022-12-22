#include<stdio.h>
int main() {
	char character;
	printf("Enter a character =  ");
	scanf("%c",&character);
	int storeAscii=(character);
	if (storeAscii>=65 && storeAscii<=90) {
		printf("\nYou have entered a capital letter");
	} else if (storeAscii>=97 && storeAscii<=122) {
		printf("\nYou have entered a small letter");
	} else if (storeAscii>=47 && storeAscii<=57) {
		printf("\nYou have entered a digit ");
	} else if (storeAscii>=0 && storeAscii>=47
	      || storeAscii>=54 && storeAscii<=64
	      || storeAscii>=91 && storeAscii<=96 
	      || storeAscii>=123 && storeAscii<=127) {
		printf("\nYou have entered a special character");
}}
