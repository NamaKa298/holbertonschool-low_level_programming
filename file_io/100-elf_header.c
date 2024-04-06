#include<elf.h>
#include<stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int elf_file;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	elf_file = open(argv[1], O_RDONLY);
	if (elf_file == -1)
	{
		fprintf(stderr, "Error: The file is not an ELF file or error\n");
		exit(98);
	}
}
