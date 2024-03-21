/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 09:29:44 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/19 12:42:35 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	total_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dest_len + src_len;
	if (dest_len < size)
	{
		i = dest_len;
		while (i < size - 1 && src[i - dest_len] != '\0')
		{
			dest[i] = src[i - dest_len];
				i++;
		}
		dest[i] = '\0';
	}
	return (total_len);
}

/*int	main()
{
	char	dest[20] = "Please";
	char	src[] = " help,me";
	unsigned int size = 10;

	ft_strlcat(dest, src, size);
	printf("after conc : dest = %s", dest);
}*/
