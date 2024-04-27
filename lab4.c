/* Verifya mathematicalexpressionissolvableornot. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int a = 0, b = 0, c;
    char str[20], tok[11];
    printf("Inputtheexpression =");
    fgets(str, 20, stdin);

    while (str[a] != '\0')
    {
        if ((str[a] == '(') || (str[a] == '{'))
        {
            tok[b] = '4';
            b++;
        }

        if ((str[a] == ')') || (str[a] == '}'))
        {
            tok[b] = '5';
            b++;
        }

        if (isdigit(str[a]))
        {
            while (isdigit(str[a]))
            {
                a++;
            }
            a--;
            tok[b] = '6';
            b++;
        }

        if (str[a] == '+')
        {
            tok[b] = '2';
            b++;
        }

        if (str[a] == '*')
        {
            tok[b] = '3';
            b++;
        }
        a++;
    }

    tok[b] = '\0';
    puts(tok);
    b = 0;
    enum TokenType
    {
        LPAREN,
        RPAREN,
        PLUS,
        TIMES,
        NUMBER,
        ENDMARKER
    };
    
    while (tok[b] != '\0')
    {
   // Check if the three characters at positions b, b+1, b+2 in the array 'tok' form the strings "626", "636", or "465"
    if (
        // Check if the characters form the string "626" -> DIGIT OPERATOR DIGIT
        ((tok[b] == '6') && (tok[b + 1] == '2') && (tok[b + 2] == '6')) || 
        // Check if the characters form the string "636" -> DIGIT OPERATOR DIGIT
        ((tok[b] == '6') && (tok[b + 1] == '3') && (tok[b + 2] == '6')) || 
        // Check if the characters form the string "465" -> LPAREN DIGIT RPAREN
        ((tok[b] == '4') && (tok[b + 1] == '6') && (tok[b + 2] =='5'))
    )
        {
            // printf("if\t%c--%c--%c\n", tok[b], tok[b + 1], tok[b + 2]);
            tok[b] = '6';

            c = b + 1;
            while (tok[c] != '\0')
            {
                tok[c] = tok[c + 2];
                c++;
            }
            tok[c] = '\0';
            // puts(tok);
            b = 0;
        }
        else
        {
            b++;
            // puts(tok);
            // printf("else\t%c--%c--%c\n", tok[b], tok[b + 1], tok[b + 2]);
        }
    }

    int d;
    d = strcmp(tok, "6");
    if (d == 0)
    {
        printf("Itisinthegrammar.");
    }
    else
    {
        printf("Itisnotinthegrammar.");
    }
    return 0;
}