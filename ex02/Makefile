NAME = fixedNumber2 

CPP = c++

CFLAGS = -Wall -Wextra -Werror

VERSION = -std=c++98

SRCS = main.cpp\
		Fixed.cpp

OBJS = $(SRCS:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(VERSION) $(OBJS) -o $@

%.o: %.cpp
	$(CPP) $(CFLAGS) $(VERSION) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
