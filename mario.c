#include <stdio.h>
#include <cs50.h>

int main (void)
{
   int height;
   do
   { printf("Height:\n");
        
	height = GetInt();}
  
   while ( height < 0 || height >23 );
   for (int i=0; i<height; i++)
   {
       //print space
       for (int s=height-i; s>1; s--)
       {printf(" ");}
        //print #
        for (int h=0; h<i+2; h++)
        {printf ("#");}
        printf("\n");
   }}