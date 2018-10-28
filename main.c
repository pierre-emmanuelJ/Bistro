/*
** main.c for Bistro in /Users/jacqui_p/Repo/Bistro
**
** Made by Pierre-Emmanuel Jacquier
** Login   <pierre-emmanuel.jacquier@epitech.eu>
**
** Started on  undefined Oct 28 8:27:08 PM 2018 Pierre-Emmanuel Jacquier
** Last update Mon Oct 28 11:58:45 PM 2018 Pierre-Emmanuel Jacquier
*/

#include "bistro.h"

void usage(char *program_name)
{
    fprintf(stderr, "Powerful calculator\n %s <expresion> e.g: \"2 * (4 + 5) * ((3 - 2) + 6)\"\n", program_name);
    exit(1);
}

int main(int argc, char **argv)
{
    char    *expression;
    t_lexem *lexem;

    if (argc != 2)
    {
        usage(*argv);
    }
    expression = *(argv+1);
    lexem = lex(expression);
    if (lexem == NULL)
    {
        fprintf(stderr, "ERROR: Invalide expression\n");
        return (1);
    }
    while (!(lexem->lex_type == 0 && lexem->expression == NULL))
    {
        if (lexem->lex_type == NUMBER)
        {
            printf("<NUMBER>%s<NUMBER>\n", lexem->expression);
        }
        if (is_type(lexem->lex_type))
        {
            printf("<TYPE>%c<TYPE>\n", lexem->lex_type);
        }
        lexem++;
    }

    return (0);
}