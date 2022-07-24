/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:44:08 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/24 10:01:45 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' || str[i] <= 'Z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int	ft_str_is_uppercase(char *str);
}
