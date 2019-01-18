/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_size_and_precision_change.c                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/07 13:13:52 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/14 17:23:51 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	parsing_size_n_precision_neg(t_funct *args)
{
	if (args->size2 > -1 && args->precision2 > -1 && args->flag_aq_aq == 0 &&
			args->flag_add == 0)
		args->size -= 1;
	if (args->size2 > -1 && args->precision2 == -1 && args->flag_min == 1 &&
			args->flag_add == 0 && args->flag_aq_aq == 0)
		args->size -= 1;
	if (args->size2 > -1 && args->precision2 == -1 && args->flag_0 == 0 &&
			args->flag_aq_aq == 0 && args->flag_add == 0 && args->flag_min == 0)
		args->size -= 1;
}

void	parsing_size_n_precision_for_x(t_funct *args, char *str)
{
	if (args->flag_sharp == 1 && args->precision2 <= 0)
		args->size -= 2;
	if (args->flag_sharp == 1)
		args->precision += 1;
	if (args->flag_sharp == 1 && args->precision2 > 0 && str[0] != '0')
		args->size -= 2;
	if (args->flag_sharp == 1 && args->flag_0 == 1 && str[0] != '0')
		args->precision -= 2;
	if (args->flag_sharp && str[0] == '0' && args->size2 > 0)
		args->size += 2;
	if (args->flag_sharp == 1 && args->precision2 == 0 && args->size2 > 0)
		args->size += 1;
	if (args->precision2 == 0 && str[0] == '0')
		args->size += 1;
}
