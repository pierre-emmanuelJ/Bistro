/*
** main.c for Bistro in /Users/jacqui_p/Repo/Bistro
**
** Made by Pierre-Emmanuel Jacquier
** Login   <pierre-emmanuel.jacquier@epitech.eu>
**
** Started on  undefined Oct 28 8:27:08 PM 2018 Pierre-Emmanuel Jacquier
** Last update Mon Oct 28 8:35:50 PM 2018 Pierre-Emmanuel Jacquier
*/

#include <stdio.h>

void usage(char *program_name)
{
    printf("Powerful calculator\n %s <expresion> e.g: \"2 * (4 + 5) * ((3 - 2) + 6)\"\n", program_name);
}

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        usage(*argv);
    }

    return (0);
}