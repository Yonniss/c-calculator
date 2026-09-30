#include <stdio.h>
#include <stdlib.h>

long int sum;
long int num1;
long int num2;
float divis;
int main(int argc, char *argv[]) {
    
    if (argc == 4) {
        char *fin; 
        num1 = strtol(argv[1], &fin, 10);
        if (fin == argv[1] || *fin != '\0') {
            printf("❌ ERROR: '%s' tiene texto inválido\n", fin);
            return 1;
        }    
        num2 = strtol(argv[3], &fin, 10);
        if (fin == argv[3] || *fin != '\0') {
            printf("❌ ERROR: '%s' tiene texto inválido\n", fin);
            return 1;
        }  
        switch (argv[2][0]) {
            case '+':
                sum = num1 + num2;
                printf("%ld\n", sum);
                break;
        
            case '-':
                sum = num1 - num2; 
                printf("%ld\n", sum);
                break;
            
            case 'x':
                sum = num1 * num2;
                printf("%ld\n", sum);
                break;

            case '/':
                if (num2 == 0){
                    printf("Error.\n");
                    return 1;               
                }else{ 
                    divis = (float)num1 / num2;
                    printf("%.2f\n", divis);
                }
                break;
        
            default:
                printf("Thats not a valid operator\n");
                return 1;
        }
    }else {
        printf("Thats not a valid operation.\n");
        return 1;
    }

    
    return 0;
}   
