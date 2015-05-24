#include <iostream> //preprocessor directives (in order to load certain libraries)[iostream=input output stream]

using namespace std;//iostream library can be found in namespace std (namespace is a logical grouping of a set of libraries)
/* [many libraries such as iostream fit very well in std namespace]{by putting libraries in namespace we can reuse the names for functions without
   worrying about conflict*/

int main()//main function

{//starting the body of main function

    cout/*output for the console*/<</*'put two' operator(must be there after "cout")*/"Hello world!"/*string(data type)*/;//end of statement
    //(just like fullstop.)

    return 0;//return value for function (return value 0 unless theres a problem)[when return value is zero then the function is running properly]

}//ending the body of main function
