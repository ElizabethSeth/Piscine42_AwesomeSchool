/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:24:24 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/22 18:17:23 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*char	*ft_strcpy(char *dest, char *scr)
{
	int	i;

	i = 0;
	while (scr[i])
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/
char	*ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++));
	return (s1);
}
int	main(void)
{
	char str1[] = "I hope it's working";
	char str2[] = "validate me";
	char str3[40];
	char str4[40];
	char str5[] = "C02 Power";

	ft_strcpy(str2, str1);
	ft_strcpy(str3, "Copy successful");
	ft_strcpy(str4, str5);
	printf("str1: %s\nstr2: %s\nstr3: %s\nstr4:%s\n", str1,
           str2, str3, str4);
	return 0;
}
