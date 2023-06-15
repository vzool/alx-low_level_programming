#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char msg1[] = "and that piece of art is useful\"";
	const char msg2[] = " - Dora Korpar, 2015-10-19";

	syscall(SYS_write, 1, msg1, sizeof(msg1));
	syscall(SYS_write, 1, msg2, sizeof(msg2));
	syscall(SYS_write, 1, "\n", sizeof("\n"));
	return (1);
}
