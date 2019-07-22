#include <algorithm>
#include <math.h>

int solution( int X, int Y,int D) {
    double x = (double)X;
    double y = ( double)Y;
    double d = ( double)D;
    double k =  ceil((y - x)/ d);
    

    
    return (int)k;
}