/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:30:47 by livliege          #+#    #+#             */
/*   Updated: 2023/10/25 21:33:25 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// OLD SPLIT

#include "libft.h"

// void	ft_free(char **split_2d_array)
// {
// 	while (*split_2d_array != NULL)
// 	{
// 		free(*split_2d_array);
// 		split_2d_array++;
// 	}
// 	free(split_2d_array);
// }

// size_t	ft_wordcount(char const *s, char c)
// {
// 	int	words;
// 	int	new_word;

// 	words = 0;
// 	new_word = 0;
// 	while (*s)
// 	{
// 		if (*s != c && new_word == 0)
// 		{
// 			new_word = 1;
// 			words++;
// 		}
// 		else if (*s == c)
// 			new_word = 0;
// 		s++;
// 	}
// 	return (words);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**split_2d_array;
// 	int		new_word;
// 	size_t	j;
// 	size_t	i;

// 	if (s == NULL)
// 		return (NULL);
// 	split_2d_array = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
// 	if (split_2d_array == NULL)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	new_word = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && new_word < 0)
// 			new_word = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && new_word >= 0)
// 		{
// 			split_2d_array[j] = ft_substr(s, new_word, (i - new_word));
// 			new_word = -1;
// 			if (!split_2d_array[j])
// 			{
// 				ft_free(split_2d_array);
// 				return (NULL);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	split_2d_array[j] = NULL;
// 	return (split_2d_array);
// }




// NEW SPLIT VERSION 2.0

char	**ft_split_size(char const *s, char c)
{
	char	**split_2d_array;

	if (s == NULL)
		return (NULL);
	split_2d_array = (char **)malloc((ft_wordcount(*s, c) + 1) * sizeof(char *));
	if (split_2d_array == NULL)
		return (NULL);
	return (split_2d_array);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	int		new_word;
	char	**split_2d_array;

	i = 0;
	j = 0;
	new_word = -1;
	split_2d_array = NULL;
	split_2d_array = ft_split_size(s, c);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && new_word < 0)
			new_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && new_word >= 0)
		{
			split_2d_array[j] = ft_substr(s, new_word, (i - new_word));
			new_word = -1;
			if (!split_2d_array[j])
			{
				ft_free(split_2d_array);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	split_2d_array[j] = NULL;
	return (split_2d_array);
}


// int main(void)
// {
// 	char str[] = "This   string is about to be split into small sections      ";
// 	char delimiter = ' ';

// 	// printf("%zu\n", word_count(str, delimiter));

// 	char **splitted = NULL;
// 	int i = 0;

// 	splitted = ft_split(str, delimiter);
// 	while (splitted[i] != NULL)
// 	{s
// 		printf("%s\n", splitted[i]);
// 		i++;
// 	}
// 	return (0);
// }










// char	**ft_split(char const *s, char c)
// {
// 	char	**split_2d_array;
// 	int		new_word;
// 	size_t	j;
// 	size_t	i;

// 	if (s == NULL)
// 		return (NULL);
// 	split_2d_array = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
// 	if (split_2d_array == NULL)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	new_word = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && new_word < 0)
// 			new_word = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && new_word >= 0)
// 		{
// 			split_2d_array[j] = ft_substr(s, new_word, (i - new_word));
// 			new_word = -1;
// 			if (!split_2d_array[j])
// 			{
// 				ft_free(split_2d_array);
// 				return (NULL);
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// 	split_2d_array[j] = NULL;
// 	return (split_2d_array);
// }