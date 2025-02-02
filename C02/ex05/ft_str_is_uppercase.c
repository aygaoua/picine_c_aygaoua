/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:02:14 by azgaoua           #+#    #+#             */
/*   Updated: 2022/09/08 01:30:03 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str == '\0')
		return (1);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				i++;
			else
				return (0);
		}
		return (1);
	}
}
