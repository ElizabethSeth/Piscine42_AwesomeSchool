/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:41:07 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/26 17:28:55 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{	
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		*range = tab;
		return (i);
	}	
}
/*int	main()
{
	int	*arr;
	int	min = 5;
	int	max = 10;
	int	size;

	size = ft_ultimate_range(&arr, min, max);
	
	int *ptr = arr;
	int *end = arr + size;
	while (ptr < end)
	{
		printf("%d ", *ptr++);
	}
	printf("\n");

	free(arr);
	return 0;
}*/
