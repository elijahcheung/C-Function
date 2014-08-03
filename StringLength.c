/*
 * Name:      String Length Method
 * Author:    Junjie Zhang
 * Date:      Aug 03rd.2014
 * Version:   1.0
 */

typedef int size_t;

size_t StringLength(const char *s)
{
	size_t n = 0;

	while(*s++)
	{
		n++;
	}
	return n;
}
