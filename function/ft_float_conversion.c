/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_float_conversion.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/10 14:13:08 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/15 19:01:17 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_lf_conv(t_funct *args)
{

	double i;
	char *str;

	i = va_arg(args->va, double);
	if (i < 0)
	{
		if (args->size > 0 && args->precision > 0 && args->flag_aq_aq == 0 && args->flag_add == 0)
		{
			args->size -= 1;
		}
		if (args->size > 0 && args->precision == -1 && args->flag_min == 1 &&
				args->flag_add == 0 && args->flag_aq_aq == 0)
			args->size -= 1;
		if (args->size > 0 && args->precision == -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0)
			args->size -= 1;
		if (args->flag_0 == 1 && args->flag_aq_aq == 0 &&
				args->precision > 0 && args->size == -1 &&
				args->flag_add == 0 && args->flag_min == 0 && args->swap == 1)
			args->precision -= 1;
		if (args->size > 0 && args->precision <= -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0 && args->flag_sharp == 1)
		{
			args->size -= 1;
		}
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		args->charprint += 1;
	}
	if (args->flag_sharp == 1)
		args->precision += 1;
	if (args->precision <= -1)
		if (!(str = ft_dtoa(i, 6)))
			return (0);
	if (args->precision > -1)
		if (!(str = ft_dtoa(i, args->precision)))
			return (0);
	if (i < 0)
		str++;
	if (args->size > 0 && args->precision < 0)
		args->size += 1;
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (i < 0)
		ft_putchar ('-');
	ft_putstr(str);
	if (args->precision == 0)
		ft_putchar ('.');
	if (args->flag_min == 1)
		ft_size_print(args, str);
	ft_strdel(&str);
	return (1);
	return (1);
}

int		get_Lf_conv(t_funct *args)
{

	long double	i;
	char		*str;

	i = va_arg(args->va, long double);
	if (i < 0)
	{
		if (args->size > 0 && args->precision > 0 && args->flag_aq_aq == 0 && args->flag_add == 0)
		{
			args->size -= 1;
		}
		if (args->size > 0 && args->precision == -1 && args->flag_min == 1 &&
				args->flag_add == 0 && args->flag_aq_aq == 0)
			args->size -= 1;
		if (args->size > 0 && args->precision == -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0)
			args->size -= 1;
		if (args->flag_0 == 1 && args->flag_aq_aq == 0 &&
				args->precision > 0 && args->size == -1 &&
				args->flag_add == 0 && args->flag_min == 0 && args->swap == 1)
			args->precision -= 1;
		if (args->size > 0 && args->precision <= -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0 && args->flag_sharp == 1)
		{
			args->size -= 1;
		}
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		args->charprint += 1;
	}
	if (args->flag_sharp == 1)
		args->precision += 1;

	if (args->precision <= -1)
		if (!(str = ft_ldtoa(i, 6)))
			return (0);
	if (args->precision > -1)
		if (!(str = ft_ldtoa(i, args->precision)))
			return (0);
	if (i < 0)
		str++;
	if (args->size > 0 && args->precision < 0)
		args->size += 1;
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (i < 0)
		ft_putchar ('-');
	ft_putstr(str);
	if (args->precision == 0)
		ft_putchar ('.');
	if (args->flag_min == 1)
		ft_size_print(args, str);
	ft_strdel(&str);
	return (1);
	return (1);
}

int		get_f_conv(t_funct *args)
{
	double i;
	char *str;

	i = va_arg(args->va, double);
	if (i < 0)
	{
		if (args->size > 0 && args->precision > 0 && args->flag_aq_aq == 0 && args->flag_add == 0)
		{
			args->size -= 1;
		}
		if (args->size > 0 && args->precision == -1 && args->flag_min == 1 &&
				args->flag_add == 0 && args->flag_aq_aq == 0)
			args->size -= 1;
		if (args->size > 0 && args->precision == -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0)
			args->size -= 1;
		if (args->flag_0 == 1 && args->flag_aq_aq == 0 &&
				args->precision > 0 && args->size == -1 &&
				args->flag_add == 0 && args->flag_min == 0 && args->swap == 1)
			args->precision -= 1;
		if (args->size > 0 && args->precision <= -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0 && args->flag_sharp == 1)
		{
			args->size -= 1;
		}
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		args->charprint += 1;
	}
	if (args->flag_sharp == 1)
		args->precision += 1;
	if (args->precision2 == -1)
		if (!(str = ft_dtoa(i, 6)))
			return (0);
	if (args->precision2 > -1)
		if (!(str = ft_dtoa(i, args->precision2)))
			return (0);
	if (i < 0)
		str++;
	if (args->size2 > 0 && args->precision2 < 0)
		args->size += 1;
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->precision2 != -1)
	{
		if (args->flag_sharp == 1 && args->size > (int)ft_len_ld(i,args->precision2))
			args->size -= 1;
	}
	else if (args->precision2 == -1)
	{
		if (args->flag_sharp == 1 && args->size > (int)ft_len_ld(i, 6))
			args->size -= 1;
	}
	if (i < 0)
		ft_putchar ('-');
	ft_putstr(str);
	if (args->precision2 == 0)
		ft_putchar ('.');
	if (args->flag_min == 1)
		ft_size_print(args, str);
	ft_strdel(&str);
	return (1);
}
