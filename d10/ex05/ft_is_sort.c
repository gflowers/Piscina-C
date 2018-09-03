int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (i < length - 1 && res <= 0)
	{
		res = f(tab[i],tab[i + 1]);
		i++;
	}
	res = (res <= 0) ? 1 : 0;
	return (res);
}
