#include <iostream> 
#include <math.h>  
#include <string> 
#include "equation_logic.h" 
using namespace std;  

    void Solution::solve() 
    {
        real_part_of_root = find_real_part_of_root();  
        discriminant = find_discriminant();       
        discriminant_part = find_discriminant_part();  
        real_root1 =  find_real_root();   
        real_root2 = real_part_of_root - discriminant_part; 
        root_of_linear_eqution = solve_linear_equation();

    }

    double Solution::solve_linear_equation() 
    { 
        return -c/b;
    } 
    
    double Solution::find_discriminant() 
    { 
        return (b*b) - (4*a*c); 
    }  

    double Solution::find_real_part_of_root() {  
        double result = b/(2*a) == 0 ? b/(2*a) : -1 * b/(2*a);
        return  result; 
    } 

    double Solution::find_real_root() 
    {
        return real_part_of_root + discriminant_part;
    }

    double Solution::find_discriminant_part() 
    { 
        return sqrt(abs(discriminant))/(2*a);
    }


