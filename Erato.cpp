#include <iostream> 
  
void setUpAnArray(bool* array, bool value, int size_of_arr) 
{ 
    array[0] = false; 
    array[1] = false; 
    printf("size: %i\n", size_of_arr);
    for (int i = 2; i < size_of_arr; i++) 
    { 
        array[i] = value;
    }
}

void sieveOfEratosthenes(int n) 
{  
    bool isPrime[n+1];  
    setUpAnArray(isPrime, true, n+1);
    for (int j=2; j*j<=n; j++) 
    { 
        if (isPrime[j] == true) 
        { 
            for (int i=j*2; i<=n; i += j) 
                isPrime[i] = false; 
        }  
    }  

    for (int i = 0; i<=n; i++) { 
        if(isPrime[i]) 
            printf("%i\n", i);
    }
}  

int main() { 
    sieveOfEratosthenes(30);
}