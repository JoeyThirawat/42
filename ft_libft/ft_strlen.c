/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboonsan <tboonsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:24:54 by tboonsan          #+#    #+#             */
/*   Updated: 2022/09/07 19:59:53 by tboonsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *in_str)
{
	char note_str;

	int count;
	int i;

	count = 0;
	i = 0;
	note_str = in_str[0];

	while (noteStr != '\0')
    {
        count++;
        note_str = in_str[++i];
    }
    
    return count;
}
