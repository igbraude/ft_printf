/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_charprint_add.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/15 16:23:05 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/15 20:04:10 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_charprint_add(t_funct *args, char *str)
{
	args->charprint += ft_strlen(str);
	if (args->precision2 != -1 && args->precision > 0 &&
			(int)ft_strlen(str) < args->precision)
		args->charprint += args->precision;
	if (args->size2 != -1 && args->size > 0)
		args->charprint += args->size;
}
