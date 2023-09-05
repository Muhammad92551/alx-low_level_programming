#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// Define the ELF header structure
typedef struct {
    uint8_t e_ident[16];
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

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
        return 1;
    }

    const char *elf_file_path = argv[1];
    FILE *elf_file = fopen(elf_file_path, "rb");
    
    if (!elf_file) {
        perror("Error opening file");
        return 1;
    }

    ElfHeader elf_header;

    // Read the ELF header into the structure
    if (fread(&elf_header, sizeof(ElfHeader), 1, elf_file) != 1) {
        perror("Error reading ELF header");
        fclose(elf_file);
        return 1;
    }

    // Check for the ELF magic number
    if (memcmp(elf_header.e_ident, "\x7F""ELF", 4) != 0) {
        fprintf(stderr, "Not an ELF file\n");
        fclose(elf_file);
        return 1;
    }

    // Display the ELF header information
    printf("ELF Header:\n");
    printf("  Magic:               %s\n", elf_header.e_ident);
    printf("  Class:               %d\n", elf_header.e_ident[4]);
    printf("  Data:                %d\n", elf_header.e_ident[5]);
    printf("  Version:             %d\n", elf_header.e_ident[6]);
    printf("  OS/ABI:              %d\n", elf_header.e_ident[7]);
    printf("  ABI Version:         %d\n", elf_header.e_ident[8]);
    printf("  Type:                0x%x\n", elf_header.e_type);
    printf("  Machine:             0x%x\n", elf_header.e_machine);
    printf("  Version:             0x%x\n", elf_header.e_version);
    printf("  Entry point address: 0x%lx\n", elf_header.e_entry);
    printf("  Start of program headers:      %lu (bytes into file)\n", elf_header.e_phoff);
    printf("  Start of section headers:      %lu (bytes into file)\n", elf_header.e_shoff);
    printf("  Flags:               0x%x\n", elf_header.e_flags);
    printf("  Size of this header: %d (bytes)\n", elf_header.e_ehsize);
    printf("  Size of program headers:       %d (bytes)\n", elf_header.e_phentsize);
    printf("  Number of program headers:     %d\n", elf_header.e_phnum);
    printf("  Size of section headers:       %d (bytes)\n", elf_header.e_shentsize);
    printf("  Number of section headers:     %d\n", elf_header.e_shnum);
    printf("  Section header string table index: %d\n", elf_header.e_shstrndx);

    fclose(elf_file);
    return 0;
}

