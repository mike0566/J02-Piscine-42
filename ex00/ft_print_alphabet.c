/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahequet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 09:43:21 by ahequet           #+#    #+#             */
/*   Updated: 2018/08/07 10:07:08 by ahequet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char abc;

	abc = 'a';
	while (abc <= 'z')
	{
		ft_putchar(abc);
		abc++;
	}
}
