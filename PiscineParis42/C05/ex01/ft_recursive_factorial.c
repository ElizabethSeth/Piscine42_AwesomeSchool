/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:56:16 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/21 14:40:05 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*int	main()
{
	int	num;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &num);

	int	factorial = ft_recursive_factorial(num);
	printf("Factorial of %d is: %d\n", num, factorial);

	return 0;
}*/
