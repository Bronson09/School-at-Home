/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:22:05 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/01/20 12:43:10 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N\n", 1);
	}
	else if (n >= 0)
	{
		write(1, "P\n", 1);
	}
}

/*int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(-1);
	return (0);
}*/
