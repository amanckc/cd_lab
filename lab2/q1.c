#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	FILE *fa,*fb;
	int ca,cb;
	fa=fopen("input.c","r");
	if(fa==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	fb=fopen("out1.c","w");
	ca=getc(fa);

	while(ca!=EOF)
	{
		if(ca==' ')
		{	putc(ca,fb);
			while(ca==' ')
				ca=getc(fa);
		}
		else if(ca=='\t')
		{
			putc(' ',fb);
			ca=getc(fa);
		}
		else
		{
			putc(ca,fb);
			ca=getc(fa);
		}

	}
	
	return 0;
}