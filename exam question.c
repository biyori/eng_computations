/**
* New template Version 2.0
* Copyright (C) 2010 Kyle Andrews <KyleAndrews@whccd.net>
* Date: 10-19-2010
*/
#include <stdio.h>


int main()
{
    float gatherData; //float to read float nums in files
    FILE *fp; //define file pointer 
    FILE *writeTo; //define file pointer
    fp=fopen("numbers.txt","r"); //open numbers.txt for reading
    writeTo=fopen("outnums.txt","w");//open for writing
    
    if(fp != NULL) { //error checking to see if file exists or not
    
    while (!(feof(fp))) { //loop till end of file, then store data in float gatherData
    fscanf(fp,"%f",&gatherData); //get the floating point numbers out of numbers.txt
    if (gatherData > 5.0)  //conditional to output only values greater than 5.0.
    	{
    	fprintf(writeTo,"%f\n",gatherData); //writing data to outnums.txt
    	}
    } 
    fclose(fp); //closing the file we're done
    fclose(writeTo);//closing the file we're done
    printf("Successfully copied over data greater than 5 into \"outnums.txt.\""); //confirmation
    } else {
    	printf("Error! Could not open \"numbers.txt\""); //print error message
    	return 1; //Good practice to return 1
    }
    return 0; //Return process complete.
}
