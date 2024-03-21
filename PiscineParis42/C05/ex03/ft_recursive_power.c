/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:09:29 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/21 14:55:51 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*int	 main()
{
	int	num;
	int	power;

	printf("Enter a number to find its factorial: ");
        scanf("%d %d", &num , &power);

        int     factorial = ft_recursive_power(num, power);
        printf("Factorial of %d is: %d\n", num, factorial);

}*/
