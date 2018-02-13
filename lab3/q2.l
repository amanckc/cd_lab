%{
int wc=0,blank=0,chars=0,line=0;
%}

%%
[ ] {blank++;wc++;}
\n {line++;wc++;}
[a-zA-Z] chars++;


%%

int main()
{
	yylex();
  printf("\n");
	printf("total  lines=%d \n",line);
	printf("total blanks=%d \n",blank);
	printf("total word count=%d \n",wc);
  printf("total characters=%d \n",chars);
  //printf("total ")



	return 0;
}

int yywrap()
{
	return 1;
}
