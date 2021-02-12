// To be defined in ASM as public procedures
extern void putchar(char data);
extern char getchar(void);

// To be defined in C
void gets(char *str);
void puts(char *str);
void itoa(unsigned int number, char* str, unsigned char base);
unsigned int atoi(char *str);

#ifndef TEST_HARNESS
int main(void)
{
    // Insert Code here
    return 0;
}
#endif // main()
