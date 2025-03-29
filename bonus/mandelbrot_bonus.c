/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclee <niclee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:47:03 by niclee            #+#    #+#             */
/*   Updated: 2025/03/22 11:47:03 by niclee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	mandelbrot(t_complex c, int max_iter)
{
	t_complex	z;
	int			i;
	double		tmp;

	z.re = 0;
	z.im = 0;
	i = 0;
	while (i < max_iter && (z.re * z.re + z.im * z.im) <= 4.0)
	{
		tmp = z.re * z.re - z.im * z.im + c.re;
		z.im = 2 * z.re * z.im + c.im;
		z.re = tmp;
		i++;
	}
	return (i);
}

/*
Formule : z.re(n+1) = z.re(n)² - z.im(n)² + c.re
Formule : z.im(n+1) = 2 * z.re(n) * z.im(n) + c.im
*/