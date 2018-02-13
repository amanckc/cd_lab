#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int a ,b=#si;//variable
	/*fdf
	dfvdf*/
	printf("enter num\n");
	printf("#include is a\n");
		if   (a   <b)
		printf("    a is smaller\n");
	else
		printf("b is smaller\n");

    scanf("fff\n");
	return 0;
}


//////

%{
#include<stdio.h>
int count=0;
%}
op [+-*/]
letter [a-zA-Z]
digitt [0-9]
id {letter}*|({letter}{digitt})+
notid ({digitt}{letter})+
%%
[\t\n]+
("int")|("float")|("char")|("case")|("default")| ("if")|("for")|("printf")|("scanf") {printf("%s is a keyword\n", yytext);}
{id} {printf("%s is an identifier\n", yytext); count++;}
{notid} {printf("%s is not an identifier\n", yytext);}
%%
int main()
{
FILE *fp;
char file[10];
printf("\nEnter the filename: ");
scanf("%s", file);
fp=fopen(file,"r");
yyin=fp;
yylex();
printf("Total identifiers are: %d\n", count);
return 0;
}
