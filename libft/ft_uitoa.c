/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_uitoa.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 14:55:10 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/08 14:56:58 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_uitoa2(unsigned int n, int i, char *j)
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

char			*ft_uitoa(unsigned int n)
{
	int		i;
	char	*j;

	j = (char *)malloc(sizeof(char) * (ft_len_ui(n, 10) + 1));
	if (j == NULL)
		return (0);
	i = 0;
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	return (j = ft_uitoa2(n, i, j));
}
