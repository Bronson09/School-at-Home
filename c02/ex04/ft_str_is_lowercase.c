/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bronson <bronson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:19:43 by bronson           #+#    #+#             */
/*   Updated: 2023/01/26 19:22:50 by bronson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	str_lowercase;
	int	i;

	str_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' && str[i] > 'z')
		{
			str_lowercase = 0;
		}
		i++;
	}
	return (str_lowercase);
}
