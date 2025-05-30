/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:17:01 by bherranz          #+#    #+#             */
/*   Updated: 2024/11/25 07:26:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*memory;
	size_t	count;
	size_t	s_length;

	count = 0;
	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start >= s_length)
		return (ft_strdup(""));
	if (s_length < len)
		len = s_length;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	memory = (char *) malloc((len + 1) * sizeof(char));
	if (!memory)
		return (NULL);
	while (count < len && s[start])
	{
		memory[count] = s[start];
		count++;
		start++;
	}
	memory[count] = '\0';
	return (memory);
}
