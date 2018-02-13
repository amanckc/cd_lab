#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fa,*fb;
    char ca;
    int flag=0;

    fa=fopen("input.c","r");

    fb=fopen("out2.c","w+");

    ca=getc(fa);


    while(ca!=EOF)
    {
        if(ca=='#' && flag==0)
        {
            while(ca!='\n')
                    ca=getc(fa);
            flag=1;
        }
        if(ca=='\n' && flag==1)
        {
            ca=getc(fa);
            if(ca=='#')
            {
                while(ca!='\n')
                    ca=getc(fa);
            }
            else
                putc('\n',fb);
        }
        else
        {
            putc(ca,fb);
            ca=getc(fa);
        }

    }

    return 0;
}