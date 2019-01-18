/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_some_return_value.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/15 16:09:14 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/16 16:15:37 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int main ()
{
	int i = 42;

	ft_putnbr(dprintf(1,"real: %d-->", i));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %d-->", i));
	ft_putstr ("\n\n");

	ft_putnbr(dprintf(1,"real: %5d-->", i));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %5d-->", i));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %ix-->", i));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %ix-->", i));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %5%-->"));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %5%-->"));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %-5%-->"));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %-5%-->"));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: % -5%-->"));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: % -5%-->"));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: % 5%-->"));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: % 5%-->"));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %.5%-->"));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %.5%-->"));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %5%%2%%.5%-->"));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %5%%2%%.5%-->"));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %c-->", 0));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %c-->", 0));
	ft_putstr("\n\n");

	ft_putnbr(dprintf(1,"real: %5c-->", 0));
	ft_putchar('\n');
	ft_putnbr(ft_printf("Mine: %5c-->", 0));
	ft_putstr("\n\n");

	return (0);
}
