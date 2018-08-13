/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 15:17:49 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/04 15:29:31 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char vic;
	vic = '0';
	while (vic <= '9')
	{
		ft_putchar(vic);
		vic++;
	}
}

int		main()
{
ft_print_numbers();
return (0);
}
