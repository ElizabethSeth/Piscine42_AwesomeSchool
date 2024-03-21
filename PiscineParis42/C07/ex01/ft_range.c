/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:04:53 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/26 13:17:43 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc (sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*int main() {
    int min = 5;
    int max = 10;

    int *result = ft_range(min, max);

    if (result == NULL) {
        return 1;
    }

    int i = min;
    while (i < max) {
        printf("%d ", result[i - min]);
        i++;
    }
    printf("\n");

    free(result);

    return 0;
}*/
