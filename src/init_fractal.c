/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:23:59 by marvin            #+#    #+#             */
/*   Updated: 2025/03/28 10:23:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void	init_graphics(t_fractal *fractal)
{
	fractal->mlx = mlx_init();
	if (fractal->mlx == NULL)
		return ;
	fractal->win = mlx_new_window(fractal->mlx, WIDTH, HEIGHT, "Fract-ol");
	if (!fractal->win)
		return ;
	fractal->img = mlx_new_image(fractal->mlx, WIDTH, HEIGHT);
	if (!fractal->img)
		return ;
	fractal->addr = mlx_get_data_addr(fractal->img, &fractal->bpp,
			&fractal->line_length, &fractal->endian);
	fractal->zoom = 1.0;
	fractal->offset_x = 0;
	fractal->offset_y = 0;
	fractal->max_iter = 50;
}

void	init_fractal_type(t_fractal *fractal, char *name)
{
	if (!ft_strcmp(name, "mandelbrot"))
		fractal->type = 1;
	else if (!ft_strcmp(name, "julia"))
	{
		fractal->type = 2;
		fractal->julia_re = 0.285;
		fractal->julia_im = 0.013;
	}
	else if (!ft_strcmp(name, "burning_ship"))
		fractal->type = 3;
	else
	{
		free_fractal(fractal);
		exit(ft_printf("Usage: ./fractol mandelbrot | julia | burning_ship\n"));
	}
}

void	init_fractal(t_fractal *fractal, char *name)
{
	init_graphics(fractal);
	if (!fractal->mlx)
		return ;
	init_fractal_type(fractal, name);
}
