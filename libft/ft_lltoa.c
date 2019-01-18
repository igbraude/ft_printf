/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lltoa.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 17:09:18 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/16 14:01:28 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_lltoa2(unsigned long long n, int i, char *j, long long nbr)
{
	int neg;

	neg = 1;
	if (nbr < 0)
	{
		neg = -neg;
		n = -nbr;
	}
	else
		n = nbr;
	while (n > 0)
	{
		j[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	if (neg == -1)
		j[i++] = '-';
	j[i] = '\0';
	return (ft_strrev(j));
}

char			*ft_lltoa(long long n)
{
	int					i;
	char				*j;
	unsigned long long	nbis;

	nbis = 0;
	j = (char *)malloc(sizeof(char) * (ft_len_ll(n, 10) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_lltoa2(nbis, i, j, n));
}
