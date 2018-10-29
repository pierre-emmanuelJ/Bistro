/*
** bistro.h for Bistro in /Users/jacqui_p/Repo/Bistro
**
** Made by Pierre-Emmanuel Jacquier
** Login   <pierre-emmanuel.jacquier@epitech.eu>
**
** Started on  undefined Oct 28 8:27:30 PM 2018 Pierre-Emmanuel Jacquier
** Last update Tue Oct 29 1:32:52 PM 2018 Pierre-Emmanuel Jacquier
*/

#ifndef BISTRO_H_
# define BISTRO_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef enum    e_type    t_type;
typedef struct    e_tree    t_tree;

enum    e_type
{
    NUMBER,
    PLUS = '+',
    MINUS = '-',
    TIME = '*',
    MODULO = '%',
    OPEN_PARENTHESIS = '(',
    CLOSING_PARENTHESIS = ')'
};

typedef struct  s_lexem
{
    t_type      lex_type;
    char        *expression;
}               t_lexem;

struct          e_tree
{
    t_type      lex_type;
    char        *expression;
    t_tree      *parent;
    t_tree      *branch_right;
    t_tree      *branch_left;
};


t_lexem *lex();
bool is_type(char c);
char *get_nuber_expression(char *str, t_lexem *lexem);

#endif /* !BISTRO_H_ */
