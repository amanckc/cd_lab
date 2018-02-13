%{
//int linecount=0;
int vowels=0,cons=0;
%}

%%
[a,e,i,o,u] vowels++;
[a-z] cons++;
%%

int main()
{
	yylex();
	//printf("total =%d \n",linecount);
	printf("total vowels=%d \n",vowels);
	printf("total consonants=%d \n",cons);


	return 0;
}

int yywrap()
{
	return 1;
}
