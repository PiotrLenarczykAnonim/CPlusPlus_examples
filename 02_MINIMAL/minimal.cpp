//          ./a.out 1122q
unsigned ind, i;
int main( int argc, char* argv[] ) 
{
    char forkNo[ 20 ] = {'0'}; int argSize = 0;//needs fork handle; example fork number = 1122
    for ( ind = 0; ind < 20; ind++ )
        if ( argv[ argc - 1 ][ ind ] != 'q' )
            forkNo[ ind ] = argv[ argc - 1 ][ ind ];
        else
            argSize = ind;
    int vecSize = 10; float vec[ vecSize ] = { 0.21 }; //sample vector
    for ( i = 0; i < vecSize; i++ )
        vec[ i ] *= vec[ i ] + i;
    //further fork calculations...
    
    return 0;
}

//P.S. note quite useful YMM 256 bits registers used statically.

