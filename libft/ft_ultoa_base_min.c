/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultoa_base_min.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 16:01:32 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/10 14:34:14 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_ultoa_base_min2(unsigned long n, int i, char *j, int base)
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
			j[i] = n % base + 87;
			n = n / base;
			i++;
		}
	}
	j[i] = '\0';
	return (ft_strrev(j));
}

char			*ft_ultoa_base_min(unsigned long n, int base)
{
	int		i;
	char	*j;

	j = (char *)malloc(sizeof(char) * (ft_len_ul(n, base) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_ultoa_base_min2(n, i, j, base));
}
