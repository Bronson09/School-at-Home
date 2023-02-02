/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeaulie <gbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:05:55 by gbeaulie          #+#    #+#             */
/*   Updated: 2023/02/02 12:13:44 by gbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "Hello there. wink-wink";
// 	printf("%s\n", str);
// 	printf("Combien de caractères ? : %d\n", ft_strlen(str));
// }