/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 17:40:25 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/08 14:33:24 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_itoa2(long n, int i, char *j)
{
	int neg;

	neg = 1;
	if (n < 0)
	{
		neg = -neg;
		n = -n;
	}
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

char			*ft_itoa(int n)
{
	int		i;
	char	*j;
	long	nbis;

	nbis = n;
	j = (char *)malloc(sizeof(char) * (ft_len_i(n, 10) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_itoa2(n, i, j));
}
