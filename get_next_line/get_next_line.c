#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (s1 == 0 || s2 == 0 || (!(s = (char*)malloc(sizeof(char) *
	((ft_strlen(s1) + ft_strlen(s2)) + 1)))))
		return (0);
	s[0] = '\0';
	ft_strcat(s, s1);
	ft_strcat(s, s2);
	return (s);
}

char	*ft_strdup(const char *src)
{
	int		i;
	char	*output;

	i = 0;
	while (src[i] != '\0')
		i++;
	if ((output = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

char	*ft_strndup(const char *src, size_t n)
{
	size_t		i;
	char		*output;

	i = 0;
	while (src[i] != '\0' && i < n)
		i++;
	if ((output = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

char	*ft_line_reader(const int fd, char *state_keeper)
{
	int		ft;
	char	buffer[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, buffer, 0) < 0)
		return (0);
	if (state_keeper == 0)
		state_keeper = ft_strnew(1);
	while (!(ft_strchr(state_keeper, '\n')))
	{
		if ((ft = read(fd, buffer, BUFFER_SIZE)) < 0)
			return (0);
		buffer[ft] = '\0';
		state_keeper = ft_strjoin(state_keeper, buffer);
		if (ft == 0 || state_keeper[0] == '\0')
			break ;
	}
	return (state_keeper);
}

int		get_next_line(int fd, char **line)
{
	int				i;
	char			*tmp;
	static char		*state_keeper;

	if ((state_keeper = ft_line_reader(fd, state_keeper)) == 0)
		return (-1);
	if ((tmp = ft_strchr(state_keeper, '\n')))
	{
		i = tmp - state_keeper;
		tmp = ft_strdup(state_keeper + i + 1);
		if ((*line = ft_strndup(state_keeper, i)) == 0)
			return (-1);
		free(state_keeper);
		state_keeper = ft_strdup(tmp);
		free(tmp);
		return (1);
	}
	else
	{
		if ((*line = ft_strdup(state_keeper)) == 0)
			return (-1);
		free(state_keeper);
		state_keeper = NULL;
		return (0);
	}
}
