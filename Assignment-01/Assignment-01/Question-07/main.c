int main()
{
    float principal, rate, years;
    float interest, amount, discount, final_amount;

    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &years);

    interest = principal * rate * years / 100;
    amount = principal + interest;
    discount = interest * 2 / 100;
    final_amount = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f", final_amount);

    return 0;
}
