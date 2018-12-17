/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_len_nbr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 14:25:51 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/14 17:05:03 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_len_i(int nbr, int base)
{
	int i;

	i = 0;
	if (nbr < 0)
		i++;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base;
	}
	return (i);
}

size_t		ft_len_l(long nbr, int base)
{
	int i;

	i = 0;
	if (nbr < 0)
		i++;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base;
	}
	return (i);
}

size_t		ft_len_ll(long long nbr, int base)
{
	int i;

	i = 0;
	if (nbr < 0)
		i++;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base;
	}
	return (i);
}
