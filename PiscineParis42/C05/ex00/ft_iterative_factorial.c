/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:06 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/21 14:34:51 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (result);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*int	main()
{
	int	num1;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &num1);

	int	factorial = ft_iterative_factorial(num1);
	printf("Factorial of %d is: %d\n", num1, factorial);
	return 0;
}*/
