{
	size_t t;

	if (array == NULL)
		return (-1);

	for (t = 0; t < size; t++)
	{
		printf("Value checked array[%ld] = [%d]\n", t, array[t]);
		if (array[t] == value)
			return (t);
	}

	return (-1);
}