/**
* New template Version 2.0
* Copyright (C) 2010 Kyle Andrews <KyleAndrews@whccd.net>
* Date: 10-19-2010
*/

/*Includes*/
#include <stdio.h>

int main() 
{
int x;
float data[10];
FILE *fp;
fp=fopen("lab2.txt","r");

if(fp != NULL) 
{
   while (!(feof(fp))) 
   {
     fscanf(fp,"%f",&data[x]);
   }
}
else 
{
   printf("Error! Could not open \"lab2.txt\"");
   return 1;
}
return 0;
}
