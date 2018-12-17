/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_precision_fnct.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 18:06:46 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/16 17:16:28 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_precision_print(t_funct *args, char *str)
{	int i;

	i = 0;
	if (str != NULL)
	{
		while (i < (args->precision - (int)ft_strlen(str)) &&
				(args->precision - (int)ft_strlen(str)) > 0)
		{
			ft_putchar('0');
			i++;
		}
	}
/*	else if (str == NULL)
	{
		while (i < (args->precision - (int)ft_len_i(nbr, 10)) &&
				(args->precision - (int)ft_len_i(nbr, 10)) > 0)
		{
			ft_putchar('0');
			i++;
		}
	}*/
}

void	ft_size_print(t_funct *args, char *str)
{
/*	int i;

	i = 0;
	if (str != NULL)
	{
		if ((int)ft_strlen(str) > args->precision)
		{

			if (args->precision == -1)
				args->size = args->size + args->precision + 1;
			if (args->precision > 0)
				args->size = args->size + args->precision;
		}
		if ((int)ft_strlen(str) > args->precision)
		{
			args->size = args->size - ((int)ft_strlen(str));
		}
	}
	else if (str == NULL)
	{
		if ((int)ft_len_i(nbr, 10) > args->precision)
		{
			if (args->precision == -1)
				args->size = args->size + args->precision + 1;
			if (args->precision > 0)
				args->size = args->size + args->precision;
		}
		if ((int)ft_len_i(nbr, 10) > args->precision)
		{
			args->size = args->size - ((int)ft_len_i(nbr, 10));
		}
	}
	while (i < args->size && args->size > 0)
	{
		ft_putchar(' ');
		i++;
	}*/
}

void	ft_no_precision_n_size(t_funct *args, char *str)
{
	ft_putstr(str);
	args->charprint += ft_strlen(str);
}
