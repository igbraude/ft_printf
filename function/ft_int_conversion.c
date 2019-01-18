/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_int_conversion.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 13:45:36 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:36:57 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_d_conv(t_funct *args)
{
	int				n;
	unsigned int	n2;
	char			*str;

	n2 = 0;
	n = va_arg(args->va, int);
	n2 = ft_negative_int(n, n2, args);
	if (!(str = ft_uitoa(n2)))
		return (0);
	ft_go_to_check_flag(args, str);
	ft_strdel(&str);
	return (1);
}

int		get_i_conv(t_funct *args)
{
	int				n;
	unsigned int	n2;
	char			*str;

	n2 = 0;
	n = va_arg(args->va, int);
	n2 = ft_negative_int(n, n2, args);
	if (!(str = ft_uitoa(n2)))
		return (0);
	ft_go_to_check_flag(args, str);
	ft_strdel(&str);
	return (1);
}
