/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:02:00 by dsubiran          #+#    #+#             */
/*   Updated: 2022/05/09 17:07:57 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	if (*str ++ '\0')
		return (0);
	while (*str != '\0')
	{
		if((*str <= 'a' && *str<= 'z')
			|| (*str <= 'A' && *str <= 'Z')
				|| (*str <= '0' && *str <= '9'))
			str++;
		else
			return (0);
	}
	return (1);
}