/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 16:26:55 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/08 16:35:33 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		ft_base8ou10(int nbreverse, int basenb)
{
	int stock;
	int stock2;

	stock2 = 0;
	if (basenb >= 10)
	{
		stock = nbreverse % basenb;
		if (stock >= 10)
		{
			if (stock > 19)
				stock2 = stock - 10 - stock % 10;
			if (stock >= 36)
				stock2 = stock - 10 - stock % 10 - 58;
			ft_putchar(stock % 10 + 97 + stock2);
		}
		else
			ft_putchar(stock + 48);
	}
}

static void		ft_nbreverse(int nbisnb, int nbreverse, int basenb)
{
	while (nbisnb > 0)
	{
		nbreverse = (nbreverse * basenb) + (nbisnb % basenb);
		nbisnb = nbisnb / basenb;
	}
	while (nbreverse > basenb - 1)
	{
		if (basenb >= 10)
			ft_base8ou10(nbreverse, basenb);
		else
			ft_putchar((nbreverse % basenb) + 48);
		nbreverse = nbreverse / basenb;
	}
}

static int		ft_valeurmin(int nb, int nbisnb, int basenb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb < 0)
	{
		ft_putchar('-');
	}
	nb = nb / basenb;
	nbisnb = nb;
	if (nbisnb < 0)
		nbisnb = -nbisnb;
	return (nbisnb);
}

void			ft_putnbr_base(int nb, int basenb)
{
	int nbreverse;
	int nbisnb;
	int last;

	if (basenb == 1 || basenb >= 62)
		return ;
	last = nb % basenb;
	nbreverse = 1;
	nbisnb = 0;
	nbisnb = ft_valeurmin(nb, nbisnb, basenb);
	ft_nbreverse(nbisnb, nbreverse, basenb);
	if (last < 0)
		last = -last;
	if (nb != 0 && basenb >= 10)
		ft_base8ou10(last, basenb);
	else
		ft_putchar(last + 48);
}
