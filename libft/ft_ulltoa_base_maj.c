/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ulltoa_base_maj.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 18:05:08 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/16 17:13:06 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_ulltoa_base_maj2(unsigned long long n, int i, char *j,
		int base)
{
	while (n > 0)
	{
		if (n % base < 10)
		{
			j[i] = n % base + 48;
			n = n / base;
			i++;
		}
		else
		{
			j[i] = n % base + 55;
			n = n / base;
			i++;
		}
	}
	j[i] = '\0';
	return (ft_strrev(j));
}

char			*ft_ulltoa_base_maj(unsigned long long n, int base)
{
	int		i;
	char	*j;

	j = (char *)malloc(sizeof(char) * (ft_len_ull(n, base) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_ulltoa_base_maj2(n, i, j, base));
}
