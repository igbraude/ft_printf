/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string_conversion.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 13:53:39 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:55:10 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int		get_s_conv(t_funct *args)
{
	int		i;
	char	*str;
	char	*str2;

	i = 0;
	str = va_arg(args->va, char *);
	if (str == NULL)
	{
		str2 = ft_strnew(6);
		str2 = "(null)";
	}
	else
	{
		str2 = ft_strnew(ft_strlen(str));
		str2 = str;
	}
	if (args->precision2 > (int)ft_strlen(str2))
		args->size -= ft_strlen(str2);
	else if (args->precision2 > 0)
		args->size -= args->precision;
	if (args->precision > 0)
		str2 = ft_strsub(str2, 0, args->precision);
	if (args->flag_min == 0)
		ft_size_print(args, str2);
	if(!(args->precision == 0))
		ft_putstr(str2);
	args->charprint += (int)ft_strlen(str2);
	if (args->flag_min == 1)
		ft_size_print(args, str2);
	if (args->precision > 0)
		ft_strdel(&str2);
	return (1);
}
