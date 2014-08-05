#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdarg.h>

void Print(const char *format,...)
{
	va_list ap;

	va_start(ap,format);
	vfprintf(stdout,format,ap);
	va_end(ap);

}

int main()
{
	Print("%c",'a');
	return 0;
}
