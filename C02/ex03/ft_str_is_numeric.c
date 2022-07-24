/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaulat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:08:08 by abeaulat          #+#    #+#             */
/*   Updated: 2022/07/23 16:29:03 by abeaulat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i = 0;
	
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		i++;
		else return (0);
	}
	return (1);
}

int	main(void)
{
	int	ft_str_is_numeric(char *str);

}
