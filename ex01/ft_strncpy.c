/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 07:45:35 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/17 09:17:16 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src +i);
		++i;
	}
	while (i < n)
			*(dest + i++) = '\0';
	return(dest);
}
