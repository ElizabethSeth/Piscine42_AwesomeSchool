/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:55:15 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/14 16:02:57 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'a' && str[i] <= 'z'))
			|| ((str[i] >= 'A' && str[i] <= 'Z')))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	str1[] = "Hello55555World";
    	printf("%d", ft_str_is_alpha(str1));
    	//char	str2[] = "111111";
    	//printf("%s - %d\n", str2[], ft_str_is_alpha(str2[]));
}*/
