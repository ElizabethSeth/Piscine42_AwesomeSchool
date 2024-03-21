/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:23:15 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/22 19:13:36 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	letter(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count = str[i] - 96;
		if (str[i] >= 'A' && str[i] <= 'Z')
			count = str[i] - 64;
		while (count)
		{
			write(1, &str[i], 1);
			count--;
		}
		count = 1;
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		letter(av[1]);
	write(1, "\n", 1);
	return (0);
}
