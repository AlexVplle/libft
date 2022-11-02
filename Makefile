CC := gcc
CFLAGS := -Wall -Wextra -Werror
FILE_EXTENSION := .c

NAME := libft.a

SRC_DIRS := .
BUILD_DIR := ./build

SRCS := $(shell find $(SRC_DIRS) -name '*$(FILE_EXTENSION)')
OBJS := $(SRCS:$(FILE_EXTENSION)=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	# $(CC) $(CFLAGS) -o main $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

.PHONY: all $(NAME) clean fclean re
