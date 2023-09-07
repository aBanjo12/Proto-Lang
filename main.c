#include <stdio.h>
#include <string.h>

void Lex()
{
    typedef enum TokenType {
        INT = 0, PLUSSIGN = 1
    } TokenType;

    typedef struct Token {
        enum TokenType type;
        char text[];
    } Token;

    char s[60] = "this is a test sentance because brock is a silly mate X_X";
    char t[2] = " ";
    char tokens[40];

    char* e = strtok(s, t);

    for (int i = 0; e != NULL; i++)
    {
        printf("%s\n", e);
        tokens[i] = e;
        e = strtok(NULL, t);
    }


    /*Token tokens[sizeof(arg1) - sizeof(arg1[0])];

    for (int i = 0; i < sizeof(arg1) - sizeof(arg1[0]); i++)
    {
        switch (*arg1[i])
        {
            case 0:
                //tokens[i] = (Token){.type = INT, .text = IDK HOW TO DO THIS};
        }
    }*/

}

int main(int argc, char* argv[])
{
    printf("Hello, from proto-lang!\n");
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    Lex();

}



