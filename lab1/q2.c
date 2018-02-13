#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
FILE *fp;
 char filename[100];
 char buff[2000];
 char ch,choice;
 int linecount,i=0;
 linecount = 0;
memset(buff,0,sizeof(buff));
  printf("Enter a filename :");
  scanf("%s",filename);
   fp = fopen(filename,"r");

   if ( fp )
   {
	   
   	while((ch=fgetc(fp)) != EOF)
   	{
   		buff[i++]=ch;
   		if(ch=='\n')
   			linecount++;

   		if(linecount==5)
   		{
   			buff[i]='\0';
   			printf("%s\n",buff);
   			i=0;
   			linecount=0;
   			memset(buff,0,sizeof(buff));
   			printf("C-continue \n Q-quits\n");
   			scanf("%s",buff);
   			ch=buff[0];
   			if(ch=='C'|| ch=='c')
   				continue;
   			else if(ch=='Q' || ch=='q')
   				exit(0);


   		}

   	}


	   
    }
    else
    	printf("could not open file\n");
  

   
	return 0;
}