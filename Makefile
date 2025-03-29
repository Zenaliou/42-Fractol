MLX_DIR = minilibx-linux
MLX = $(MLX_DIR)/libmlx.a

NAME 	= 	fractol
SRCS 	= 	src/fractol.c src/mandelbrot.c src/julia.c \
       		src/render.c src/events.c src/utils.c src/hooks.c \
	   		src/color.c src/burning_ship.c src/init_fractal.c

BONUS	=	bonus/fractol_bonus.c bonus/mandelbrot_bonus.c bonus/julia_bonus.c \
       		bonus/render_bonus.c bonus/events_bonus.c bonus/utils_bonus.c bonus/hooks_bonus.c \
	   		bonus/color_bonus.c bonus/burning_ship_bonus.c bonus/init_fractal_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS	= $(BONUS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -Iincludes -O2 -O3 -g3
LIBS = -Lmlx -lmlx -framework OpenGL -framework AppKit

INCLUDES = -I includes -I libft -I ft_printf -I mlx

LIBS = -L$(MLX_DIR) -lmlx -lX11 -lXext -lm

LIBFT = libft/libft.a

FT_PRINTF = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF) $(MLX) $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(FT_PRINTF) $(LIBS) -o $(NAME)

$(MLX):
	make -C $(MLX_DIR)

$(LIBFT):
	make -C libft

$(FT_PRINTF):
	make -C ft_printf

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	make -C libft clean
	make -C ft_printf clean
	make -C minilibx-linux clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean
	make -C ft_printf fclean
	make -C minilibx-linux fclean

re: fclean all

.PHONY: all clean fclean re
