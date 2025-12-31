NAME		:= libft.a

CC			:= cc
CC_FLAGS	:= -Wall -Wextra -Werror
AR_FLAGS	:= -r -c -s
INCS		:= -I. -I$(PRINTF_DIR) -I$(GNL_DIR)

PRINTF_DIR	:= ft_printf/
GNL_DIR		:= gnl/
OBJS_DIR	:= objs/

CHAR_DIR	:= srcs/char/
FD_DIR		:= srcs/fd/
LIST_DIR	:= srcs/list/
MEM_DIR		:= srcs/mem/
MISC_DIR	:= srcs/misc/
STR_DIR		:= srcs/str/

GNL_SRCS	:= $(addprefix $(GNL_DIR),	get_next_line_bonus.c \
										get_next_line_utils.c \
										)

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
				$(STR_SRCS) \
				$(GNL_SRCS)

OBJS		:= $(SRCS:%.c=$(OBJS_DIR)%.o)

RED			:= '\033[0;31m'
RED_BOLD	:= '\033[1;31m'
WHITE		:= '\033[0;37m'
WHITE_BOLD	:= '\033[1;37m'
GREEN		:= '\033[0;32m'
GREEN_BOLD	:= '\033[1;32m'

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(PRINTF_DIR)
	@cp $(PRINTF_DIR)libftprintf.a $(NAME)
	@ar -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)libft.a created!$(WHITE)"

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CC_FLAGS) $(INCS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@make clean -C $(PRINTF_DIR)
	@echo "$(RED)object files deleted!$(WHITE)"

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(PRINTF_DIR)
	@echo "$(RED)$(NAME) and ft_printf.a deleted$(WHITE)"

re: fclean all

.PHONY: all clean fclean re
