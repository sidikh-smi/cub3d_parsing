# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 10:23:30 by skhaliff          #+#    #+#              #
#    Updated: 2023/04/10 22:08:04 by ebakchic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isdigit.c ft_memset.c ft_isprint.c\
ft_strlcat.c ft_atoi.c ft_substr.c ft_strjoin.c ft_split.c ft_putstr_fd.c ft_strmapi.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c ft_striteri.c ft_putnbr_fd.c\
ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_strtrim.c ft_putendl_fd.c\
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_putchar_fd.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_strcmp.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(BONUS:.c=.o)
CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJS):
		@$(CC) $(CFLAGS)  -c $(SRCS)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)

bonus:$(OBJSBONUS)
		
$(OBJSBONUS):
		@$(CC) $(CFLAGS)  -c $(BONUS)
		@ar rcs $(NAME) $(OBJSBONUS)



clean:
		@$(RM) $(OBJS) $(OBJSBONUS)

fclean:	clean
		@$(RM) $(NAME)

re:		fclean all
