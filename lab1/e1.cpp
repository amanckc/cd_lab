#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
 int main(int argc, char const *argv[])
{
	FILE* p1,*p2;
	char filename[100],ch;

	printf("enter hte file naME TO copy\n");
	cin>>filename;
	p1=fopen(filename,"r");

	if(p1==NULL)
	{
		cout<<"file could not be opened";
		exit(0);
	}
	cout<<"enter the file name for writing"<<endl;
	cin>>filename;

	p2=fopen(filename,"w+");
	ch=fgetc(p2);

	while(ch!=EOF)
	{
		fputc(ch, p2);
		ch = fgetc(p1);
	}
	cout<<"contents copied"<<endl;
	fclose(p1);
	fclose(p2);
	return 0;
}