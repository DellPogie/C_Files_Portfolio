#include <stdio.h>

int main()
{
    /* variable definition */
    int _int;
    float _float;
    double _double;
    char _char;
    
    /* actual initialization */ 
    _int = 10;
    _float = 10.1;
    _double = 10.1;
    _char = 'A';

    /* print values */
    printf("int = %d\n", _int);
    printf("float = %f\n", _float);
    printf("double = %lf\n", _double);
    printf("char = %c", _char);

    return 0;
}