/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultoa.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 17:48:19 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/16 16:39:40 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_ultoa2(unsigned long n, int i, char *j)
{
	while (n > 0)
	{
		j[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	j[i] = '\0';
	return (ft_strrev(j));
}

char			*ft_ultoa(unsigned long n)
{
	int		i;
	char	*j;

	j = (char *)malloc(sizeof(char) * (ft_len_ul(n, 10) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_ultoa2(n, i, j));
}
