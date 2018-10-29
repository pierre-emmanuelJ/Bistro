/*
** lexer.c for Bistro in /Users/jacqui_p/Repo/Bistro
**
** Made by Pierre-Emmanuel Jacquier
** Login   <pierre-emmanuel.jacquier@epitech.eu>
**
** Started on  undefined Oct 28 9:09:57 PM 2018 Pierre-Emmanuel Jacquier
** Last update Tue Oct 29 8:43:33 PM 2018 Pierre-Emmanuel Jacquier
*/

#include "bistro.h"

bool    is_type(char c)
{
    return (c == PLUS ||
    c == MINUS ||
    c == TIME ||
    c == MODULO ||
    c == OPEN_PARENTHESIS ||
    c == CLOSING_PARENTHESIS);
}

static char    *get_nuber_expression(char *str, t_lexem *lexem)
{
    int i = 0;

    while (str[i] != 0)
    {
        if (!isdigit(str[i]))
        {
            break;
        }
        i++;
    }
    lexem->expression = (char *)malloc(sizeof(char) * (i+1));
    memset(lexem->expression, 0, sizeof(char) * (i+1));
    memcpy(lexem->expression, str, i);
    return (str+i);
}

t_lexem     *lex(char *str)
{
    int     i = 0;
    t_lexem *lexem = NULL;

    while(*str != 0)
    {
        if (*str == ' ' || *str == '\t')
        {
            str++;
            continue;
        }
        lexem = realloc(lexem, sizeof(t_lexem) * (i+1));
        memset(lexem+i, 0, sizeof(t_lexem));
        if (isdigit(*str))
        {
            str = get_nuber_expression(str, lexem+i);
            lexem[i++].lex_type = NUMBER;
            continue;
        }
        if (is_type(*str))
        {
            lexem[i].lex_type = *str;
            lexem[i++].expression = NULL;
            str++;
            continue;
        }
        return (NULL);
    }
    lexem = realloc(lexem, sizeof(t_lexem) * (i+1));
    memset(lexem+i, 0, sizeof(t_lexem));
    return (lexem);
}
