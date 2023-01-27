/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bronson <bronson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:28:15 by bronson           #+#    #+#             */
/*   Updated: 2023/01/26 19:31:03 by bronson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int	is_printable;
	int	i;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] <= 127))
		{
			is_printable = 0;
		}
	}
	return (is_printable);
}