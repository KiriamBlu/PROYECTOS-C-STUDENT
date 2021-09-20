/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:14:43 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/09/20 17:37:42 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);	
		i++;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_strncmp("Tripouille", "TripouilleX", 42));
	printf("%d\n", ft_strncmp("Tripouille", "Tripouill", 42));
	printf("%d\n", strncmp("Tripouille", "TripouilleX", 42));
	printf("%d\n", strncmp("Tripouille", "Tripouill", 42));
	return 0;
}*/