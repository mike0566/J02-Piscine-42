/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 11:39:32 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/07 11:48:44 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar (char c);

void	ft_print_num(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_combs(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = a;
		while (b <= '9')
		{
			c = b;
			while (c <= '9')
			{
				if (a < b && b < c && c <= '9')
				{
					ft_print_num(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
