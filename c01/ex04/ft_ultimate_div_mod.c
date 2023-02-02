/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 07:17:21 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/02/02 10:33:10 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 11;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Quel est le résultat de la divison ? : %d\n", a);
// 	printf("Quel est le reste de la divison ? : %d\n", b);
// 	return (0);
// }
