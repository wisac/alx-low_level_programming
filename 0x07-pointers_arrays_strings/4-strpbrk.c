/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int index2;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[i] == accept[index2])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
