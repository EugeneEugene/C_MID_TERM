#ifndef EUATION_LOGIC_H
#define EUATION_LOGIC_H 


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
void solve();
double solve_linear_equation();  
double find_discriminant(); 
double find_real_part_of_root(); 
double find_real_root(); 
double find_discriminant_part(); 
};
#endif