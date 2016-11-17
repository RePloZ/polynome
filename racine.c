int racine(void)
{
float x1, x2, delta, a, b, c, Im, Re;
printf("\n Veuillez saisir les reels a, b et c sous forme decimale.\n\n");
    printf(" a = ");
    scanf("%f", &a);
    printf(" b = ");
    scanf("%f", &b);
    printf(" c = ");
    scanf("%f", &c);
printf("\n    Soit p(x) = %.3fx^2 + %.3fx + %.3f\n\n", a, b, c);

printf("==============1. RACINES DES EQUATIONS DU SECOND DEGRE - RESOLUTION DE p(x)=0.==============\n");
delta = pow(b,2)-(4.0*a*c);
printf("\n----------------------------------------------------\n Discriminant DELTA = %.3f\n----------------------------------------------------\n", delta);

if (a==0.0 && b==0.0 && c==0.0) // Cas où : 0x^2 + 0x + 0 = 0
    printf("----------------------------------------------------\n Tout nombre reel est une solution de cette equation.\n----------------------------------------------------\n");
  else if (a==0.0 && b==0.0)  // Cas où 0x^2 + 0x + c = 0 (avec c#0) impossible
    printf(" Cette equation ne possede pas de solutions.\n");
  else if (a==0.0) //Cas où le monôme degré 2 disparait, donc il s'agit de résoudre une équation de degré 1.
     {
       printf("----------------------------------------------------\n La solution de cette equation du premier degre est : x = %.4f\n----------------------------------------------------\n", (double)-c/b);
     }

if (delta == 0.0 && a!=0.0 && b!=0.0)
{
x1 = -b /(2.0*a);
printf("----------------------------------------------------\n Le polynome admet donc une racine double x0 = %.2f\n----------------------------------------------------\n", x1);
}
if (delta > 0.0 && a!=0.0 && b!=0.0)
{
x1 = (-b - sqrt(delta))/(2.0*a);
x2 = (-b + sqrt(delta))/(2.0*a);
printf("----------------------------------------------------\n Le polynome admet donc deux racines reelles distinctes, a savoir :\n\n x1 = %.2f\n x2 = %.2f\n----------------------------------------------------\n", x1, x2);
}
if (delta < 0.0 && a!=0.0 && b!=0.0)
{
Re = -b/(2.0*a);
Im = (sqrt(-delta)/(2.0*a));
printf("----------------------------------------------------\n Le polynome admet deux racines complexes conjuguees,\n\n z1 = %f + %fi\n z2 = %f - %fi\n----------------------------------------------------\n", Re, Im, Re, Im);
}
return 0;
}

