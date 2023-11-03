#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

void check_elf_file(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void close_elf(int elf_des);

/**
 * check_elf_file - checks if the file is ELF file
 * @e_ident: points to array contains ELF magic numbers
 * Description: exit 98 if file isn't ELF
 */
void check_elf_file(unsigned char *e_ident)
{
	int i;

	for (i = 0 ; i < 4 ; i++)
	{
		if (e_ident[i] != 127 &&
		e_ident[i] != 'E' &&
		e_ident[i] != 'L' &&
		e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - printsmagic number of ELF header
 * @e_ident: points to array contains ELF magic numbers
 * Description: there's space separating magic numbers
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0 ; i < EI_NIDENT ; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * close_elf - close ELF file
 * @elf_des: file descriptor of ELF file
 * description: if file cannot be closed exit 98
 */
void close_elf(int elf_des)
{
	if (close(elf_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file descriptor %d\n", elf_des);
		exit(89);
	}
}
/**
 * main - show the information in ELF file
 * @argc: number of arguments
 * @argv: points to array of arguments
 * Return: 0 success if not exit 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h; /** header **/
	int openl, readl;

	openl = open(argv[1], O_RDONLY);
	if (openl == -1)
	{
		dprintf(STDERR_FILENO, "Error: not ELF file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));

	if (h == NULL)
	{
		close_elf(openl);
		dprintf(STDERR_FILENO, "Error: not ELF file %s\n", argv[1]);
		exit(98);
	}
	readl = read(openl, h, sizeof(Elf64_Ehdr));

	if (readl == -1)
	{
		free(h);
		close_elf(openl);
		dprintf(STDERR_FILENO, "Error: not ELF file %s\n", argv[1]);
		exit(98);
	}
	check_elf_file(h->e_ident);
	printf("ELF Header:\n");
	print_magic(h->e_ident);

	free(h);
	close_elf(openl);
	return (0);
}
