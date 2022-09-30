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

char *ft_get_line(char *str)
{
    int i;
    char *line;

    i = 0;
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    if (str[i] == '\n')
    {
        line = ft_substr(str, 0, i + 1);
        str = ft_substr(str, i + 1, ft_strlen(str));
    }
    else
    {
        line = ft_substr(str, 0, i);
        str = NULL;
    }
    return (line);
}

char *ft_save_line(char *str)
{
    int i;
    int j;
    char *line;

    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    while (str[i] != '\n' && str[i] != '\0')
        i++;
    if (str[i] == '\0')
    {
        free(str);
        return (NULL);
    }
    line = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
    if (!line)
        return (NULL);
    i++;
    while (str[i] != '\0')
        line[j++] = str[i++];
    line[j] = '\0';
    free(str);
    return (line);
}

char *ft_read_and_save(int fd, char *str)
{
    char *buff;
    int ret;

    buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buff)
        return (NULL);
    ret = read(fd, buff, BUFFER_SIZE);
    while (ret > 0)
    {
        buff[ret] = '\0';
        if (!str)
            str = ft_strdup(buff);
        else
            str = ft_strjoin(str, buff);
        if (ft_strchr(str, '\n'))
            break ;
        ret = read(fd, buff, BUFFER_SIZE);
    }
    free(buff);
    return (str);
}

char *get_next_line(int fd)
{
    static char *str;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    str = ft_read_and_save(fd, str);
    if (!str)
        return (NULL);
    line = ft_get_line(str);
    str = ft_save_line(str);
    return (line);
}
