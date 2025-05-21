NAME = libftprintf.a

TARGET = all

SRC = ft_printf.c ft_printf_utils.c ft_printf_other_utils.c

OBJ = $(SRC:.c=.o)

CC = cc
C_FLAGS = -Wall -Wextra -Werror
AR = ar
AR_FLAGS = -rcs
RM = rm -rf

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJ)

all: $(OBJ) $(NAME)

re: fclean
	$(MAKE) $(TARGET)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean re
