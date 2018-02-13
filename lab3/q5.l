%{
int flag=0;
%}

%%
([ ]and[ ]|[ ]or[ ]|[ ]but[ ]|[ ]nor[ ]|[ ]either[ ]|[ ]yet[ ]) flag++;

%%

int main()
{
	yylex();
  printf("\n");
  if(flag!=0)
  {
	printf("the statement is compound\n");
  flag=0;
  }
  else
  printf("simple statement \n");


	return 0;
}

int yywrap()
{
	return 1;
}
