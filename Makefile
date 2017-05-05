##
## Makefile for Makefile in /home/DoWdoX/printf
## 
## Made by DORIAN DEBOUT
## Login   <DoWdoX@epitech.net>
## 
## Started on  Tue Nov  8 17:07:01 2016 DORIAN DEBOUT
## Last update Fri May  5 18:46:57 2017 DORIAN DEBOUT
##
NAME	=	libmy.a

SRCS	=	my_printf.c	\
		functions.c	\
		my_put_nbr_u.c	\
		mod_b.c		\
		mod_o.c		\
		my_put_nbr_hd.c	\
		my_put_nbr_ld.c	\
		mod_S.c

OBJS	=	$(SRCS:.c=.o)

RM	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all compile clean fclean re
