#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("_______________________________________________________________________________\n");
	printf("Data Type                        Size    Format specifier     Range            \n");
   	printf("_______________________________________________________________________________\n");
	printf("Char                              %d         %%c              %d to %d\n      ",
		sizeof(char),SCHAR_MIN ,SCHAR_MAX);
	printf("Unsigned char                     %d          %%c              %d to %d\n      ",
		sizeof(char),0,UCHAR_MAX);

	printf("Short int                         %hd        %%hd             %d to %d\n      ",
		sizeof(short),SHRT_MIN,SHRT_MAX);
	printf("Unsigned int short                %hu         %%hu              %d to %d\n      ",
		sizeof(short),0,USHRT_MAX);

	printf("Int                               %d          %%d              %d to %d\n      ",
		sizeof(int),INT_MIN,INT_MAX);

	printf("Unsigned int                      %lu          %%u              %d to %d\n      ",
		sizeof(unsigned int),0,UINT_MAX);

	printf("Long int                          %ld          %%ld            %ld to %d\n      ",
		sizeof(long int),LONG_MIN,LONG_MAX);


	printf("Unsigned long int                 %lu          %%lu            %ld to %ld\n      ",
		sizeof(long unsigned int),0,UCHAR_MAX);

	printf("Float                             %ld          %%f              %5lf to %5lf\n      ",
		sizeof(float),FLT_MIN,FLT_MAX);
	
	printf("Double                            %ld          %%lf              %5lf to %5lf\n      ",
		sizeof(double),DBL_MIN,DBL_MAX);

	printf("Long double                       %ld          %%LF             %5lf to %5lf\n      ",
		sizeof(long double),0,UCHAR_MAX);

	return 0;


}
