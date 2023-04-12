/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:52:46 by azgaoua           #+#    #+#             */
/*   Updated: 2022/08/27 15:56:47 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char m)
{
	write(1, &m, 1);
}

void	ft_print_comb2(void)
{
	char	cas1;
	char	cas2;

	cas1 = 0;
	while (cas1 <= 99)
	{
		cas2 = cas1 + 1;
		while (cas2 <= 99)
		{
			ft_putchar(cas1 / 10 + '0');
			ft_putchar(cas1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(cas2 / 10 + '0');
			ft_putchar(cas2 % 10 + '0');
			cas2++;
			if (cas1 != 98)
				write(1, ", ", 2);
		}
		cas1++;
	}
}
