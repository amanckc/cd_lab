%{
int pos=0,neg=0,fpos=0,fneg=0;
%}
dig [0-9]
%%

\+?{dig}+	pos++;
-{dig}+	neg++;
\+?{dig}*(\.{dig}+)?(E[+,-]?{dig}+)	fpos++;
-{dig}*(\.{dig}+)?(E[+,-]?{dig}+)		fneg++;
. ;
%%

int main()
{
	yylex();
  printf("\n");
	printf("total  positive=%d \n",pos);
	printf("total negative=%d \n",neg);
	printf("total positive floating=%d \n",fpos);
  printf("total negative floating=%d \n",fneg);
	return 0;
}

int yywrap()
{
	return 1;
}
