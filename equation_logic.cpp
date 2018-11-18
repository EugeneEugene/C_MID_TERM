#include <iostream> 
#include <math.h>  
#include <string> 
using namespace std;  


struct Solution 
{ 
    double a; 
    double b; 
    double c; 
    double real_part_of_root;
    double discriminant; 
    double discriminant_part; 
    double real_root1; 
    double real_root2;
    double root_of_linear_eqution;

    void solve() 
    {
        real_part_of_root = find_real_part_of_root();  
        discriminant = find_discriminant();       
        discriminant_part = find_discriminant_part();  
        real_root1 =  find_real_root();   
        real_root2 = real_part_of_root - discriminant_part; 
        root_of_linear_eqution = solve_linear_equation();

    }

    double solve_linear_equation() 
    { 
        return -c/b;
    } 
    
    double find_discriminant() 
    { 
        return (b*b) - (4*a*c); 
    }  

    double find_real_part_of_root() {  
        double result = b/(2*a) == 0 ? b/(2*a) : -1 * b/(2*a);
        return  result; 
    } 

    double find_real_root() 
    {
        return real_part_of_root + discriminant_part;
    }

    double find_discriminant_part() 
    { 
        return sqrt(abs(discriminant))/(2*a);
    }
};

