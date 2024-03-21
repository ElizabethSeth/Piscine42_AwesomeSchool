/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:20:55 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/21 16:24:00 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 1;
	if (nb > 0)
	{
		while (sq * sq <= nb)
		{
			if (sq * sq == nb)
				return (sq);
			if (sq > 46340)
				return (0);
			sq++;
		}
	}
	return (0);
}
/*int   main()
{
        int     num;
        printf("put the num : ");
        scanf("%d", &num);
        int     sqrt = ft_sqrt(num);
        printf("Voila %d", sqrt);
        return 0;
}*/
