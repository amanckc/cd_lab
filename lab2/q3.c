#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

const char delimiters[] = " .,;:!-()\n\t";
const char *keywords[22] = {
    "double",
    "int",
    "struct",
    "break",
    "else",
    "switch",
    "case",
    "typedef",
    "char",
    "return",
    "continue",
    "for",
    "void",
    "do",
    "if",
    "static",
    "while",
    "default",
    "sizeof",
    "const",
    "float",
    "short"
    };

int keyword (char *word) {
    int i;
    for (i = 0; i <22; ++i) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}


int main (int argc, const char * argv []) {

    char inname[128];
    FILE *input = fopen("input.c", "r");
    char buffer[1024];
    int l,i,j,k;char ch,z;
    FILE *output = fopen("out3.c", "w+");


    while (fgets(buffer, 1024, input) > 0) {

        char *cp = (char *)malloc(1024 * sizeof(char));
        strcpy(cp, buffer);
            
        char *token = (char *)malloc(256 * sizeof(char));

        do {
            token = strsep(&cp, delimiters);
            if (token != NULL) {
                if (keyword(token)) {
                    //printUpperCase(token);

                    l = strlen(token);
                    
                    int i;
                    for (i = 0; i < l; ++i) {
                        //z = token[i];
                       // z= (z > 96 )? z - 32 : z;
                       
                        
                        token[i]=(token[i]>96)?token[i]-32:token[i];
                        //putc(token[i],output);
                        printf("%c", token[i]);
                        fprintf(output, "%c",token[i]);
                        //putc(z,output);

                    }printf("\n");
                }
                else
                    {
                        // for (i = 0; i < l; ++i) {
                        // z = token[i];
                        
                         fprintf(output, "%c",cp);
                        
                        }
                    }

            }

        }while (token != NULL);
    }

    fclose(input);

    return 0;

}
