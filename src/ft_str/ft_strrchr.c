/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorcom- <jmorcom-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:41:12 by jmorcom-          #+#    #+#             */
/*   Updated: 2022/10/21 16:24:21 by jmorcom-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	t = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			t = (char *)(s + i);
		}
		i++;
	}
	if (s[i] == (char)c)
		t = (char *)(s + i);
	return (t);
}
