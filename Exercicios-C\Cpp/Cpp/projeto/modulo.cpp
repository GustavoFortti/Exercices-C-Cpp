// esse modulo contem funções matematicas

int fatorial(int n)
{
    int i;
    int fat = 1;
    for(i = 0; i < n; i++)
    {
        fat = fat * (i + 1);
    }
    return fat;
}

int area_quadrada(int lado)
{
    return lado * lado;
}

int area_triangulo(int lado, int base)
{
    return lado * lado;
}