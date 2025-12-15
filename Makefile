# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 11:57:37 by ricsanto          #+#    #+#              #
#    Updated: 2025/04/24 12:34:38 by ricsanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

FLAGS := -Wall -Wextra -Werror

SRC :=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
		ft_strlen.c		ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c	\
		ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c		\
		ft_strrchr.c	ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
		ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c		ft_strjoin.c	\
		ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c	ft_striteri.c	\
		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c ft_putnbr_fd.c

OBJ := $(SRC:.c=.o)

SRC_BONUS := 	ft_lstnew.c			ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	\
				ft_lstadd_back.c	ft_lstdelone.c		ft_lstclear.c	ft_lstiter.c	\
				ft_lstmap.c

OBJ_BONUS := $(SRC_BONUS:.c=.o)

AR := ar -rcs

RM := rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	cc $(FLAGS) -o $@ -c $< -I.

bonus: $(OBJ) $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	touch bonus

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)
	$(RM) bonus

re: fclean all

.PHONY: all clean fclean re
