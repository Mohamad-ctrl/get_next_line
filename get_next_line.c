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
#include "Libft/libft.h"
#include "Libft/printf/ft_printf_lib.h"

char *get_next_line(int fd, char **line)
{
    int file;
    static char *str[FD_SIZE + 1];
<<<<<<< HEAD
    char buff[BUFFER_SIZE + 1];
=======
    char buffsize[BUFFER_SIZE + 1];
>>>>>>> fc38c4577b886599940d3fbbe1dd5d8e8ffa4b84
    char *holder;

    if (fd < 0 || line == NULL)
        return (-1);
<<<<<<< HEAD
    file = read(fd, buff, BUFFER_SIZE)
    while (file > 0)
    {
        buff[file] = '\0';
        if (str[fd] == NULL)
            str[fd] = ft_strdup(buff);
        else
            {
                holder = ft_strjoin(str[fd], buff);
=======
    file = read(fd, buffsize, BUFFER_SIZE)
    while (file > 0)
    {
        buffsize[file] = '\0';
        if (str[fd] == NULL)
            str[fd] = ft_strdup(buffsize);
        else
            {
                holder = ft_strjoin(str[fd], buffsize);
>>>>>>> fc38c4577b886599940d3fbbe1dd5d8e8ffa4b84
                free(str[fd]);
                str[fd] = holder;
            }
        if (ft_strchr(str[fd], '\n'))
            break ;
<<<<<<< HEAD
        return ()
    }
}

int main(int ac, char **av)
{
    ft_printf("My Atoi : -> %d\n", ft_atoi(av[1]));
    ft_printf("Real atoi : -> %d\n", atoi(av[1]));
}
=======
    }
    // printf("%d", BUFFER_SIZE);
}
>>>>>>> fc38c4577b886599940d3fbbe1dd5d8e8ffa4b84
