#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("Hello, from proto-lang!\n");
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

}

void Lex(char* arg1[])
{
    typedef enum TokenType {
        INT = 0, PLUSSIGN = 1
    } TokenType;

    typedef struct Token {
        enum TokenType type;
        char text[];
    } Token;

    Token tokens[sizeof(arg1) - sizeof(arg1[0])];

    for (int i = 0; i < sizeof(arg1) - sizeof(arg1[0]); i++)
    {
        switch (*arg1[i])
        {
            case 0:
                //tokens[i] = (Token){.type = INT, .text = IDK HOW TO DO THIS};
        }
    }

}

