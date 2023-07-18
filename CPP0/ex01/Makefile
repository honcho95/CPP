CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
NAME		= ./phonebook

INCS		= Contact.hpp Phonebook.hpp

SRCS		= Phonebook.cpp Contact.cpp main.cpp

OBJS		= $(SRCS:.cpp=.o)

all			: $(NAME)

$(NAME)		: $(OBJS) $(INCS)
			@$(CC) $(OBJS) -o $(NAME)

clean		:
			@$(RM) $(OBJS)

fclean		: clean
			@$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re