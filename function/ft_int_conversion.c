/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_conversion.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 13:45:36 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 18:42:35 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_d_conv(t_funct *args)
{
	int n;
	unsigned int n2;
	char *str;

	n = va_arg(args->va, int);
	if (n < 0)
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
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		n2 = -n;
		args->charprint += 1;
	}
	else
		n2 = n;
	if(!(str = ft_uitoa(n2)))
		return (0);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	if (n < 0)
		ft_putchar ('-');
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_i_conv(t_funct *args)
{
	int n;
	unsigned int n2;
	char *str;

	n = va_arg(args->va, int);
	if (n < 0)
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
		n2 = -n;
		args->charprint += 1;
	}
	else
		n2 = n;
	if(!(str = ft_uitoa(n2)))
		return (0);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str, 0);
	if (n < 0)
		ft_putchar ('-');
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	ft_precision_stuff(args, str, 0);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);

}
