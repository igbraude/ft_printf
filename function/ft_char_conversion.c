/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_char_conversion.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 16:48:57 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 16:38:00 by igbraude    ###    #+. /#+    ###.fr     */
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
		ft_size_stuff(args, "c", 0);
	ft_putchar(c);
	if (args->flag_min == 1)
		ft_size_stuff(args, "c", 0);
	ft_charprint_add(args, "c");
	return (1);
}
