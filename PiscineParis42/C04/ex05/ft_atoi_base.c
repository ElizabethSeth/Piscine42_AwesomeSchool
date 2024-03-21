/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esetkh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:20:05 by esetkh            #+#    #+#             */
/*   Updated: 2024/02/20 13:47:52 by esetkh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (1);
}

int	char_index_in_base(char c, char *base)
{
	int i = 0;
	while (base[i])
	{
		if (base[i] == c) return i;
		i++;
	}
	return -1;
}

int	is_valid_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] == '\t' 
				|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
		{	
			return 0;
		}
	int	j;

	j = i + 1;
	while (base[j])
	{
		if (base[i] == base[j])
		{
			return 0;
		}
		j++;
	}
	i++;
	}
	if (base[0] && base[1])
	{
		return 1;
	}
	return 0;
}

int	ft_atoi_base(char *str, char *base)
{
    if (!str || !base || !is_valid_base(base))
	{
		return 0;
	}
	int	result;
	int	sign;
	
	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;		
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str)
	{
		int	index;

		index = char_index_in_base(*str, base);
	if (index == -1)
	{
		return 0;
	}
	result = result * (int)ft_strlen(base) + index;
	str++;
	}
	return result * sign;
}
