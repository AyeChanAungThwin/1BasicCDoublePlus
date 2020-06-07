Primitive types: boolean, int, char, float, double, void, wild character

4 bits = 1 nibble
2 nibble = 8 bits
8 bits = 1 byte
2 bytes = 1 word
4 bytes = double word

Everything starts from nothing i.e., ZERO!

<Modifiers>
signed = can have both positive or negative values. (by default)
unsigned = must contains only positive values.
short = use half of the existing bits.
long = use twice of the existing bits.

<Notes>
float and double cannot have signed or unsigned types.

Integers are all depend from the architecture. Nothing stops an implementation to have short, int and long all 32 bit integers.

There are three different floating point data types: float, double, and long double. As with integers, C++ does not define the actual size of these types (but it does guarantee minimum sizes). On modern architectures, floating point representation almost always follows IEEE 754 binary format. In this format, a float is 4 bytes, a double is 8, and a long double can be equivalent to a double (8 bytes), 80-bits (often padded to 12 bytes), or 16 bytes.

Floating point data types are always signed (can hold positive and negative values).
