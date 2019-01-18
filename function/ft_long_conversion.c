/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_long_conversion.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 17:18:56 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 19:04:16 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_ld_conv(t_funct *args)
{
	long			n;
	unsigned long	n2;
	char			*str;

	n2 = 0;
	n = va_arg(args->va, long);
	n2 = ft_negative_long(n, n2, args);
	if (!(str = ft_ultoa(n2)))
		return (0);
	ft_go_to_check_flag(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lu_conv(t_funct *args)
{
	unsigned long	i;
	char			*str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa(i)))
		return (0);
	ft_go_to_check_flag_unsigned(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lo_conv(t_funct *args)
{
	unsigned long	i;
	char			*str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_min(i, 8)))
		return (0);
	ft_go_to_check_flag_o(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lx_conv(t_funct *args)
{
	unsigned long	i;
	char			*str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_min(i, 16)))
		return (0);
	parsing_size_n_precision_for_x(args, str);
	ft_go_to_check_flag_x(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_lx_maj_conv(t_funct *args)
{
	unsigned long	i;
	char			*str;

	i = va_arg(args->va, unsigned long);
	if (!(str = ft_ultoa_base_maj(i, 16)))
		return (0);
	parsing_size_n_precision_for_x(args, str);
	ft_go_to_check_flag_x_maj(args, str);
	ft_strdel(&str);
	return (1);
}
