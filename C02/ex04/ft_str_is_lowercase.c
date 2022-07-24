/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:31:22 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/23 16:50:23 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	int	ft_str_is_uppercase(char *str);
}
