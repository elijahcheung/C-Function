/*
 * Name:       Count Space in String
 * Author:     Junjie Zhang
 * Date:       Aug 03rd,2014
 * Version:    1.0
 */

int CountSpace(const char *s)
{
	int count = 0;

	if(s == NULL)
	{
		return -1;
	}

	for(;*s != '\0';s++)
	{
		if(*s == ' ')//search space
		{
			count++;
		}
	}
	return count;
}
