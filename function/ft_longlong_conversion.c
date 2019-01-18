/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_longlong_conversion.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 17:22:42 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 19:04:59 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_lld_conv(t_funct *args)
{
	long long			n;
	unsigned long long	n2;
	char				*str;

	n = va_arg(args->va, long long);
	n2 = 0;
	n2 = ft_negative_long_long(n, n2, args);
	if (!(str = ft_ulltoa(n2)))
		return (0);
	ft_go_to_check_flag(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_llu_conv(t_funct *args)
{
	unsigned long long	i;
	char				*str;

	i = va_arg(args->va, unsigned long long);
	if (!(str = ft_ulltoa(i)))
		return (0);
	ft_go_to_check_flag_unsigned(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_llo_conv(t_funct *args)
{
	unsigned long long	i;
	char				*str;

	i = va_arg(args->va, unsigned long long);
	if (!(str = ft_ulltoa_base_min(i, 8)))
		return (0);
	ft_go_to_check_flag_o(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_llx_conv(t_funct *args)
{
	unsigned long long	i;
	char				*str;

	i = va_arg(args->va, unsigned long long);
	if (!(str = ft_ulltoa_base_min(i, 16)))
		return (0);
	parsing_size_n_precision_for_x(args, str);
	ft_go_to_check_flag_x(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_llx_maj_conv(t_funct *args)
{
	unsigned long long	i;
	char				*str;

	i = va_arg(args->va, unsigned long long);
	if (!(str = ft_ulltoa_base_maj(i, 16)))
		return (0);
	parsing_size_n_precision_for_x(args, str);
	ft_go_to_check_flag_x_maj(args, str);
	ft_strdel(&str);
	return (1);
}
