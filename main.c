#include <stdio.h>
#include <math.h>

void circle()
{
    float x, y, r, p, s;
    printf("Enter (x, y, radius) for circle: ");
    scanf(" circle(%f, %f, %f)", &x, &y, &r);
    if (r > 0)
    {
        p = M_PI * r * 2;
        s = M_PI * r * r;
        printf("Perimetr: %.2f\nS: %.2f \n", s, p);
    }
    else
    {
        printf("Error\n");
    }
}

void triangle()
{
    float a, b, c, p, p1, s;
    printf("Enter (a, b, c) sides for triangle: ");
    scanf(" triangle(%f, %f, %f)", &a, &b, &c);
    if (a > 0 || b > 0 || c > 0)
    {
        if (a <= b + c && b <= c + a && c <= a + b)
        {
            p = a + b + c;
            p1 = p / 2;
            s = sqrt(p1 * (p1-a) * (p1-b) * (p1-c));
            printf("Perimetr: %.2f\nS: %.2f\n", p, s);
        }
        else
        {
            printf("Error\n");
        }
    }
    else
    {
        printf("Error\n");
    }
}

void poligon()
{
    float a, b, c, d, p, s;
    printf("Enter (a, b, c, d) for poligon: ");
    scanf(" poligon(%f, %f, %f, %f)", &a, &b, &c, &d);
    if (a > 0 &&  b > 0 && c > 0 && d > 0)
    {
        if (a == c && b == d )
        {
            p = (a + b) * 2;
            s = a * b;
            printf("Perimetr: %.2f\nS: %.2f\n", p, s);
        }
        else
        {
            printf("Error\n");
        }
    }
    else
    {
        printf("Error\n");
    }
}

int main() 
{
	int a;
	while(1)
	{
		printf("1. Cirle\n2. Triangle\n3. Poligon\nChoose your figure: ");
		scanf(" %d", &a);
		if (a == 1)
		{
			circle();
			break;
		}
		if (a == 2)
		{
			triangle();
			break;
		}
		if (a == 3)
		{
			poligon();
			break;
		}
		else
		{
		printf("Error\n");
		return 0;
		}
	}
	return 0;
}
