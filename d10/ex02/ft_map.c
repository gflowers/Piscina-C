int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
