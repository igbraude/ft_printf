/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_precision_fnct.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 18:06:46 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:53:20 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	last_value_of_size(t_funct *args, char *str)
{
	if ((int)ft_strlen(str) > args->precision)
	{
		if (args->precision2 == -1)
			args->size = args->size + args->precision + 1;
		if (args->precision2 > 0)
			args->size = args->size + args->precision;
	}
	if ((int)ft_strlen(str) > args->precision)
	{
		args->size = args->size - ((int)ft_strlen(str));
	}
}

void	ft_precision_print(t_funct *args, char *str)
{
	int i;

	i = 0;
	if (args->precision2 > 0)
	{
		if (str != NULL)
		{
			while (i < (args->precision - (int)ft_strlen(str)) &&
					(args->precision - (int)ft_strlen(str)) > 0)
			{
				ft_putchar('0');
				args->charprint += 1;
				i++;
			}
		}
	}
}

void	ft_size_print(t_funct *args, char *str)
{
	int i;

	i = 0;
	if (args->size2 > 0)
	{
		last_value_of_size(args, str);
		if (str != NULL)
		{
			if (args->flag_sharp == 1 && args->precision2 == -1)
				args->size += 1;
			while (i < args->size && args->size > 0)
			{
				ft_putchar(' ');
				args->charprint += 1;
				i++;
			}
		}
	}
}

void	ft_no_precision_n_size(t_funct *args, char *str)
{
	ft_putstr(str);
	args->charprint += ft_strlen(str);
}
