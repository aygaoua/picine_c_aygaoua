/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:57:47 by azgaoua           #+#    #+#             */
/*   Updated: 2022/09/14 02:53:14 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strcm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)

{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char	**av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (strcm(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
			}
			i++;
		}
		j++;
	}
	i = 1;
	while (i < ac && i > 0)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
