#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//ex053

/*
int main(){

    float c, l, p, ct;

    printf("***Calculo do preço e comprimento de tela***\n\n");

    printf("\nQual o comprimento do terreno em m: ");
    scanf("%f", &c);
    printf("Qual a largura do terreno em m: ");
    scanf("%f", &l);
    printf("Qual o valor do metro de tela: R$");
    scanf("%f", &p);

    ct = 2*(c+l);

    printf("\nPara cercar %.2fm de terreno, voce vai gastar R$%.2f.\n\n\n", ct, ct*p);

    return 0;
}
*/


//ex052

/*
int main(){

    float apt, a1, a2, a3,  ap1, ap2, ap3, vp;

    printf("***Calculo da proporção do premio da loteria pela aposta***\n\n");
    printf("Qual o valor do premio: R$");
    scanf("%f", &vp);
    printf("Qual o valor da aposta do primeiro jogador: R$");
    scanf("%f", &a1);
    printf("Qual o valor da aposta do segundo jogador: R$");
    scanf("%f", &a2);
    printf("Qual o valor da aposta do terceiro jogador: R$");
    scanf("%f", &a3);

    apt = a1+a2+a3;
    ap1 = ((a1*100/apt)/100);
    ap2 = ((a2*100/apt)/100);
    ap3 = ((a3*100/apt)/100);

    printf("\nO primeiro jogador que apostou R$%.2f ira receber R$%.2f do premio.\n", a1, vp*ap1);
    printf("O segundo jogador que apostou R$%.2f ira receber R$%.2f do premio.\n", a2, vp*ap2);
    printf("O terceiro jogador que apostou R$%.2f ira receber R$%.2f do premio.\n\n", a3, vp*ap3);

    return 0;
}
*/


//ex051

/*
int main(){

    int x1 = 0, x2, y1 = 0, y2;
    float d;

    printf("***Calculo entre distancia de coordenadas***\n\n");
    printf("Informe o valor das coordenada x: ");
    scanf("%i", &x2);
    printf("Informe o valor das coordenada y: ");
    scanf("%i", &y2);

    d = sqrtf(pow(x2-x1,2)+pow(y2-y1,2));

    printf("\nA distancia entre as coordenadas %i,%i e 0,0 e igual a: %f\n\n", x2, y2, d);

    return 0;
}
*/

//ex050

/*
int main(){

    int aat, am, ida;

    printf("Em que anos estamos: ");
    scanf("%i", &aat);
    printf("Qual a sua idade: ");
    scanf("%i", &ida);

    printf("Voce nasceu em: %i", aat-ida);

    return 0;
}
*/


//ex049

/*
int  main () {

   int h, m, s, d, hs, nh, nm, ns;

   printf("***Calculo hora final da experiencia***\n\n");

   printf("Digite a hora inicial da experiencia: ");
   scanf("%i", &h);
   printf("Digite o minuto inicial da experiencia: ");
   scanf("%i", &m);
   printf("Digite os segundos iniciais da experiencia: ");
   scanf("%i", &s);
   printf("\nQual a duraçao da experiencia em segundos: ");
   scanf("%i", &d);


   hs = ((h * 3600) + (m * 60) + s + d);
   nh = hs / 3600;
   nm = (hs % 3600) / 60;
   ns = (hs % 3600) % 60;


   printf("\n\nO horario de termino da esperiencia sera: %ih:%im:%is\n\n", nh, nm, ns);

   return 0;
}
*/


//ex048

/*
int main(){

    int n, h, m, s;

    printf("***Conversao de numoero inteiro em hora, minutos e segundos***\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    h = n / 3600;
    m = n % 3600 / 60;
    s = (n % 3600) % 60 % 60;

    printf("\n\nO numero digitado corresponde a %ih:%im:%is.\n\n", h, m, s);

    return 0;
}
*/


//ex047

/*
int main(){

    int n, nm, nc, nd, nu;

    printf("Digite um numero interio entre 1000 e 9999: ");
    scanf("%i", &n);

    nm = n / 1000;
    nc = n % 1000 / 100;
    nd = n % 1000 % 100 / 10;
    nu = n % 1000 % 100 % 10;

    printf("\n\nA unidade de milhar do numero e: %i\n", nm);
    printf("A unidade de centena do numero e: %i\n", nc);
    printf("A unidade de dezena do numero e: %i\n", nd);
    printf("E o coreespontende a unidade e: %i\n", nu);

    return 0;
}
*/


