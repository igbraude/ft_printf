/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_reset_struct.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 15:56:40 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 16:06:10 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	get_conv_string(t_funct *args, char *c)
{
	args->conv = ft_strjoin(args->conv, c);
}

void	ft_reset_struct(t_funct *args)
{
	args->neg = 0;
	if (ft_strlen(args->conv) == 3)
		ft_strdel(&args->conv);
	args->swap = 0;
	args->flag_sharp = 0;
	args->flag_min = 0;
	args->flag_add = 0;
	args->flag_add2 = 0;
	args->flag_aq_aq = 0;
	args->flag_aq_aq2 = 0;
	args->flag_0 = 0;
	args->precision = -1;
	args->size = -1;
	args->precision2 = -1;
	args->size2 = -1;
	args->conv = "..";
}
