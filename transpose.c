/**
* Transposing matrix1
* Copyright (C) 2010 Kyle Andrews <KyleAndrews@whccd.net>
* Date: 12-14-2010
*/

/*Include libraries*/
#include <stdio.h>

/*Define*/
#define M1 "M1.txt"
#define M2 "M2.txt"

int main(void)
{

int rows, cols, a, b;
   double matrix1[3][3],matrix2[3][3];
   FILE *m1, *m2; //file pointers
  
   m1 = fopen(M1,"r");
   m2 = fopen(M2,"r");
   if (m1 == NULL || m2 == NULL) //error checking
      printf("Error opening input file!\n");
   else
   {
     /*get the data from the file and place it in matrix1 matrix1*/
      fscanf(m1,"%d %d",&rows,&cols);   
      for (a=0; a<=rows-1; a++)
         for (b=0; b<=cols-1; b++)
            fscanf(m1,"%lf",&matrix1[a][b]);
            
       fscanf(m2,"%d %d",&rows,&cols);   
      for (a=0; a<=rows-1; a++)
         for (b=0; b<=cols-1; b++)
            fscanf(m1,"%lf",&matrix2[a][b]);
         
         //work product equation here *incomplete*
      fclose(m1);
      fclose(m2);
   }  
   return 0;
}
