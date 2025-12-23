NAME		:= libft.a

CHAR_DIR	:= srcs/char/
FD_DIR		:= srcs/fd/
LIST_DIR	:= srcs/list/
MEM_DIR		:= srcs/mem/
MISC_DIR	:= srcs/misc/
STR_DIR		:= srcs/str/
OBJS_DIR	:= objs/

CHAR_SRCS	:= $(addprefix $(CHAR_DIR),	ft_isalnum.c \
										ft_isalpha.c \
										ft_isascii.c \
										ft_isdigit.c \
										ft_isprint.c \
										ft_isspace.c \
										ft_tolower.c \
										ft_toupper.c \
										)
FD_SRCS		:= $(addprefix $(FD_DIR),	ft_putchar_fd.c \
										ft_putendl_fd.c \
										ft_putnbr_fd.c \
										ft_putstr_fd.c \
										)
LIST_SRCS	:= $(addprefix $(LIST_DIR),	ft_lstadd_back.c \
										ft_lstadd_front.c \
										ft_lstclear.c \
										ft_lstdelone.c \
										ft_lstiter.c \
										ft_lstlast.c \
										ft_lstmap.c \
										ft_lstnew.c \
										ft_lstsize.c \
										)
MEM_SRCS	:= $(addprefix $(MEM_DIR),	ft_bzero.c \
										ft_calloc.c \
										ft_memchr.c \
										ft_memcmp.c \
										ft_memcpy.c \
										ft_memmove.c \
										ft_memset.c \
										)
MISC_SRCS	:= $(addprefix $(MISC_DIR),	ft_atoi.c \
										)
STR_SRCS	:= $(addprefix $(STR_DIR),	ft_itoa.c \
										ft_split.c \
										ft_strchr.c \
										ft_strdup.c \
										ft_striteri.c \
										ft_strjoin.c \
										ft_strlcat.c \
										ft_strlcpy.c \
										ft_strlen.c \
										ft_strmapi.c \
										ft_strncmp.c \
										ft_strnstr.c \
										ft_strrchr.c \
										ft_strtrim.c \
										ft_substr.c \
										)

SRCS		:=	$(CHAR_SRCS) \
				$(FD_SRCS) \
				$(LIST_SRCS) \
				$(MEM_SRCS) \
				$(MISC_SRCS) \
				$(STR_SRCS)

OBJS		:= $(SRCS:%.c=$(OBJS_DIR)%.o)

CC_FLAGS	:= -Wall -Wextra -Werror

AR_FLAGS	:= -r -c -s

RED			:= '\033[0;31m'
RED_BOLD	:= '\033[1;31m'
WHITE		:= '\033[0;37m'
WHITE_BOLD	:= '\033[1;37m'
GREEN		:= '\033[0;32m'
GREEN_BOLD	:= '\033[1;32m'

all: $(NAME)

$(NAME): $(OBJS)
	@ar $(AR_FLAGS) $@ $^
	@echo $(GREEN)"created libft.a!"$(WHITE)

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	@cc $(CC_FLAGS) -c $< -o $@

clean:
	@rm -r -f $(OBJS_DIR)
	@echo $(RED)"deleting obj files..."$(WHITE)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"deleting archive file!"$(WHITE)

re: fclean all

.PHONY: all clean fclean re
