/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsiddiqu <gsiddiqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:00:01 by gsiddiqu          #+#    #+#             */
/*   Updated: 2021/06/16 16:18:27 by gsiddiqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>



int     ft_strlen(char *str)
{
    int size;
    
    size = 0;
    while(*str)
    {
        size++;
        str++;
    }
    return size;
}

int     ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int ind;

    ind = 0;
    while(ind < dstsize)
    {
        *(dst + ind) = *(src + ind);
        ind++;
    }
    *(dst + dstsize) = '\0';
    return ft_strlen((char*)src);
}


int     ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int size;
    int ind;
    size = ft_strlen(dst);

    ind = size;
    while(ind < dstsize)
    {
        *(dst + ind) = *(src + ind - size);
        ind++;
    }
    *(dst + dstsize) = '\0';
    return ft_strlen(dst) + ft_strlen((char*)src);
}
char    *ft_strjoin(char const *s1, char const *s2)
{
    int size1;
    int size2;
    char *str;
    
    size1 = ft_strlen((char*)s1);
    size2 = ft_strlen((char*)s2);

    str = malloc((size1 + size2) * sizeof(char));
    ft_strlcpy(str, s1, size1 + 1);
    ft_strlcat(str, s2, size1 + size2 + 1);
    return str;
}



char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int ind;
    int size;
    char *sub;
    
    size = 0;
    while ((s + start + size) && (size < len))
        size++;
    sub = malloc((size + 1) * sizeof(char));
    if (!sub)
        return sub;
    ind = 0;
    while(ind <= size)
    {
        *(sub + ind) = *(s + start + ind);
        ind++;
    }
    return sub;
}







int     ft_isalpha(char c)
{
    if (c > 122 || c < 65 || (c > 90 && c < 97))
        return 0;
    return 1;
}

int     ft_isdigit(char c)
{
    if (c >= 48 && c <= 57)
        return 1;
    return 0;
}

int     ft_isalnum(char c)
{
    if (ft_isalpha(c) + ft_isdigit(c))
        return 1;
    return 0;
}

int     ft_isascii(char c)
{
    if (c >= 0 || c <= 127)
        return 1;
    return 0;
}

int     ft_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return 1;
    return 0;
}

char    ft_tolower(char c)
{
    if (c >= 65 && c <= 90)
        return c + 32;
    return c;
}

char    ft_toupper(char c)
{
    if (c >= 97 && c <= 122)
        return c - 32;
    return c;
}

int     ft_atoi(char *str)
{
    int sign;
    int digits;

    sign = 1;

}

int		ft_atoi(char *str)
{
	int sign;
	int digits;

	sign = 1;
	digits = 0;
	while (((*str >= 9 && *str <= 13) || *str == ' ') && *str != '\0')
		str++;
	while ((*str == '-' || *str == '+') && *str != '\0')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		digits *= 10;
		digits += *str - '0';
		str++;
	}
	return (digits * sign);
}

char    *ft_strchr(const char *s, int c)
{
    int ind;

    ind = 0;
    while (*(s + ind))
    {
        if (*(s + ind) == c)
            return (s + ind);
        ind++;
    }
    if (*(s + ind) == c)
        return (s + ind);
    return NULL;
}

char    *ft_strrchr(const char *s, int c)
{
    int ind;

    ind = ft_strlen(s);
    while (ind >= 0)
    {
        if (*(s + ind) == c)
            return (s + ind);
        ind--;
    }
    return NULL;
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && n  - i)
	{
		if (*(s1 + i) > *(s2 + i))
			return (1);
        else if (*(s1 + i) < *(s2 + i))
            return (-1);
		i++;
	}
	return (0);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	if (*needle == '\0')
        return haystack;

    i = 0;
	while (*(haystack + i))
	{
		if (ft_strcmp(haystack, needle, len) == 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}


char    *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    int i;
    char *str;

    start = 0;
    i = 0;
    end = ft_strlen(s1) - 1;
    while (ft_strchr(set, (int)*(s1 + start) != NULL))
       start++;
    while (ft_strchr(set, (int)*(s1 + end) != NULL))
       end--;
    str = malloc(((end-start) + 1) * sizeof(char));
    while (i < (end - start))
    {
        *(str + i) = *(s1 + start + i);
        i++;
    }
    *(str + i) = '\0';
    return str;
}

char **ft_split(char const *s, char c)
{
    int num;
    int i;
    char **arr;
    int size;
    int j;
    int k;

    i = 0;
    size = 0;
    num = 0;
    while(s + i)
    {
        if ((s + i) == c);
            num++;
    }
    arr = malloc((num + 1) * sizeof(char*));
    if (arr == NULL)
        return NULL;
    i = 0;
    k = 0;
    while(s + i)
        size = 0;
        while(*(s + i + size) != c)
            size++;
        *(arr + k) = malloc((size + 1) * sizeof(char));
        if (*(arr + k) == NULL)
            return NULL;
        j = 0;
        while(j < size)
        {
            *(*(arr + k) + j) = *(s + i);
            j++;
        }
        *(*(arr + k) + j) = '\0';
        i++;
        k++;
    **(arr + k) = NULL;
    return arr;
}

char    *ft_itoa(int n)
{
    int numchr;
    int a;
    char *str;

    a = n;
    while ((a / 10) > 0)
    {
        numchr++;
        a %= 10;
    }
    numchr++;
    str = malloc((numchr + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    a = 0;
    while ((n / 10) > 0)
    {
        *(str + a) = (n / 10) +  48;
        n %= 10;
        a++;
    }
    *(str + a) = '\n';
    return str;
}

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

void    ft_putstr_fd(char *s, int fd)
{
    while(*s)
    {
        write(fd, s, 1);
        s++;
    }
}

void    ft_endl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    ft_putstr_fd(ft_itoa(n), 1);
}








// int main()
// {
//     char *str;
//     int i;

//     str = "full string containing substring";
//     printf("%s\n",str);
//     i = ft_strlen(str);
//     printf("%d\n", i);
//     return (0);
// }

// int main()
// {
//     char *str1;
//     char str2[] = "Destination String";
//     int i;

//     str1 = "Source String ";
//     printf("Source String = %s\n",str1);
//     printf("Destination String = %s\n",str2);
    
//     ft_strlcpy(str2, str1, ft_strlen(str1));

//     printf("Copied String = %s\n", str2);
//     return (0);
// }


// int main()
// {
//     char *str1;
//     char *str2;
//     char str_temp[] = "Destination String";
//     int i;

//     str2 = str_temp;
//     str1 = "Source String ";
//     printf("Source String = %s\n",str1);
//     printf("Destination String = %s\n",str2);
    
//     ft_strlcat(str2, str1, ft_strlen(str1) + ft_strlen(str2) + 1);

//     printf("Concatenated String = %s\n", str2);
//     return (0);
// }
int main()
{
    char *str1;
    char *str2;
    int i;

    str1 = "Source String ";
    str2 = "Destination String";
    printf("Source String = %s\n",str1);
    printf("Destination String = %s\n",str2);

    printf("Joined String = %s\n", ft_strjoin(str2, str1));
    return (0);
}