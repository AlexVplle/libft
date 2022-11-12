CC := gcc
CFLAGS := -Wall -Wextra -Werror
FILE_EXTENSION := .c

NAME := libft.a

SRC_DIRS := .
BUILD_DIR := ./build

SRCS := $(shell find $(SRC_DIRS) -name '*$(FILE_EXTENSION)')
SRCS_BONUS := $(shell find $(SRC_DIRS) -name '*_bonus$(FILE_EXTENSION)')
OBJS := $(SRCS:$(FILE_EXTENSION)=.o)
OBJS_BONUS := $(SRCS_BONUS:$(FILE_EXTENSION)=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus : $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

exec: $(OBJS)
	$(CC) $(CFLAGS) -o main -lbsd $(OBJS) && ./main

.PHONY: all $(NAME) clean fclean re bonus
