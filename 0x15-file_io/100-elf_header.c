#include "main.h"
#include <elf.h>
#include <sys/mman.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct Elf64_Ehdr
{
    unsigned char e_ident[16];
    Elf64_Off e_phoff;
    Elf64_Off e_shoff;
    Elf64_Word e_flags;
    Elf64_Half e_ehsize;
    Elf64_Half e_phentsize;
    Elf64_Half e_phnum;
    Elf64_Half e_shentsize;
    Elf64_Half e_shnum;
    Elf64_Half e_shstrndx;
};

void display_elf_header(const char *elf_filename)
{
    size_t bytes_read;
    struct Elf64_Ehdr elf_header;
    /*Open the ELF file.*/
    FILE *fp = fopen(elf_filename, "rb");
    if (fp == NULL)
    {
        printf("Error: Could not open file %s\n", elf_filename);
        exit(98);
    }

    /*Seek to the start of the ELF header.*/
    if (lseek(fileno(fp), 0, SEEK_SET) < 0)
    {
        printf("Error: Could not seek to the start of the ELF header\n");
        exit(98);
    }

    /*Read the ELF header.*/

    bytes_read = fread(&elf_header, sizeof(elf_header), 1, fp);
    if (bytes_read != 1)
    {
        printf("Error: Could not read the ELF header\n");
        exit(98);
    }

    /*Display the ELF header information.*/
    printf("Magic: %02x %02x %02x %02x %02x %02x %02x %02x\n",
           elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2],
           elf_header.e_ident[3], elf_header.e_ident[4], elf_header.e_ident[5],
           elf_header.e_ident[6], elf_header.e_ident[7]);
    printf("Class: %c\n", elf_header.e_ident[EI_CLASS]);
    printf("Data: %c\n", elf_header.e_ident[EI_DATA]);
    printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", elf_header.e_ident[EI_PAD]);
    printf("Entry point address: 0x%x\n", elf_header.e_ident[EI_NIDENT]);

    /*Close the ELF file.*/
    fclose(fp);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: elf_header elf_filename\n");
        exit(98);
    }

    display_elf_header(argv[1]);

    return 0;
}
