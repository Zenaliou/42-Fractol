/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niclee <niclee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 11:46:47 by niclee            #+#    #+#             */
/*   Updated: 2025/03/22 11:46:47 by niclee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	julia(t_complex z, t_complex c, int max_iter)
{
	int		iter;
	double	tmp;

	iter = 0;
	while (iter < max_iter && (z.re * z.re + z.im * z.im) <= 4)
	{
		tmp = z.re * z.re - z.im * z.im + c.re;
		z.im = 2 * z.re * z.im + c.im;
		z.re = tmp;
		iter++;
	}
	return (iter);
}

/*
Formule : z.re(n+1) = z.re(n)^2 - z.im(n)^2 + c.re
Formule : z.im(n+1) = 2 * z.re(n) * z.im(n) + c.im
*/