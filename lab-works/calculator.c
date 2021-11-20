int main()
{
    // Calculator

    char operatorr;
    int number1, number2, result;

    printf("Enter a operator ('+','-','/','*'):");
    scanf("%c", &operatorr);

    printf("Enter operands:");
    scanf("%d %d", &number1, &number2);

    switch(operatorr){
           case '+': printf("Result = %d", (number1+number2));
           break;
           case '-': printf("Result = %d", (number1-number2));
           break;
           case '/': printf("Result = %d", (number1/number2));
           break;
           case '*': printf("Result = %d", (number1*number2));
           break;
           }
}
