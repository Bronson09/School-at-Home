/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 07:21:57 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/02/02 10:15:07 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 11;
// 	b = 2;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Quel est le résultat de a/b ? : %d\n", div);
// 	printf("Quel est le reste de la division de a et b ? : %d\n", mod);
// 	return (0);
// }