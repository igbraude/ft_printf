/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_char_conversion.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 16:48:57 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 16:28:55 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		get_c_conv(t_funct *args)
{
	char c;

	c = va_arg(args->va, int);
	if (args->flag_min == 0)
		ft_size_print(args, "c");
	ft_putchar(c);
	if (args->flag_min == 1)
		ft_size_print(args, "c");
	args->charprint += 1;
	return (1);
}
