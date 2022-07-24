/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:16:07 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/24 09:32:01 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n && src[i] == '\0')
		{
		while (dest[i] != '\0')
		{		
			dest[i] = '\0';
			i++;
		}
	}	
		return (dest);
}

int	main(void)
{
	char	*ft_strcpy(char *dest, char *src, unsigned int n);
}
