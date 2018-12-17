/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_uint_conversion.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 14:46:35 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/16 17:18:06 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_u_conv(t_funct *args)
{
	unsigned int i;
	char *str;


	i = va_arg(args->va, unsigned int);
	if (!(str = ft_uitoa(i)))
		return (0);
	if (str[0] == '0' && args->size > 0)
		args->size += 1;
	if (str[0] == '0' && args->precision > 0)
		args->precision += 1;
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str);
	ft_precision_stuff(args, str);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);

}

int		get_o_conv(t_funct *args)
{
	unsigned int i;
	char *str;


	i = va_arg(args->va, unsigned int);
	if (!(str = ft_itoa_base_min(i, 8)))
		return (0);
	if (str[0] == '0' && args->size > 0)
		args->size += 1;
	if (str[0] == '0' && args->precision > 0)
		args->precision += 1;
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_stuff(args, str);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args,str);
	ft_precision_stuff(args, str);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_x_conv(t_funct *args)
{
	unsigned int i;
	char *str;


	i = va_arg(args->va, unsigned int);
	if (!(str = ft_itoa_base_min(i, 16)))
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
		ft_size_stuff(args, str);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_stuff(args, str);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_X_conv(t_funct *args)
{
	unsigned int i;
	char *str;


	i = va_arg(args->va, unsigned int);
	if (!(str = ft_itoa_base_maj(i, 16)))
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
		ft_size_stuff(args, str);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_stuff(args, str);
	if (args->precision != 0)
		ft_putstr(str);
	if (args->flag_min == 1)
		ft_size_stuff(args, str);
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_p_conv(t_funct *args)
{
	unsigned long i;
	char *str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_min(i, 16)))
		return (0);
	ft_putstr("0x");
	ft_putstr(str);
	args->charprint += 2;
	ft_charprint_add(args, str);
	ft_strdel(&str);
	return (1);

}
