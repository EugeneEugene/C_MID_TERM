#include <iostream> 
#include <math.h>   
#include <string> 
using namespace std;  

double input_real_number(char variable_name) {  
    cin.clear();
    double real_number;
    printf("Enter %c : ", variable_name); 
    while(!(cin >> real_number))
    {
        cin.clear();
        cout << "Invalid input. Try again! Variable should be a real number. \n"; 
        printf("Enter %c : ", variable_name); 
    }
    return real_number; 
}

    void user_interface() 
    { 
        double a = input_real_number('A'); 
        double b = input_real_number('B'); 
        double c = input_real_number('C');    

        Solution solution = {a, b, c}; 

        solution.solve();
        
        if (a == 0 && b == 0 && c == 0) 
        { 
            printf("Solution for equation is R.\n");  
            goto ask_user;
        } 

        if (a == 0 && b == 0 && c != 0) 
        { 
            printf("Solution for this equation doesn't exists.\n");  
            goto ask_user;
        }  

        if (a == 0 && b != 0 && c != 0) 
        { 
            double root = solution.root_of_linear_eqution;
            printf("It's a linear equation. Solution is: %f\n", root);  
            goto ask_user;
        }

        if (solution.discriminant < 0 ) 
        {  
            printf("Equation has two complex roots: "); 
            printf("First root: %f + %fi\n", solution.real_part_of_root, solution.discriminant_part);
            printf("Second root: %f - %fi\n", solution.real_part_of_root, solution.discriminant_part);
        } 

        else if (solution.discriminant > 0) 
        { 
            printf("Equation has two real roots: ");  

            printf("First root: %f\n", solution.real_root1);
            printf("Second root: %f\n", solution.real_root2);
        } 

        else 
        {
            printf("Equation has one real root: %f\n", solution.real_part_of_root); 
            
        } 
        ask_user: 
            printf("Do you want to solve another one? (y/n): "); 
            char user_answer;  
            cin >> user_answer;
            while(user_answer != 'y' && user_answer != 'n') { 
                printf("Do you want to solve another one? (y/n): ");  
                cin >> user_answer;
            } 
            if (user_answer == 'y') { 
                user_interface();
            }  
} 


