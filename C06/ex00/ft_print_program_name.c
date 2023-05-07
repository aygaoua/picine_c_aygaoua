/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:10:01 by azgaoua           #+#    #+#             */
/*   Updated: 2022/09/14 00:44:07 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char	**av)

{
	int	i;

	(void) av;
	(void) ac;
	i = 0;
	while (av[0][i] != '\0')
	{
		pchar(av[0][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
