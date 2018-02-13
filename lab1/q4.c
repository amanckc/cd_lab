#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 FILE *fp;
 char filename[100];
 char ch;
int size;
 
  printf("Enter a filename :");
  scanf("%s",filename);
   fp = fopen(filename,"r");

   if(fp)
   {
    fseek(fp,0,SEEK_END);
    size=ftell(fp);
    printf("size of ifle is %d\n",size);
    fclose(fp);
   }
return 0;

}


