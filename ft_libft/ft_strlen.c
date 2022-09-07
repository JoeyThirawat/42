/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboonsan <tboonsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 21:24:54 by tboonsan          #+#    #+#             */
/*   Updated: 2022/09/07 19:47:39 by tboonsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *inStr)
{
	int count = 0;
	int i;
	char noteStr;
    
    noteStr = inStr[0];
    
    while (noteStr != '\0')
    {
        count++;
        noteStr = inStr[++i];
    }
    
    return count;
}
