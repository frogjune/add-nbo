#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h> // reverse

int main(int argc, char** argv){

    FILE *fs = fopen(argv[1], "rb"); // file open, first, second
    FILE *sc = fopen(argv[2], "rb");

    uint32_t f, s, sum;

    fread(&f, sizeof(uint32_t),1,fs);
    fread(&s, sizeof(uint32_t),1,sc);

    uint32_t f1 = ntohl(f);
    uint32_t s1 = ntohl(s);

    sum = f1 + s1;

    printf("%d(%x) + %d(%x) = %d(%x)", 
	f1, f1, s1, s1, sum, sum); // %d Dec, %x Hex
    
    fclose(fs);  // file off
    fclose(sc);

    return 0;
}
