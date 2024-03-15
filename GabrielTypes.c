int #include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv) {

	printf("C DATA TYPES         SIZE\n");
	printf("char                 %lu byte\n", sizeof(int8_t)); //char
	printf("unsigned char        %lu byte\n", sizeof(uint8_t)); //unsigned char
	printf("short                %lu bytes\n", sizeof(int16_t)); //short
	printf("unsigned short       %lu bytes\n", sizeof(uint16_t)); //unsigned short
	printf("int                  %lu bytes\n", sizeof(int32_t)); //int
	printf("unsigned int         %lu bytes\n", sizeof(uint32_t)); //unsigned int
	printf("long                 %lu bytes\n", sizeof(int32_t)); //long
	printf("unsigned long        %lu bytes\n", sizeof(uint32_t)); //unsigned long
	printf("long long            %lu bytes\n", sizeof(int64_t)); //long long
	printf("unsigned long long   %lu bytes\n", sizeof(uint64_t)); //unsigned long long
	printf("float                %lu bytes\n", sizeof(float)); //float
	printf("double               %lu bytes\n", sizeof(double)); //double
	printf("long double          %lu bytes\n", sizeof(long double)); //long double
	printf("bool                 %lu byte\n", sizeof(bool)); //bool
	printf("_Float64             %lu bytes\n", sizeof(_Float64)); //_FloatN
	printf("_Float64x            %lu bytes\n", sizeof(_Float64x)); //_FloatNx
	return 0;					

}
