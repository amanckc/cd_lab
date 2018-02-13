//prog to count line and char. in a file

#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int linecount, charcount;
 linecount = 0;

 charcount = 0;
  printf("Enter a filename :");
  scanf("%s",filename);
   fp = fopen(filename,"r");

   if ( fp )
   {
	   while ((ch=fgetc(fp)) != EOF) {
	   	  
		    if (ch != ' ' && ch != '\n') { 
		    	++charcount; }

		   if (ch == '\n') { 
		   	++linecount; 
		   }

	   }

	   
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", linecount);
    
    printf("Characters : %d \n", charcount);

return(0);
}