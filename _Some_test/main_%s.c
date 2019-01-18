/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_%s.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/13 21:58:07 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 18:34:09 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int main ()
{
	char *str = "hello World";

	/*
	**		%s only :
	*/

	dprintf (1, "\033[31mSome Test whith %%s:\n\n");

	dprintf(1, "\nreal %%s: %s|\n", str);
	ft_printf("Mine %%s: %s|\n", str);

	dprintf(1, "\nreal %%-s: %-s|\n", str);
	ft_printf("Mine %%-s: %-s|\n", str);

	dprintf(1, "\nreal %%12s: %12s|\n", str);
	ft_printf("Mine %%12s: %12s|\n", str);

	dprintf(1, "\nreal %%.5s: %.5s|\n", str);
	ft_printf("Mine %%.5s: %.5s|\n", str);

	dprintf(1, "\nreal %%8.5s: %8.5s|\n", str);
	ft_printf("Mine %%8.5s: %8.5s|\n", str);

	dprintf(1, "\nreal %%-8.5s: %-8.5s|\n", str);
	ft_printf("Mine %%-8.5s: %-8.5s|\n", str);

	dprintf(1, "\nreal %%s: %s|\n", NULL);
	ft_printf("Mine %%s: %s|\n", NULL);

	dprintf(1, "\nreal %%5s: %8s|\n", NULL);
	ft_printf("Mine %%5s: %8s|\n", NULL);

	dprintf(1, "\nreal %%.5s: %.5s|\n", NULL);
	ft_printf("Mine %%.5s: %.5s|\n", NULL);

	dprintf(1, "\nreal %%5.2s: %5.2s|\n", "");
	ft_printf("Mine %%5.2s: %5.2s|\n", "");

	dprintf(1, "\nreal %%5.2s: %5.2s|\n", "l");
	ft_printf("Mine %%5.2s: %5.2s|\n", "l");

	dprintf(1, "\nreal %%1.3s: %1.3s|\n", "");
	ft_printf("Mine %%1.3s: %1.3s|\n", "");

	dprintf(1, "\nreal %%.3s: %.3s|\n", "");
	ft_printf("Mine %%.3s: %.3s|\n", "");

	dprintf(1, "\nreal %%.0s: %.0s|\n", str);
	ft_printf("Mine %%.0s: %.0s|\n", str);
}
