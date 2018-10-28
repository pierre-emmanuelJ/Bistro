##
## Makefile for Bistro in /Users/jacqui_p/Repo/Bistro
##
## Made by Pierre-Emmanuel Jacquier
## Login   <pierre-emmanuel.jacquier@epitech.eu>
##
## Started on  undefined Oct 28 8:26:29 PM 2018 Pierre-Emmanuel Jacquier
## Last update Mon Oct 28 9:13:48 PM 2018 Pierre-Emmanuel Jacquier
##

CC = gcc

RM = rm -rf

TARGET = bistro

CFLAGS	= -Wall -Wextra -g

SRC	= main.c \
	  lexer.c

OBJS = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: clean fclean all

.PHONY: all clean fclean re
