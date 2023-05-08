/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:52:20 by azgaoua           #+#    #+#             */
/*   Updated: 2022/09/14 00:45:40 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char	**av)
{
	int	j;
	int	i;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			pchar(av[i][j]);
			j++;
		}
		pchar('\n');
		i++;
	}
	return (0);
}