//ex046

/*
int main(){

    int n, nc, nd, nu;

    printf("Digite um numero interio entre 100 e 999: ");
    scanf("%i", &n);

    nc = n / 100;
    nd = n % 100 / 10;
    nu = n % 100 % 10;

    printf("\n\nNumero_lido: %i\n", n);
    printf("Numero_gerado: %i%i%i\n\n", nu, nd, nc);

    return 0;
}
*/


//ex045

/*
int main(){
    char c;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &c);

    printf("\n\nA letra digitada convertida para minusculo e: %c\n\n", c + 32);

    return 0;
}
*/


//ex044

/*
int main(){
    float hd, ht;
    int qtd;

    printf("***Calculo da quantidade de degraus***\n\n");
    printf("Qual a altura do degrau: ");
    scanf("%f", &hd);
    printf("Qual a altura que se deseja alcançar subindo a escada: ");
    scanf("%f", &ht);

    qtd = ht / hd;

    printf("A quantidade de degraus que o usuario deve subir e: %d\n\n", qtd);

    return 0;
}
*/


//ex043

/*
int main(){

    float vt;

    printf("***Calculo valor para venda***\n\n");
    printf("Qual o valor total do produto: R$");
    scanf("%f", &vt);

    printf("-O total a pagar a vista com desconto: %.2f.\n", vt*0.9);
    printf("-O valor de cada parcela no parcelamento de 3x sem juros: R$%.2f.\n", vt/3);
    printf("-A comissão do vendedor, no caso da venda ser a vista: R$%.2f.\n", (vt*0.9)*0.05);
    printf("-A comissão do vendedor, no caso da venda ser parcelada: R$%.2f.\n\n", vt*0.05);

    return 0;
}
*/


//ex042

/*
int main(){

    float sb;

    printf("***Calculo de salario***\n\n");
    printf("Qual o valor do salário base: R$");
    scanf("%f", &sb);

    printf("O salario que o funcionario tem a receber e: R$%.2f.\n\n", (sb*1.05)-(sb*0.07));

    return 0;
}
*/


//ex041

/*
int main(){

    float vh, nh;

    printf("***Calcular salario***\n\n");
    printf("Qual o valor da hora de trabalho: R$");
    scanf("%f", &vh);
    printf("Qual a quantidade de horas trabalhadas: ");
    scanf("%f", &nh);

    printf("O salário pago ao funcionario e de: R$%.2f.\n\n", vh*nh*1.1);

    return 0;
}
*/


//ex040

/*
int main(){

    int d;
    float s;

    printf("***Calculo salario do encanador***\n\n");
    printf("Quantos dias trabalhados: ");
    scanf("%d", &d);
    printf("O salario do encanador com %d dias trabalhados e igual a: R$%.2f.\n\n", d, d*30*0.92);

    return 0;
}
*/


//ex039

/*
int main(){

    printf("***Divisão do premio***\n\n");

    printf("-O primeiro ganhador receberá R$%.2f.\n", 780000*0.46);
    printf("-O segundo ganhador receberá R$%.2f.\n", 780000*0.32);
    printf("-O terceiro ganhador recebera R$%.2f.\n\n", 780000*0.22);
}
*/


//ex038

/*
int main(){

    float s, a;
    a = 25%;

    printf("***Calculo de reajuste de salário***\n\n");
    printf("Digite o valor do salário atual: R$");
    scanf("%f", &s);

    printf("O valor do novo salário considerando um aumento de %.1f e igual a: R$%.2f\n\n", a, s*1.25);

    return 0;
}
*/


//ex037

/*
int main(){

    float vp, vd;
    vd = 12%;

    printf("***Calculo de valor com Desconto***\n\n");
    printf("Digite o valor do produto: R$");
    scanf("%f", &vp);

    printf("O produto com valor de R$%.2f com desconto de %.1f sai por: R$%.2f\n\n", vp, vd, vp*0.88);

    return 0;
}
*/


//ex036

/*
int main(){

    float h, r;

    printf("***Calculo do volume do cilindro***\n\n");
    printf("Digite a algura do cilindro: ");
    scanf("%f", &h);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);

    printf("O volume do cilindro com %.2f de raio e %.2f de altura e igual a: %.2f \n\n", r, h, 3.141592*r*r*h);

    return 0;
}
*/


