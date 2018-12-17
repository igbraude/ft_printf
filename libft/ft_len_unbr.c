/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_len_unbr.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/10 14:25:47 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/10 14:33:13 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_len_ui(unsigned int nbr, int base)
{
	size_t i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base;
	}
	return (i);
}

size_t		ft_len_ul(unsigned long nbr, int base)
{
	size_t i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base;
	}
	return (i);
}

size_t		ft_len_ull(unsigned long long nbr, int base)
{
	size_t i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base;
	}
	return (i);
}
