NAME = nwt

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRC =	main.cpp\
		Fixed.cpp\

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean: 
		$(RM) ${OBJS}

fclean:clean
		$(RM) $(NAME)

re:fclean all

.PHONY: all clean re