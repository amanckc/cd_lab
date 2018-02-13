%{
int pc=0,sc=0;
%}

%%
printf {pc++;fprintf(yyout,"WRITE");}
scanf {sc++;fprintf(yyout,"READ");}
%%

int main()
{
  yyin=fopen("input.c","r");
  yyout=fopen("out.c","w");
	yylex();
  printf("\n");
	printf("total  printf=%d \n",pc);
	printf("total scanf=%d \n",sc);

	return 0;
}

int yywrap()
{
	return 1;
}
