/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bronson <bronson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:23:25 by bronson           #+#    #+#             */
/*   Updated: 2023/01/26 19:24:48 by bronson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	str_uppercase;
	int	i;

	str_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' && str[i] > 'Z')
		{
			str_uppercase = 0;
		}
		i++;
	}
	return (str_uppercase);
}
