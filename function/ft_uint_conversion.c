/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_uint_conversion.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 14:46:35 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 19:04:45 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_u_conv(t_funct *args)
{
	unsigned int	i;
	char			*str;

	i = va_arg(args->va, unsigned int);
	if (!(str = ft_uitoa(i)))
		return (0);
	ft_go_to_check_flag_unsigned(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_o_conv(t_funct *args)
{
	unsigned int	i;
	char			*str;

	i = va_arg(args->va, unsigned int);
	if (!(str = ft_itoa_base_min(i, 8)))
		return (0);
	ft_go_to_check_flag_o(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_x_conv(t_funct *args)
{
	unsigned int	i;
	char			*str;

	i = va_arg(args->va, unsigned int);
	if (!(str = ft_itoa_base_min(i, 16)))
		return (0);
	parsing_size_n_precision_for_x(args, str);
	ft_go_to_check_flag_x(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_x_maj_conv(t_funct *args)
{
	unsigned int	i;
	char			*str;

	i = va_arg(args->va, unsigned int);
	if (!(str = ft_itoa_base_maj(i, 16)))
		return (0);
	parsing_size_n_precision_for_x(args, str);
	ft_go_to_check_flag_x_maj(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_p_conv(t_funct *args)
{
	unsigned long	i;
	char			*str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_min(i, 16)))
		return (0);
	ft_putstr("0x");
	args->charprint += 2;
	ft_putstr(str);
	args->charprint += (int)ft_strlen(str);
	ft_strdel(&str);
	return (1);
}
