int tableauSigneVariations (void)
{
    float a, b, c, x_min, x_max, f_xmin, f_xmax, extremum, x1, x2;
    printf("\n\n a = ");
    scanf("%f", &a);
    printf(" b = ");
    scanf("%f", &b);
    printf(" c = ");
    scanf("%f", &c);
    printf("\n    Soit p(x) = %.3fx^2 + %.3fx + %.3f\n\n", a, b, c);
printf("\n=================================5. TABLEAU DE VARIATIONS DE p.=================================\n");
    printf("\n Saisir l'ensemble des valeurs x sur laquelle est definie p(x) :  I = [x_min ; x_max]\n");
    printf("\n x_min =");
    scanf("%f", &x_min);
    printf(" x_max =");
    scanf("%f", &x_max);

    /*au cas o� il y a un con pour inverser x_min et x_max
    if (x_min > x_max)
    {
        x_min=x_max;
        x_max=x_min;
    }*/

    f_xmin = a*pow(x_min,2) + b*x_min + c;
    f_xmax = a*pow(x_max,2) + b*x_max + c;
    extremum = a*pow((-b/(2*a)),2) + b*(-b/(2*a)) + c;

    if (a < 0 && x_min < (-b/(2*a)) && x_max > (-b/(2*a)))
    {
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n         x       |  %.3f                   %.3f                    %.3f  ", x_min, -b/(2*a), x_max);
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n                 |                         %.3f                          ", extremum);
    printf("\n                 |                *                    *                 ");
    printf("\n                 |             *                          *              ");
    printf("\n         p       |          *                                *           ");
    printf("\n                 |       *                                      *        ");
    printf("\n                 |    *                                            *     ");
    printf("\n                 |  %.3f                                           %.3f  ", f_xmin, f_xmax);
    printf("\n ----------------|-------------------------------------------------------");
    }

    if (a > 0 && x_min < (-b/2*a) && x_max > (-b/(2*a)))
    {
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n         x       |  %.3f                   %.3f                    %.3f  ", x_min, -b/(2*a), x_max);
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n                 |  %.3f                                           %.3f  ", f_xmin, f_xmax);
    printf("\n                 |    *                                            *     ");
    printf("\n                 |       *                                      *        ");
    printf("\n         p       |          *                                *           ");
    printf("\n                 |             *                          *              ");
    printf("\n                 |                *                    *                 ");
    printf("\n                 |                         %.3f                          ", extremum);
    printf("\n ----------------|-------------------------------------------------------");
    }

    if (a==0 && b<0 || a < 0 && x_min >= (-b/2*a) && x_max > (-b/(2*a)) || a > 0 && x_min < (-b/(2*a)) && x_max <= (-b/(2*a)))
    {
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n                 |  %.3f                                                 ", f_xmin);
    printf("\n                 |               *                                       ");
    printf("\n                 |                     *                                 ");
    printf("\n         p       |                           *                           ");
    printf("\n                 |                                 *                     ");
    printf("\n                 |                                       *               ");
    printf("\n                 |                                                 %.3f  ", f_xmax);
    printf("\n ----------------|-------------------------------------------------------");
    }

    if (a==0 && b>0 || a<0 && x_min < (-b/(2*a)) && x_max <= (-b/(2*a)) || a>0 && x_min >= (-b/(2*a)) && x_max > (-b/(2*a)))
    {
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
    printf("\n ----------------|-------------------------------------------------------");
    printf("\n                 |                                                 %.3f  ", f_xmax);
    printf("\n                 |                                       *               ");
    printf("\n                 |                                 *                     ");
    printf("\n         p       |                           *                           ");
    printf("\n                 |                     *                                 ");
    printf("\n                 |               *                                       ");
    printf("\n                 |  %.3f                                                 ", f_xmin);
    printf("\n ----------------|-------------------------------------------------------");
    }

    if (a==0 && b==0)
    {
    printf("\n p(x) est une fonction constante, donc elle n'admet aucune variation sur I et sur R.\n");
    }

    if (a==0 && b==0 & c==0)
    {
    printf("\n p(x) et l'axe des abscisses sont confondus.\n");
    }

printf("================================= TABLEAU DE SIGNE DE p.=================================\n");

    if (a>0.0)
    {
        if((pow(b,2)-(4*a*c))>0)
        {
            x1 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2.0*a);
            x2 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2.0*a);
            if(x_min>=x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            +                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_max<=x1)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            +                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<x1 && x_max>x1 && x_max<x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, x1, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            +              |             -             ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<x1 && x_max>x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f         .3%f             .3%f             %.3f  ", x_min, x1, x2, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                |                 |                    ");
                printf("\n                 |                |                 |                    ");
                printf("\n         p       |        +       |       -         |        +           ");
                printf("\n                 |                |                 |                    ");
                printf("\n                 |                |                 |                    ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<x1 && x_max>x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, x2, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            -              |             +             ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<=x1 && x_max<=x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            -                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
        }
        if((pow(b,2)-(4*a*c))==0)
        {
            x1 = -b / 2*a;
            if(x_min<x1 && x_max<x1)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, x1, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            +              0              +            ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            else
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                           +                           ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
        }
        if((pow(b,2)-(4*a*c))<0)
        {
            printf("\n ----------------|-------------------------------------------------------");
            printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
            printf("\n ----------------|-------------------------------------------------------");
            printf("\n                 |                                                       ");
            printf("\n                 |                                                       ");
            printf("\n         p       |                           +                           ");
            printf("\n                 |                                                       ");
            printf("\n                 |                                                       ");
            printf("\n ----------------|-------------------------------------------------------");
        }
    }
    if (a<0.0)
    {
        if((pow(b,2)-(4*a*c))>0)
        {
            x1 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2.0*a);
            x2 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2.0*a);
            if(x_min>=x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            -                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_max<=x1)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            -                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<x1 && x_max>x1 && x_max<x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, x1, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            -              |             +             ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<x1 && x_max>x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f         .3%f             .3%f             %.3f  ", x_min, x1, x2, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                |                 |                    ");
                printf("\n                 |                |                 |                    ");
                printf("\n         p       |         -      |        +        |        -           ");
                printf("\n                 |                |                 |                    ");
                printf("\n                 |                |                 |                    ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<x1 && x_max>x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, x2, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            +              |             -             ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(x_min<=x1 && x_max<=x2)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            -                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
        }
        if((pow(b,2)-(4*a*c))==0)
        {
            x1 = -b / 2*a;
            if(x_min<x1 && x_max<x1)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, x1, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            -              0              -            ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            else
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                           -                           ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
        }
        if((pow(b,2)-(4*a*c))<0)
        {
            printf("\n ----------------|-------------------------------------------------------");
            printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
            printf("\n ----------------|-------------------------------------------------------");
            printf("\n                 |                                                       ");
            printf("\n                 |                                                       ");
            printf("\n         p       |                           -                           ");
            printf("\n                 |                                                       ");
            printf("\n                 |                                                       ");
            printf("\n ----------------|-------------------------------------------------------");
    }
    }
 if (a==0.0)
    {
        if(b==0.0)
        {
            if (c==0.0)
            {
                printf("\n p(x) et l'axe des abscisses sont confondus.\n");
            }
            if (c>0.0)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                           +                           ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(c<0.0)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                           -                           ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
        }
        if(b<0.0)
        {
            if(-c/b>x_min && -c/b<x_max)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, -c/b, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            +              |             -             ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(-c/b>=x_max)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            -                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(-c/b<=x_min)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            +                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
        }
        if(b>0.0)
        {
            if(-c/b>x_min && -c/b<x_max)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                   .3%f                    %.3f  ", x_min, -c/b, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n         p       |            -              |             +             ");
                printf("\n                 |                           |                           ");
                printf("\n                 |                           |                           ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(-c/b>=x_max)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            +                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
            }
            if(-c/b<=x_min)
            {
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n         x       |  %.3f                                           %.3f  ", x_min, x_max);
                printf("\n ----------------|-------------------------------------------------------");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n         p       |                            -                          ");
                printf("\n                 |                                                       ");
                printf("\n                 |                                                       ");
                printf("\n ----------------|-------------------------------------------------------");
        }
}
    }
}
