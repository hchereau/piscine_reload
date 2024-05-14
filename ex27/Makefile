NAME := ft_display_file

### SRCS #######################################################################

SRCS += main.c
SRCS += print_file.c
SRCS +=

### HEADER #####################################################################

HEADER := display_file.h

### OBJS #######################################################################

PATH_OBJS = objs/

OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### COMPILE ####################################################################

CC := clang
CFLAGS += -Werror
CFLAGS += -Wall
CFLAGS += -Wextra

### RULE #######################################################################

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)

$(OBJS): $(PATH_OBJS)/%.o: %.c $(HEADER)
		mkdir -p $(PATH_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	$(RM) -r $(PATH_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE)

.PHONY: all clean fclean



