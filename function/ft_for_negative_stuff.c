/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_for_negative_stuff.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/14 16:52:22 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:31:24 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

unsigned int		ft_negative_int(int n, unsigned int n2, t_funct *args)
{
	if (n < 0)
	{
		parsing_size_n_precision_neg(args);
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		n2 = -n;
		args->neg = 1;
	}
	else
		n2 = n;
	return (n2);
}

unsigned long		ft_negative_long(long n, unsigned long n2,
		t_funct *args)
{
	if (n < 0)
	{
		parsing_size_n_precision_neg(args);
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		n2 = -n;
		args->neg = 1;
	}
	else
		n2 = n;
	return (n2);
}

unsigned long long	ft_negative_long_long(long long n, unsigned long long n2,
		t_funct *args)
{
	if (n < 0)
	{
		parsing_size_n_precision_neg(args);
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		n2 = -n;
		args->neg = 1;
	}
	else
		n2 = n;
	return (n2);
}

void				ft_negative_double(t_funct *args)
{
		if (args->size2 > 0 && args->precision2 > 0 && args->flag_aq_aq == 0 && args->flag_add == 0)
		{
			args->size -= 1;
		}
		if (args->size2 > 0 && args->precision2 == -1 && args->flag_min == 1 &&
				args->flag_add == 0 && args->flag_aq_aq == 0)
			args->size -= 1;
		if (args->size2 > 0 && args->precision2 == -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0)
			args->size -= 1;
		if (args->flag_0 == 1 && args->flag_aq_aq == 0 &&
				args->precision2 > 0 && args->size2 == -1 &&
				args->flag_add == 0 && args->flag_min == 0 && args->swap == 1)
			args->precision -= 1;
		if (args->size2 > 0 && args->precision2 <= -1 && args->flag_0 == 0 &&
				args->flag_aq_aq == 0 && args->flag_add == 0 &&
				args->flag_min == 0 && args->flag_sharp == 1)
		{
			args->size -= 1;
		}
		args->flag_aq_aq = 0;
		args->flag_add = 0;
		args->charprint += 1;
}
