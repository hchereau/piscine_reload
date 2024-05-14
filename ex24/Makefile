NAME := libft.a

### SRCS #######################################################################

PATH_SRCS := srcs/

SRCS += ft_strlen.c
SRCS += ft_strcmp.c
SRCS += ft_putchar.c
SRCS += ft_putstr.c
SRCS += ft_swap.c

vpath %.c $(PATH_SRCS)

### HEADER #####################################################################

INCLUDES_LIBFT = includes/

INCLUDES += -I $(INCLUDES_LIBFT)

HEADER += $(INCLUDES_LIBFT)/libft.h

### OBJS #######################################################################

PATH_OBJS = objs/

OBJS = $(patsubst %.c, $(PATH_OBJS)/%.o, $(SRCS))

### COMPILATION ################################################################

CC := clang
CFLAGS += -Werror
CFLAGS += -Wextra
CFLAGS += -Wall

AR := ar

ifeq ($(debug), true)
		CFLAGS += -fsanitize=address,undefined -g3
endif

### RULE #######################################################################

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) rcs $@ $^

$(OBJS): $(PATH_OBJS)/%.o: %.c $(HEADER)
		mkdir -p $(PATH_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
		$(RM) -r $(PATH_OBJS)
		$(MAKE) -C $(TEST_FOLDER) clean

fclean: clean
		$(RM) $(NAME)

re: fclean
		$(MAKE)

.PHONY: all bonus clean fclean re
.SILENT: test
