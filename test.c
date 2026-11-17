#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    double x, y, scale;
    while(1)
    {
        // 爱心放大
        for(scale = 1.0; scale < 1.4; scale += 0.02)
        {
            system("cls");
            for (y = 1.2; y > -1.2; y -= 0.08)
            {
                for (x = -1.2; x < 1.2; x += 0.04)
                {
                    double nx = x / scale;
                    double ny = y / scale;
                    // 经典爱心公式 (x²+y²-1)³ - x²y³ < 0
                    double temp = nx*nx + ny*ny - 1;
                    if( temp*temp*temp - nx*nx * pow(ny,3) < 0 )
                    {
                        printf("*");
                    }
                    else
                    {
                        if(x > -0.5 && x < 0.5 && y > -0.2 && y < 0.2)
                            printf("I love you");
                        else
                            printf(" ");
                    }
                }
                printf("\n");
            }
            Sleep(40);
        }
        //爱心缩小
        for(scale = 1.4; scale > 1.0; scale -= 0.02)
        {
            system("cls");
            for (y = 1.2; y > -1.2; y -= 0.08)
            {
                for (x = -1.2; x < 1.2; x += 0.04)
                {
                    double nx = x / scale;
                    double ny = y / scale;
                    double temp = nx*nx + ny*ny - 1;
                    if( temp*temp*temp - nx*nx * pow(ny,3) < 0 )
                    {
                        printf("*");
                    }
                    else
                    {
                        if(x > -0.5 && x < 0.5 && y > -0.2 && y < 0.2)
                            printf("I love you");
                        else
                            printf(" ");
                    }
                }
                printf("\n");
            }
            Sleep(40);
        }
    }
    return 0;
}
