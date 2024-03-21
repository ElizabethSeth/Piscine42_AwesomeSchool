/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:34:06 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/21 16:19:21 by esetkh           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*int   main()
{
        int     num;
        printf("put the num : ");
        scanf("%d", &num);
        int     ifprime = ft_find_next_prime(num);
        printf("prime  %d", ifprime);
        return 0;
}*/
