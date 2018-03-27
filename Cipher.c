/**
* Cryption/Decryption
* Copyright (C) 2010 Kyle Andrews
* Date: 12-05-2010
*/

#include <stdio.h>
#include <ctype.h>//for toupper(ch) function

int isLetter(char c);//function prototype
int valid(char c);//another prototype

int main(void)
{
char inputChar,inputChar2k;//two chars for multiple formatting of message
	printf("Type encryption below: \nbux kgyk yrrykg sxrhokp rth\n");
	
	while (inputChar != '\n') {//loop until return
		inputChar = getchar();//store chars
		inputChar2k = inputChar;//store chars again
			if (isLetter(inputChar) && valid(inputChar2k)) {//functions for message formatting
				inputChar += 3;//cipher key +=3
				inputChar2k +=6;//2k k=3
			if (inputChar >= 'a' || inputChar2k >= 'a') {
				if (inputChar > 'z') {
					inputChar -= 26;//-26 to restart the alphabet sequence
				} else if (inputChar2k > 'z') {
					inputChar2k -=26;//restart alphabet (26 letters go back to a)
				}
			}
			else if (inputChar > 'Z') {//uppercase same as above
				inputChar -= 26;//-26 to restart alphabet sequence
			}
			else if (inputChar2k > 'Z') {//same as above
				inputChar2k -=26;
			}
			
		}
		printf("%c",inputChar);//print out encryption
		printf("%c",inputChar2k);//print out additional encryption
	}
return 0;
}

int isLetter(char c) {//function to return alpha letters, ignores symbols
	c +=1;//Go 1 place, odd 
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
int valid(char c) {
	c +=2;//Go two places in message, even
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
