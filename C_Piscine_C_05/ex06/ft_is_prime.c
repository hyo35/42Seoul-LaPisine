/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 12:22:30 by jko               #+#    #+#             */
/*   Updated: 2020/01/29 12:44:18 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int temp;

	if (nb <= 1)
		return (0);
	temp = nb / 2;
	i = 2;
	while (i <= temp)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}