//ex035

/*
int main(){

    float a, b, h;

    printf("Digite o valor para a: ");
    scanf("%f", &a);
    printf("Digite o valor para b: ");
    scanf("%f", &b);

    h = sqrtf(powf(a, 2)+powf(b, 2));

    printf("A hipotenusa com catetos %.1f e %.1f e igual a: %.1f\n\n", a, b, h);

    return 0;

}
*/


//ex034

/*
int main(){

    float r;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    printf("A area do circulo com raio %.2f e igual a: %.2f\n\n", r, 3.141592*r*r);

    return 0;
}


//ex033

/*
int main(){

    float l;

    printf("Digite a medida do lado do quadrado: ");
    scanf("%f", &l);
    printf("A area do quadrado cujo lado e %.2f e igual a: %.2f.\n\n", l, l*l);

    return 0;
}
*/


//ex032

/*
int main(){

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("A soma do sucessor do triplo de %d com o antecessor de seu dobro é igual a: %d.\n\n", n, (3*n+1)+(2*n-1));

    return 0;
}
*/


//ex031

/*
int main(){

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("O valor digitado foi %d seu antecessor é %d e seu sucessor é %d.\n\n", n, n-1, n+1);

    return 0;
}
*/

//ex030

/*
int main(){

    float r;

    printf("Digite um valor em reais: R$");
    scanf("%f", &r);

    printf("O valor R$%.2f equivale a $%.2f na cotação atual(14-05-22).\n\n", r, r*5.06);

    return 0;
}
*/


//ex029

/*
int main(){

    float n1, n2, n3, n4;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    printf("A média das notas %.2f, %.2f, %.2f e %.2f e igual a: %.2f\n\n", n1, n2, n3, n4, (n1+n2+n3+n4)/4);

    return 0;
}
*/


//ex028

/*
int main(){

    float n1, n2, n3;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    printf("A soma dos quadrados de %.2f, %.2f e %.2f é igual a: %.2f\n\n", n1, n2, n3, (n1*n1)+(n2*n2)+(n3*n3));

    return 0;
}
*/


//ex027

/*
int main(){

    float h;

    printf("Digite a area em hectares: ");
    scanf("%f", &h);

    printf("A area de %.2f hectares equivale a %.2f m2\n\n", h, h*10000);

    return 0;
}
*/


//ex026

/*
int main(){

    float m;

    printf("Digite a area em m2: ");
    scanf("%f", &m);

    printf("A area de %.2f m2 equivale a %.2f hectares\n\n", m, m*0.0001);

    return 0;
}
*/


//ex025

/*
int main(){

    float a;

    printf("Digite a area em acres: ");
    scanf("%f", &a);

    printf("A area de %.2f acres equivale a %.2f m2.\n\n", a, a*4048.58);

    return 0;
}
*/


//ex024

/*
int main(){

    float m;

    printf("Digite a area em m2: ");
    scanf("%f", &m);

    printf("A area de %.2f m2 equivale a %.2f acres\n\n", m, m*0.000247);

    return 0;
}
*/

//ex023

/*
int main(){

    float m;

    printf("Digite o valor em metros: ");
    scanf("%f", &m);

    printf("O comprimento de %.2f metros equivalem em %.2f jardas.\n\n", m, m/0.91);

    return 0;
}
*/


//ex022

/*
int main(){

    float j;

    printf("Digite o comprimento em jardas: ");
    scanf("%f", &j);

    printf("O comprimento de %.2f jardas equivale a %.2f metros.\n\n", j, j*0.91);

    return 0;
}
*/


//ex021

/*
int main(){

    float l;

    printf("Digite a massa em libras: ");
    scanf("%f", &l);

    printf("A massa de %.2f libras equivale a %.2f quilogramas.\n\n", l, l*0.45);

    return 0;
}
*/


//ex020

/*
int main(){

    float kg;

    printf("Digite a massa em Kg: ");
    scanf("%f", &kg);

    printf("A massa de %.2f quilogramas equivalem a %.2f libras.\n\n", kg, kg/0.45);

    return 0;
    }
*/


//ex019

/*
int main(){

    float l;

    printf("Digite o valor em litros: ");
    scanf("%f", &l);

    printf("O valor de %.2f litros equivalem a %.2f metros cubicos\n\n", l, l/1000);

    return 0;
}
*/


