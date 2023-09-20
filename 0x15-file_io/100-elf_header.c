#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>

#define ELF_MAGIC_SIZE 16

typedef struct {
    unsigned char e_ident[ELF_MAGIC_SIZE];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;
void print_elf_header(ElfHeader *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < ELF_MAGIC_SIZE; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:ELF%d\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("  Data:2's complement, %s endian\n", header->e_ident[5] == 1 ? "little" : "big");
	printf("  Version:%u (current)\n", header->e_ident[6]);
	printf("  OS/ABI:");
	switch (header->e_ident[7])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 1:
			printf("UNIX - HP-UX\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		case 3:
			printf("UNIX - Linux\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_ident[7]);
			break;
	}
	printf("  ABI Version:%u\n", header->e_ident[8]);
	printf("  Type:");
	switch (header->e_type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_type);
			break;
	}
	printf("  Entry point address:0x%lx\n", header->e_entry);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return 98;
	}
	ElfHeader header;
	if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return 98;
	}
	if (memcmp(header.e_ident, "\x7f\x45\x4c\x46", ELF_MAGIC_SIZE) != 0)
	{
		fprintf(stderr, "%s is not an ELF file\n", filename);
		close(fd);
		return 98;
	}
	
	print_elf_header(&header);
	close(fd);
	return 0;
}
