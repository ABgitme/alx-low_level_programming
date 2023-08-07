#include "main.h"
#include <elf.h>
#include <sys/mman.h>

#define ELF_MAGIC "\177ELF\0"
#define ELF32_MAGIC "\177ELF32\0"
#define ELF64_MAGIC "\177ELF64\0"

struct elf_header {
    char magic[4];
    uint16_t class;
    uint16_t data;
    uint32_t version;
    uint8_t osabi;
    uint8_t abiversion;
    uint32_t type;
    uintptr_t entrypoint;
};

static void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

static int read_elf_header(FILE *file) {
    struct elf_header header;
    size_t bytes_read;
    bytes_read = fread(&header, sizeof(header), 1, file);
    if (bytes_read != 1) {
        print_error("Failed to read ELF header");
    }
    return header.magic[0] == 'E' && header.magic[1] == 'L' && header.magic[2] == 'F';
}

int main(int argc, char **argv) {
    	struct elf_header header;
    	size_t bytes_read;
	FILE *file;

	if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }
    file = fopen(argv[1], "rb");
    if (!file) {
        print_error("Failed to open file");
    }
    /* Check for ELF Magic number*/
    if (!read_elf_header(file)) {
        print_error("Not an ELF file");
    }
    /* Read the rest of the header*/
    bytes_read = fread(&header, sizeof(header), 1, file);
    if (bytes_read != 1) {
        print_error("Failed to read ELF header");
    }
    /*Print the header information*/
    printf("Magic: %c%c%c%c\n", header.magic[0], header.magic[1], header.magic[2], header.magic[3]);
    printf("Class: %u\n", header.class);
    printf("Data: %u\n", header.data);
    printf("Version: %u\n", header.version);
    printf("OS/ABI: %u\n", header.osabi);
    printf("ABI Version: %u\n", header.abiversion);
    printf("Type: %u\n", header.type);
    printf("Entry Point Address: 0x%lx\n", header.entrypoint);
    fclose(file);
    return 0;
}
