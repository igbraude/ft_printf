/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string_conversion.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 13:53:39 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 18:36:27 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int		get_s_conv(t_funct *args)
{
	int i;
	char *str;
	char *str2;

	i = 0;
	str = va_arg(args->va, char *);
	if (str == NULL)
		str = "(null)";
	if (args->precision > (int)ft_strlen(str))
	{
		args->size -= ft_strlen(str);
	}
	else
	{
		if (args->precision > 0)
			args->size -= args->precision;
	}
	str2 = ft_strsub(str, 0, args->precision);
	if (args->flag_min == 0)
		ft_size_stuff(args, str2, 0);
	ft_putstr(str2);
	if (args->flag_min == 1)
		ft_size_stuff(args, str2, 0);
	ft_charprint_add(args, str);
	ft_strdel(&str2);
	return (1);
}