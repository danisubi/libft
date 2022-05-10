/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsubiran <dsubiran@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:32:25 by dsubiran          #+#    #+#             */
/*   Updated: 2022/05/09 18:43:13 by dsubiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_memset(void *b, int c, size_t len)
{
	char *s;
	int i;

	c = (unsigned char)c;
	i = 0;
	*s = *b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (*b);
}
