/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_dtoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/10 15:46:06 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/11 17:49:34 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_dtoa2(char *str, long long n, int size[2], double nb)
{
	str[size[0]] = '\0';
	size[0]--;
	while (n > 0)
	{
		str[size[0]] = n % 10 + 48;
		n = n / 10;
		size[0]--;
		if (size[0] == size[1])
		{
			str[size[0]] = '.';
			size[0]--;
		}
	}
	while (size[0] > 1)
	{
		if (nb < 0 && nb > -1 && size[0] == 2)
			break ;
		str[size[0]] = '0';
		size[0]--;
	}
	return (str);
}

static void		ft_initdtoa(char **str, long long *n, double nbr, double nb)
{
	if (nbr < 0)
	{
		*n = -(long long)nbr;
		nbr = nbr / 0.1;
		if ((long long)nbr % 10 + 1 >= 5 || (long long)nbr % 10 <= -5)
		{
			*n += 1;
		}
		*str[0] = '-';
	}
	else
	{
		*n = (long long)nbr;
		nbr = nbr / 0.1;
		if ((long long)nbr % 10 + 1 >= 5 || (long long)nbr % 10 + 1 <= -5)
			*n += 1;
		if (nb < 1)
		{
			*str[0] = '0';
		}
	}
}

static char		*ft_dtoa0(char *str, int precision)
{
	int i;
	int j;

	j = 0;
	i = 1;
	str[0] = '0';
	if (precision > 0)
	{
		str[1] = '.';
		i++;
	}
	while (j < precision)
	{
		str[i] = '0';
		j++;
		i++;
	}
	return (str);
}

static char		*ft_initdtoa0(char *str, double nb)
{
	if (nb > -1 && nb < 1)
	{
		if (nb < 0)
		{
			str[1] = '0';
			str[2] = '.';
		}
		if (nb > 0)
		{
			str[0] = '0';
			str[1] = '.';
		}
	}
	return (str);
}

char			*ft_dtoa(double nbr, int precision)
{
	char		*str;
	long long	n;
	double		nb;
	int			size[2];

	nb = nbr;
	size[1] = ft_len_ll((long long)nbr, 10);
	size[0] = ft_len_d(nbr, precision);
	if (!(str = (char *)malloc(sizeof(char) * (ft_len_d(nbr, 10) + precision) + 1)))
			return (NULL);
	if (nbr == 0)
		return (ft_dtoa0(str, precision));
	while (precision > 0)
	{
		nbr = nbr / 0.1;
		precision--;
	}
	ft_initdtoa(&str, &n, nbr, nb);
	str = ft_initdtoa0(str, nb);
	return (ft_dtoa2(str, n, size, nb));
}
