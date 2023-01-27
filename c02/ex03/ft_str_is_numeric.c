/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bronson <bronson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:15:07 by bronson           #+#    #+#             */
/*   Updated: 2023/01/26 19:18:57 by bronson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	str_numeric;
	int	i;

	str_numeric = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' && (str[i] > '9'))
		{
			str_numeric = 0;
		}
		i++;
	}
	return (str_numeric);
}
