/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:12:57 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/31 17:12:59 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char *get_next_line(int fd, char **line)
{
    int file;
    static char *str[FD_SIZE + 1];
    char buffsize[BUFFER_SIZE + 1];
    char *holder;

    if (fd < 0 || line == NULL)
        return (-1);
    file = read(fd, buffsize, BUFFER_SIZE)
    while (file > 0)
    {
        buffsize[file] = '\0';
        if (str[fd] == NULL)
            str[fd] = ft_strdup(buffsize);
        else
            {
                holder = ft_strjoin(str[fd], buffsize);
                free(str[fd]);
                str[fd] = holder;
            }
        if (ft_strchr(str[fd], '\n'))
            break ;
    }
    // printf("%d", BUFFER_SIZE);
}
