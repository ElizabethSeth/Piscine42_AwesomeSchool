/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:40:27 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/19 09:56:26 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*int main()
{
    char str[] = "Hello, world! This is a test string.";
    char to_find[] = "world";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
    {
        printf("'%s' found at index %ld\n", to_find, result - str);
    }
    else
    {
        printf("'%s' not found in '%s'\n", to_find, str);
    }

    return 0;
}*/
