/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_len_fnbr.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/10 14:37:19 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/14 16:59:02 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_d2(double nbr, int precision, double div)
{
	if (precision == 0)
	{
		return (ft_len_ll((long long)nbr, 10));
	}
	if (precision == -1)
	{
		nbr = nbr / div;
		return (ft_len_ll((long long)nbr, 10) + 1);
	}
	else if (precision > 0)
	{
		div = 0.1;
		while (precision > 1)
		{
			div = div * 0.1;
			precision--;
		}
		nbr = nbr / div;
		return (ft_len_ll((long long)nbr, 10) + 1);
	}
	return (0);
}

size_t			ft_len_d(double nbr, int precision)
{
	double div;

	div = 0.000001;
	if (nbr == 0)
		return (2);
	if (nbr > 1 || nbr < -1)
	{
		return (ft_len_d2(nbr, precision, div));
	}
	else
	{
		if (nbr > 0)
			return (2 + precision);
		else
			return (3 + precision);
	}
	return (0);
}

static size_t	ft_len_ld2(long double nbr, int precision, long double div)
{
	if (precision == 0)
	{
		return (ft_len_ll((long long)nbr, 10));
	}
	if (precision == -1)
	{
		nbr = nbr / div;
		return (ft_len_ll((long long)nbr, 10) + 1);
	}
	else if (precision > 0)
	{
		div = 0.1;
		while (precision > 1)
		{
			div = div * 0.1;
			precision--;
		}
		nbr = nbr / div;
		return (ft_len_ll((long long)nbr, 10) + 1);
	}
	return (0);
}

size_t			ft_len_ld(long double nbr, int precision)
{
	long double div;

	div = 0.000001;
	if (nbr == 0)
		return (2 + precision);
	if (nbr > 1 || nbr < -1)
	{
		return (ft_len_ld2(nbr, precision, div));
	}
	else
	{
		if (nbr > 0)
			return (2 + precision);
		else
			return (3 + precision);
	}
	return (0);
}
