#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{

FILE *fp1,*fp2;
 char filename[100];
 char c1,c2;
int size;
 
  printf("Enter a filename 1:");
  scanf("%s",filename);
   fp1 = fopen(filename,"r");

   printf("Enter a filename 2:");
  scanf("%s",filename);
   fp2 = fopen(filename,"r");

   while((c1=fgetc(fp1)) != EOF || (c2=fgetc(fp2)) != EOF)
   {
    if(c1!=c2)
    	printf("different at position %d\n",pos );
    pos++;
    c1=fgetc(fp1);
    c2=cfgetc(fp2);
    

   }
return 0;

}