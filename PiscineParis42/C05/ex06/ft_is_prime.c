/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:25:17 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/21 16:22:27 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{	
	int	divis;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	divis = 3;
	while (divis * divis <= nb)
	{
		if (nb % divis == 0)
		{
			return (0);
		}
		divis += 2;
	}
	return (1);
}
/*int   main()
{
        int     num;
        printf("put the num : ");
        scanf("%d", &num);
        int     prime = ft_is_prime(num);
        printf("prime  %d", prime);
        return 0;
}*/
