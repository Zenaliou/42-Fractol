/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 10:25:56 by marvin            #+#    #+#             */
/*   Updated: 2025/03/28 11:14:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

int	burning_ship(t_complex c, int max_iter)
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
		z.im = fabs(2 * z.re * z.im) + c.im;
		z.re = fabs(tmp);
		i++;
	}
	return (i);
}

/*
Formule : z.re(n+1) = z.er^2 - z.im^2 + c.re
Formule : z.im(n+1) = (2 * z.re * z.im) + c.im
*/