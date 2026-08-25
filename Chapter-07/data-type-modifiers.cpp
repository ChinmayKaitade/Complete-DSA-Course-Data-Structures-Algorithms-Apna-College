#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    // ============================================================
    //              DATA TYPE MODIFIERS IN C++
    // ============================================================
    //
    // Data type modifiers change the size, range, or behavior
    // of fundamental data types.
    //
    // Common modifiers:
    //
    // 1. signed
    // 2. unsigned
    // 3. short
    // 4. long
    //
    // They are commonly used with:
    //
    // char
    // int
    // double
    //
    // ============================================================

    // ============================================================
    // 1. SIGNED
    // ============================================================
    //
    // signed means the variable can store:
    //
    //     Negative values
    //     Zero
    //     Positive values
    //
    // Example:
    //
    // signed int
    //
    // By default, int is usually signed.
    //

    cout << "========== 1. SIGNED ==========" << endl;

    signed int signedNumber = -100;

    cout << "signed int = "
         << signedNumber << endl;

    // A signed int can store both negative and positive values.

    // ============================================================
    // 2. UNSIGNED
    // ============================================================
    //
    // unsigned means the variable can store ONLY:
    //
    //     0 and positive values
    //
    // It cannot store negative numbers.
    //
    // Because there is no need to store negative values,
    // the available bits can represent a larger positive range.
    //

    cout << "\n========== 2. UNSIGNED ==========" << endl;

    unsigned int positiveNumber = 100;

    cout << "unsigned int = "
         << positiveNumber << endl;

    // This is NOT valid logically:
    //
    // unsigned int number = -10;
    //
    // An unsigned type should not be used for negative values.

    // ============================================================
    // SIGNED vs UNSIGNED
    // ============================================================

    cout << "\n--- Signed vs Unsigned Range ---" << endl;

    cout << "Signed int minimum: "
         << INT_MIN << endl;

    cout << "Signed int maximum: "
         << INT_MAX << endl;

    cout << "Unsigned int maximum: "
         << UINT_MAX << endl;

    // ============================================================
    // 3. SHORT
    // ============================================================
    //
    // short is used when we need a smaller integer type.
    //
    // Typical size:
    //
    // short int → 2 bytes
    //
    // But the exact size is implementation-dependent.
    //
    // Minimum guaranteed size of short is 16 bits.
    //

    cout << "\n========== 3. SHORT ==========" << endl;

    short int smallNumber = 1000;

    cout << "short int = "
         << smallNumber << endl;

    cout << "Size of short int = "
         << sizeof(short int)
         << " bytes" << endl;

    // ============================================================
    // 4. LONG
    // ============================================================
    //
    // long is used when we need a larger integer range.
    //
    // The size of long depends on the system/compiler.
    //
    // On many 64-bit Linux systems:
    //
    // long = 8 bytes
    //
    // On Windows:
    //
    // long = usually 4 bytes
    //
    // Therefore, NEVER assume long is always 8 bytes.
    //

    cout << "\n========== 4. LONG ==========" << endl;

    long int largeNumber = 100000L;

    cout << "long int = "
         << largeNumber << endl;

    cout << "Size of long int = "
         << sizeof(long int)
         << " bytes" << endl;

    // ============================================================
    // 5. LONG LONG
    // ============================================================
    //
    // long long provides at least 64 bits of integer storage.
    //
    // It is commonly used when very large integer values
    // are required.
    //

    cout << "\n========== 5. LONG LONG ==========" << endl;

    long long veryLargeNumber = 9000000000LL;

    cout << "long long = "
         << veryLargeNumber << endl;

    cout << "Size of long long = "
         << sizeof(long long)
         << " bytes" << endl;

    // ============================================================
    // 6. DIFFERENT COMBINATIONS
    // ============================================================
    //
    // Modifiers can be combined.
    //
    // Examples:
    //
    // signed int
    // unsigned int
    // short int
    // unsigned short int
    // long int
    // unsigned long int
    // long long int
    // unsigned long long int
    //

    cout << "\n========== 6. COMBINATIONS ==========" << endl;

    signed int a = -50;
    unsigned int b = 50;

    short int c = 100;
    unsigned short int d = 200;

    long int e = 100000L;
    unsigned long int f = 200000UL;

    long long int g = 9000000000LL;
    unsigned long long int h = 18000000000ULL;

    cout << "signed int = " << a << endl;
    cout << "unsigned int = " << b << endl;

    cout << "short int = " << c << endl;
    cout << "unsigned short int = " << d << endl;

    cout << "long int = " << e << endl;
    cout << "unsigned long int = " << f << endl;

    cout << "long long int = " << g << endl;
    cout << "unsigned long long int = " << h << endl;

    // ============================================================
    // 7. MODIFIERS WITH CHAR
    // ============================================================
    //
    // signed char and unsigned char are also valid.
    //
    // Important:
    //
    // char
    // signed char
    // unsigned char
    //
    // are distinct types.
    //
    // Whether plain char behaves as signed or unsigned
    // depends on the implementation.
    //

    cout << "\n========== 7. CHAR MODIFIERS ==========" << endl;

    char normalChar = 'A';
    signed char signedChar = -10;
    unsigned char unsignedChar = 200;

    cout << "char = "
         << normalChar << endl;

    cout << "signed char = "
         << static_cast<int>(signedChar) << endl;

    cout << "unsigned char = "
         << static_cast<int>(unsignedChar) << endl;

    // ============================================================
    // 8. LONG DOUBLE
    // ============================================================
    //
    // long can also be used with double:
    //
    // long double
    //
    // It may provide greater precision than double,
    // but its exact size and precision are implementation-dependent.
    //

    cout << "\n========== 8. LONG DOUBLE ==========" << endl;

    long double decimalNumber = 123.456789L;

    cout << "long double = "
         << decimalNumber << endl;

    cout << "Size of long double = "
         << sizeof(long double)
         << " bytes" << endl;

    // ============================================================
    // 9. SIZE OF DATA TYPES
    // ============================================================
    //
    // sizeof() tells us how much memory a type occupies
    // on the current system.
    //

    cout << "\n========== 9. SIZE OF DATA TYPES ==========" << endl;

    cout << "sizeof(short)      = "
         << sizeof(short) << " bytes" << endl;

    cout << "sizeof(int)        = "
         << sizeof(int) << " bytes" << endl;

    cout << "sizeof(long)       = "
         << sizeof(long) << " bytes" << endl;

    cout << "sizeof(long long)  = "
         << sizeof(long long) << " bytes" << endl;

    cout << "sizeof(float)      = "
         << sizeof(float) << " bytes" << endl;

    cout << "sizeof(double)     = "
         << sizeof(double) << " bytes" << endl;

    cout << "sizeof(long double)= "
         << sizeof(long double) << " bytes" << endl;

    // ============================================================
    // 10. RANGE EXAMPLES
    // ============================================================
    //
    // The exact ranges of types depend on the implementation.
    //
    // For common integer types, <climits> provides useful
    // constants.
    //

    cout << "\n========== 10. COMMON INTEGER RANGES ==========" << endl;

    cout << "SHORT_MIN = "
         << SHRT_MIN << endl;

    cout << "SHORT_MAX = "
         << SHRT_MAX << endl;

    cout << "INT_MIN = "
         << INT_MIN << endl;

    cout << "INT_MAX = "
         << INT_MAX << endl;

    cout << "UINT_MAX = "
         << UINT_MAX << endl;

    cout << "LONG_MIN = "
         << LONG_MIN << endl;

    cout << "LONG_MAX = "
         << LONG_MAX << endl;

    cout << "ULLONG_MAX = "
         << ULLONG_MAX << endl;

    // ============================================================
    // 11. IMPORTANT EXAMPLE
    // ============================================================
    //
    // Suppose we have an unsigned int:
    //

    unsigned int count = 10;

    cout << "\n========== 11. UNSIGNED EXAMPLE ==========" << endl;

    cout << "count = "
         << count << endl;

    // unsigned values are useful when negative values
    // don't make sense.
    //
    // Examples:
    //
    // Number of students
    // Array size
    // Number of items
    // Bit manipulation
    //
    // But be careful when mixing signed and unsigned values.

    // ============================================================
    // 12. QUICK REVISION
    // ============================================================
    //
    // SIGNED
    //   ↓
    // Negative + Zero + Positive
    //
    //
    // UNSIGNED
    //   ↓
    // Zero + Positive
    //
    //
    // SHORT
    //   ↓
    // Smaller integer range
    //
    //
    // LONG
    //   ↓
    // Larger integer range (compared with int where applicable)
    //
    //
    // LONG LONG
    //   ↓
    // At least 64-bit integer type
    //
    // ============================================================

    // ============================================================
    // MEMORY TRICK
    // ============================================================
    //
    // Remember:
    //
    // "SIGN tells direction,
    //  UNSIGNED removes negative,
    //  SHORT makes it smaller,
    //  LONG makes the range longer."
    //
    // SIGNED   → - + 0
    // UNSIGNED → 0 +
    // SHORT    → Smaller
    // LONG     → Larger
    //
    // ============================================================

    cout << "\n========== END ==========" << endl;

    return 0;
}