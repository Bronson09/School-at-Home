/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:28:14 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/01/20 12:41:31 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	{
	c = '0';
		while (c <= '9')
		{
			write(1, &c, 1);
			c++;
		}
	}	
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
