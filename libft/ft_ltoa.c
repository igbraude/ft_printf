/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ltoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 17:06:49 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/16 15:24:00 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_ltoa2(long n, unsigned long nbis, int i, char *j)
{
	int			neg;

	neg = 1;
	if (n < 0)
	{
		neg = -neg;
		nbis = -n;
	}
	else
		nbis = n;
	while (nbis > 0)
	{
		j[i] = nbis % 10 + 48;
		nbis = nbis / 10;
		i++;
	}
	if (neg == -1)
	{
		j[i] = '-';
		i++;
	}
	j[i] = '\0';
	return (ft_strrev(j));
}

char			*ft_ltoa(long n)
{
	int				i;
	char			*j;
	unsigned long	nbis;

	nbis = n;
	j = (char *)malloc(sizeof(char) * (ft_len_l(n, 10) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_ltoa2(n, nbis, i, j));
}