//ex018

/*
int main(){

    float m;

    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &m);

    printf("O valor de %.2f metros cubicos equivale a %.2f litros\n\n", m, m*1000);

    return 0;
}
*/


//ex017

/*
int main(){

    float c;

    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &c);

    printf("O comprimento de %.2f cemtimetros corresponde a %.2f polegadas\n", c, c/2.54);

    return 0;
}
*/



//ex016

/*
int main(){

    float p;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &p);

    printf("O comprimento de %.2f equivale a %.2f em polegadas.\n", p, p*2.54);

    return 0;
}
*/


//ex015

/*
int main(){

    float r;

    printf("Digite o angulo em radianos: ");
    scanf("%f", &r);

    printf("O angulo de %.2f radianos equivale a %.2f graus.\n", r, r*180/3.141592);

    return 0;
}
*/


//ex014

/*
int main(){

    float g;

    printf("Digite o angulo em graus: ");
    scanf("%f", &g);

    printf("O angulo com %.2f equivale a %.2f radianos.\n\n", g, g*3.141592/180);

    return 0;
}
*/


//ex013

/*
int main(){

    float k;

    printf("Digite a distancia em quilometros: ");
    scanf("%f", &k);

    printf("A distancia de %.2f km equivale a %.4f milhas.\n", k, k/1.61);

    return 0;
}
*/


//ex012

/*
int main(){

    float m;

    printf("Digite a dinstancia em milhas: ");
    scanf("%f", &m);

    printf("A distancia de %.2f milhas equivale a %.2fkm.\n", m, m*1.61);

    return 0;
}
*/


//ex011

/*
int main(){

    float ms;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);

    printf("A velocidade de %.2f equivale a %.2fkm/h\n", ms, ms*3.6);

    return 0;
}

*/



//ex010

/*
int main(){

    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    printf("A velocidade de %.2f equivale a %.2fm/s\n", kmh, kmh/3.6);

    return 0;
}
*/


//ex09

/*
int main(){

    float gc;

    printf("Qual a temperatura em graus Celcius: ");
    scanf("%f", &gc);
    printf("%.2f em graus Celcius equivalem a %.2f em graus Kelvin\n", gc, gc+273.15);

    return 0;
}
*/


//ex08

/*
int main(){

    float gk;

    printf("Qual a temperatura em graus Kelvin: ");
    scanf("%f", &gk);

    printf("%.2f em graus Kelvin equivalem a %.2f em graus Celcius", gk, gk-273.15);

    return 0;
}
*/


//ex07

/*
int main(){

        float gf;

        printf("Qual a temperatura em graus Fahrenheit: ");
        scanf("%f", &gf);

        printf("%.2f em graus Fahrenheit equivalem a %.2f em graus Celcius", gf, 5.0*(gf-32.0)/9.0);

        return 0;
}
*/


//ex06

/*
int main(){

    float gc;

    printf("Qual a temperatura em graus Celsius: ");
    scanf("%f", &gc);

    printf("%.1f em graus Celcius equivalem a %.1f em graus Fahrenheit", gc, gc*(9.0/5.0)+32.0);

    return 0;
}
*/


//ex05

/*
int main(){

    float n;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    printf("A quinta parte do numero %.1f e: %.2f\n", n, n/5);

    return 0;
}
*/


//ex04

/*
int main(){

    float n;

    printf("Digite um numero real: ");
    scanf("%f", &n);

    //printf("O quadrado do numero %.2f e igual a: %.2f\n", n, pow(n,2));
    printf("O quadrado do numero %.2f e igual a: %.2f\n", n, n*n);

    return 0;
}
*/


//ex03

/*
int main(){

    int n1, n2, n3, s;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    //s = n1 + n2 + n3
    //printf("A soma dos valores digitados, %d %d e %d, e igual a: \n", s);
    printf("A soma dos valores digitados, %d, %d e %d, e igual a: %d\n", n1, n2, n3, n1+n2+n3);

    return 0;
}
*/



//ex02

/*
int main(){

    float n;

    printf("Digite um numero real: ");
    scanf("%f", &n);
    printf("O numero digitado foi %.2f\n", n);

    return 0;
}
*/


//ex01

/*
int main(){

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("O numero digitado foi %d\n", n);

    return 0;
}
*/
