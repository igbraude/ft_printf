/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base_maj.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 15:10:29 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/13 21:46:28 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_itoa_base_maj2(unsigned int n, int i, char *j, int base)
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

char			*ft_itoa_base_maj(unsigned int n, int base)
{
	int		i;
	char	*j;

	j = (char *)malloc(sizeof(char) * (ft_len_ui(n, base) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_itoa_base_maj2(n, i, j, base));
}
