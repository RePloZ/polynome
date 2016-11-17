int deriPrimiCano(void)
{
float a, b, c;
    printf("\n\n a = ");
    scanf("%f", &a);
    printf(" b = ");
    scanf("%f", &b);
    printf(" c = ");
    scanf("%f", &c);
printf("\n    Soit p(x) = %.3fx^2 + %.3fx + %.3f\n\n", a, b, c);
printf("=====================2. DERIVEE DE p(x) - EXPRESSION ALGEBRIQUE DE p'(x).=====================\n");
printf("\n    La fonction p(x) est derivable en tant que fonction polynome sur R.\n");
printf("----------------------------------------------------\n Donc p'(x) = %.4fx + %.4f\n----------------------------------------------------\n\n\n", a*2.0, b);

printf("================3. PRIMITIVES DE p(x) - EXPRESSION ALGEBRIQUE GENERALE DE P(x).================\n");
printf("\n    La fonction p(x) admet comme primitives : sur R.\n");
printf("----------------------------------------------------\n Donc P(x) = %.4fx^3 + %.4fx^2 + %.4fx + C     (ou C est une constante)\n----------------------------------------------------\n\n\n", a/3.0, b/2.0, c);
printf("==================================4. FORME CANONIQUE DE p(x).==================================\n");
printf("\n    La forme canonique de p(x) est :\n----------------------------------------------------\n p(x) = %.4f(x - %.4f)^2 + %.4f\n----------------------------------------------------\n", a, -b/(2*a), -(pow(b,2)-4*a*c)/(4*a));
return 0;
}
