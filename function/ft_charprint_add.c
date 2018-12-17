/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_charprint_add.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/15 16:23:05 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 16:42:02 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_charprint_add(t_funct *args, char *str)
{
	args->charprint += ft_strlen(str);
	if (args->precision > 0)
		args->charprint += args->precision;
	if (args->size > 0)
		args->charprint += args->size;
}
