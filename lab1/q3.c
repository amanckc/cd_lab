//prog to count line and char. in a file

#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;int c=1;
 
  printf("Enter a filename :");
  scanf("%s",filename);
   fp = fopen(filename,"r");

   do{
   	 printf("Enter a filename :");
  	scanf("%s",filename);
   	fp = fopen(filename,"r");
   	if(fp==NULL)
   		{
   			c++;printf("try once more\n");
   		}
   		// if(fp!=NULL)
   		// {
   		// 	while((ch=fgetc(fp)) != EOF)
   		// 	{
   		// 		printf("%c",ch);
   		// 	}
   		// 	break;
   		// }



   }while(c<3);
   if(c>=3)
   	printf("all three chances are over\n");


// if(fp==NULL)
// {
// 	f
// }
//    if ( fp )
//    {
// 	   while ((ch=fgetc(fp)) != EOF) {
	   	  
// 		    if (ch != ' ' && ch != '\n') { 
// 		    	++charcount; }

// 		   if (ch == '\n') { 
// 		   	++linecount; 
// 		   }

// 	   }

	   
//     }
   

    
return(0);
}