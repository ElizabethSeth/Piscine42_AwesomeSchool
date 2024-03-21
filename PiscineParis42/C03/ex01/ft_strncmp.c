/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:16:25 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/19 12:28:14 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = -1;
	while (++ i < n && (*s1 || *s2))
		if (s1[i] != s2[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
	return (0);
}
/*int main() 
{
    char *str1 = "Hello";
    char *str2 = "Helle";
    unsigned int n = 4;
    printf("Comparing \"%s\" and \"%s\":\n", n, str1, str2);
    printf("Result of ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
    return 0;
}*/
