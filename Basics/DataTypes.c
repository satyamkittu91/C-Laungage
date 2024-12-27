#include <stdio.h> // doesn't support boolean
#include <stdbool.h> // for boolean values

int main() {
    
    char a = 'A';               // Single Character %A
    char b[] = "Language";        // String, Array of character %s

    float pi = 3.141592;         // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15-16 digits %f, They are more accurate and precise
    long double ld = 3.1415926535897932384626433832795L; // 16 bytes (128 bits of precision) 19-20 digits %Lf
    // L is used to specify that the number is a long double
    /* the compiler (GCC) and the runtime library (Microsoft's) are implemented by different groups that happen to have 
    different ideas about how the type long double should be 
    represented. (gcc uses 128 bits for long double; Microsoft uses 64 bits, with the same representation as double.)*/

    int i = 10;                 // 4 bytes (32 bits) (-2,147,483,648 to +2,147,483,647)%d
    unsigned int ui = 10;       // 4 bytes (32 bits) %u

    long long int li = 9223372036854775807; // 8 bytes (64 bits) (-9,223,372,036,854,775,808 to +9,223,372,036,854,775,807) %lld
    unsigned long long int uli = 18446744073709551615ULL; // 8 bytes (64 bits) (0 to +18,446,744,073,709,551,615) %llu
    // ULL is used to specify that the number is an unsigned long long int

    short int h = 32676;        //2 bytes (16 bits) (-32,768 to +32,767) %d
    unsigned short int usi = 65535;     // 2 bytes (16 bits) (0 to +65,535) %d

    bool e = true;              // 1 byte (8 bits) (true or false) %d

    char f = 120;               // 1 byte (-128 to +127) %d
    unsigned char g = 255;      // 1 byte (0 to 255) %d or %cfv

    long l = 10;                // 4 bytes (32 bits) %ld
    long long ll = 10;          // 8 bytes (64 bits) %lld
    unsigned long ul = 10;      // 4 bytes (32 bits) %lu
    unsigned long long ull = 10; // 8 bytes (64 bits) %llu

    // Print statements
    // Format Specifiers
    printf("char a: %c\n", a);
    printf("char b: %s\n", b);
    printf("float pi: %f\n", pi);
    printf("double d: %f\n", d);
    printf("long double ld: %Lf\n", ld);
    printf("int i: %d\n", i);
    printf("unsigned int ui: %u\n", ui);
    printf("long long int li: %lld\n", li);
    printf("unsigned long long int uli: %llu\n", uli);
    printf("short int h: %d\n", h);
    printf("unsigned short int usi: %d\n", usi);
    printf("bool e: %d\n", e);
    printf("char f: %d\n", f);
    printf("unsigned char g: %d\n", g);
    printf("long l: %ld\n", l);
    printf("long long ll: %lld\n", ll);
    printf("unsigned long ul: %lu\n", ul);
    printf("unsigned long long ull: %llu\n", ull);

    return 0;
}