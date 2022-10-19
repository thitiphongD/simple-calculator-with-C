#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
    float valueOne;
    float valueTwo;
    char operator;
    float result;

    printf("Enter calculation:\n\n");
    scanf("%f %c %f", &valueOne, &operator, & valueTwo);

    switch(operator)
        {
            case '/': result = valueOne/valueTwo;
                break;
            case '*': result = valueOne*valueTwo;
                break;
            case '+': result = valueOne+valueTwo;
                break;
            case '-': result = valueOne-valueTwo;
                break;
            case '^': result = pow(valueOne,valueTwo);
                break;
            case ' ': result = sqrt(valueTwo);
                break;
            default: goto fail;
    }
  
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, result);
    goto exit;
    fail:
        printf("Fail.\n");
    exit:
        return 0;
}