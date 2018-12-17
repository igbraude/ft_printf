/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_reset_struct.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 15:56:40 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/16 15:35:53 by igbraude    ###    #+. /#+    ###.fr     */
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
	if (ft_strlen(args->conv) == 3)
		ft_strdel(&args->conv);
	args->swap = 0;
	args->flag_sharp = 0;
	args->flag_min = 0;
	args->flag_add = 0;
	args->flag_aq_aq = 0;
	args->flag_0 = 0;
	args->precision = -1;
	args->size = -1;
	args->precision2 = -1;
	args->size2 = -1;
	args->conv = "..";
}
