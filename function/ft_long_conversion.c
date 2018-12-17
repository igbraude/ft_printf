/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_long_conversion.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 17:18:56 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 19:02:46 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_ld_conv(t_funct *args)
{
	long i;
	unsigned long ui;
	char *str;

	i = va_arg(args->va, long);
	if (i < 0)
	{
		if (args->size > 0 && args->precision > 0 && args->flag_aq_aq == 0)
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
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		ui = -i;
		args->charprint += 1;
	}
	else
		ui = i;
	if (i < 0)
		args->flag_add = 0;
	if (!(str = ft_ultoa(ui)))
		return (0);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (i < 0)
		ft_putchar ('-');
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lu_conv(t_funct *args)
{
	unsigned long i;
	char *str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa(i)))
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_strdel(&str);
	ft_charprint_add(args, str);
	return (1);
}

int		get_lo_conv(t_funct *args)
{
	unsigned long i;
	char *str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_min(i, 8)))
		return (0);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lx_conv(t_funct *args)
{
	unsigned long i;
	char *str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_min(i, 16)))
		return (0);
	if (args->flag_sharp == 1 && args->precision <= 0)
		args->size -= 1;
	if (args->flag_sharp == 1)
		args->precision += 1;
	if (args->flag_sharp == 1 && args->precision > 0 && str[0] != '0')
		args->size -= 2;
	if (args->flag_sharp == 1 && args->flag_0 == 1 && str[0] != '0')
		args->precision -= 2;
	if (args->flag_sharp && str[0] == '0' && args->size > 0)
		args->size += 2;

	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lX_conv(t_funct *args)
{
	unsigned long i;
	char *str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_maj(i, 16)))
		return (0);
	if (args->flag_sharp == 1 && args->precision <= 0)
		args->size -= 1;
	if (args->flag_sharp == 1)
		args->precision += 1;
	if (args->flag_sharp == 1 && args->precision > 0 && str[0] != '0')
		args->size -= 2;
	if (args->flag_sharp == 1 && args->flag_0 == 1 && str[0] != '0')
		args->precision -= 2;
	if (args->flag_sharp && str[0] == '0' && args->size > 0)
		args->size += 2;

	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}
