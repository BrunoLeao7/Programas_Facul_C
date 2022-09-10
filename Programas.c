#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void p1001() {

    
  int a, b, x;

  printf("Programa 1001 \n");

  printf("\nEscreva o valor de A: ");
  scanf("%d",&a);
  printf("Escreva o valor de B: ");
  scanf("%d",&b);

  x=a+b;

  printf("Resultado: %d\n",x);
  
}

void p1002() {

  double area, raio;

  printf("Digite o raio da circunferencia: ");
  scanf("%lf", &raio);

  area = 3.14159 * (raio * raio);

  printf("A = %.4lf", area);
  
}

void p1003() {

  int a, b, x;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);

  x = a+b;

  printf("SOMA = %d", x);
  
}

void p1004() {

  int a, b, x;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o primeiro valor:");
  scanf("%d", &b);

  x = a*b;
  
  printf("PROD = %d", x);
  
}

void p1005() {

  double a, b, media;

  printf("Digite o primeiro valor: ");
  scanf("%lf", &a);
  printf("Digite o segundo valor: ");
  scanf("%lf", &b);

  media = ((a*3.5) + (b*7.5))/11;

  printf("MEDIA = %.5lf", media);
  
}

void p1006() {

  double a, b, c, media;

  printf("Digite o primeiro valor: ");
  scanf("%lf", &a);
  printf("Digite o segundo valor: ");
  scanf("%lf", &b);
  printf("Digite o terceiro valor: ");
  scanf("%lf", &c);

  media = ((a*2) + (b*3) + (c*5))/10;

  if(media > 10) {

    printf("Media invalida. Maior que 10.0");
    
  }

  else {

  printf("MEDIA = %.1lf", media);
    
  }
  
}

void p1007() {

  int a, b, c, d, x;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  printf("Digite o terceiro valor: ");
  scanf("%d", &c);
  printf("Digite o quarto valor: ");
  scanf("%d", &d);

  x = (a*b - c*d);

  printf("DIFERENCA = %d", x);
  
}

void p1008() {

  int n_func, hr_trb;
  double sal_hr, salary;

  printf("Digite o numero do funcionario: ");
  scanf("%d", &n_func);
  printf("Digite as horas de trabalho: ");
  scanf("%d", &hr_trb);
  printf("Digite o salario por hora: ");
  scanf("%lf", &sal_hr);

  salary = (sal_hr*hr_trb);

  printf("NUMBER = %d", n_func);
  printf("\nSALARY = U$ %.2lf", salary);
  
}

void p1009() {

  char nome_fun[100];
  double sal, vendas, sal_total;

  printf("Digite o numero do funcionario: ");
  scanf("%s", nome_fun);
  printf("Digite o salario do funcionario: ");
  scanf("%lf", &sal);
  printf("Digite o valor das vendas do funcionario: ");
  scanf("%lf", &vendas);

  sal_total = sal + (vendas*0.15);

  printf("TOTAL = R$ %.2lf", sal_total);
  
}

void p1010() {

  int cod_pc1, num_pc1, cod_pc2, num_pc2;
  double val_pc1, val_pc2, total;

  printf("Digite o codigo, a quantidade e o valor do produto separados por um espaco nessa ordem: \n");
  scanf("%d %d %lf", &cod_pc1, &num_pc1, &val_pc1);
  printf("\nDigite o codigo, a quantidade e o valor do produto separados por um espaco nessa ordem: \n");
  scanf("%d %d %lf", &cod_pc2, &num_pc2, &val_pc2);

  total = (num_pc1 * val_pc1) + (num_pc2 * val_pc2);

  printf("\nVALOR A PAGAR: R$ %.2lf \n", total);
  
}

void p1011() {

  int raio;
  double volume;

  printf("Digite o raio da esfera: ");
  scanf("%d", &raio);

  volume = (4.0/3)*3.14159*(raio*raio*raio);

  printf("VOLUME = %.3lf \n", volume);

}

void p1012() {

  double a, b, c, a_tri, a_circ, a_trap, a_quad, a_ret;

  printf("Digite o primeiro valor: ");
  scanf("%lf", &a);
  printf("Digite o segundo valor: ");
  scanf("%lf", &b);
  printf("Digite o terceiro valor: ");
  scanf("%lf", &c);

  a_tri = (a*c)/2;
  a_circ = 3.14159*(c*c);
  a_trap = ((a+b)*c)/2;
  a_quad = b*b;
  a_ret = a*b;

  printf("\nTriangulo: %.3lf", a_tri);
  printf("\nCirculo: %.3lf", a_circ);
  printf("\nTrapezio: %.3lf", a_trap);
  printf("\nQuadrado: %.3lf", a_quad);
  printf("\nRetangulo: %.3lf", a_ret);

}

void p1013() {

  int a, b, c, maiorab, maiorabc;

  printf("Digite o primeiro valor: ");
  scanf("%d", &a);
  printf("Digite o segundo valor: ");
  scanf("%d", &b);
  printf("Digite o terceiro valor: ");
  scanf("%d", &c);

  maiorab = (a + b + abs(a - b))/2;
  maiorabc = (maiorab + c + abs(maiorab - c))/2;

  if(maiorab > maiorabc) {

    printf("%d", maiorab);
    printf(" eh o maior\n");

  }
  else {

    printf("%d", maiorabc);
    printf(" eh o maior\n");

  }

}

void p1014() {

int dist;
double comb_gast, cons_med;

printf("Digite a distancia percorrida: ");
scanf("%d", &dist);
printf("Digite o combustivel gasto: ");
scanf("%lf", &comb_gast);

cons_med = dist/comb_gast;

printf("%.3lf km/l", cons_med);

}

void p1015() {

  double x1, y1, x2, y2, dist;

  printf("Digite a coordenada do ponto 1: ");
  scanf("%lf %lf", &x1, &y1);
  printf("Digite a coordenada do ponto 2: ");
  scanf("%lf %lf", &x2, &y2);

  dist = sqrt(((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));

  printf("A distancia entre os dois pontos e: %.4lf\n", dist);

}

void p1016() {

    int dist, tempo;
    
    printf("Digite a distancia: ");
    scanf("%d", &dist);
    
    tempo = (60*dist)/30;
    
    printf("%d minutos\n", tempo);

}

void p1017() {

  int tempo, velo;
  double litros, dist;

  printf("Digite o tempo da viagem: ");
  scanf("%d", &tempo);
  printf("Digite a velocidade media do veiculo: ");
  scanf("%d", &velo);

  dist = tempo*velo;
  litros = dist/12;

  printf("%.3lf litros\n", litros);

}

void p1018() {

  int valor, cem, cinq, vinte, dez, cinco, dois, um;

  scanf("%d", &valor);

  printf("%d\n", valor);

  cem = valor/100;
  printf("%d notas de R$ 100,00\n", cem);

  valor = valor%100;
  cinq = valor/50;
  printf("%d notas de R$ 50,00\n", cinq);

  valor = valor%50;
  vinte = valor/20;
  printf("%d notas de R$ 20,00\n", vinte);

  valor = valor%20;
  dez = valor/10;
  printf("%d notas de R$ 10,00\n", dez);

  valor = valor%10;
  cinco = valor/5;
  printf("%d notas de R$ 5,00\n", cinco);

  valor = valor%5;
  dois = valor/2;
  printf("%d notas de R$ 2,00\n", dois);

  valor = valor%2;
  um = valor/1;
  printf("%d notas de R$ 1,00\n", um);

}

int prog;

int main() {
  
  printf("Escolha o programa desejado - 1 ao 50 \n");
  printf("Digite o numero do programa: ");
  scanf("%d", &prog);

  switch(prog) {

    case 1:
      system("cls");

      p1001();

      break;

    case 2:
      system("cls");

      p1002();

      break;

    case 3:
      system("cls");

      p1003();

      break;

    case 4:
      system("cls");

      p1004();

      break;

    case 5:
      system("cls");

      p1005();

      break;

    case 6:
      system("cls");

      p1006();

      break;

    case 7:
      system("cls");

      p1007();

      break;

    case 8:
      system("cls");

      p1008();

      break;

    case 9:
      system("cls");

      p1009();

      break;

    case 10:
      system("cls");

      p1010();

      break;

    case 11:
      system("cls");

      p1011();

      break;

      case 12:
      system("cls");

      p1012();

      break;

    case 13:
      system("cls");

      p1013();

      break;

    case 14:
      system("cls");

      p1014();

      break;

    case 15:
      system("cls");

      p1015();

      break;

    case 16:
      system("cls");

      p1016();

      break;

    case 17:
      system("cls");

      p1017();

      break;

    case 18:
      system("cls");

      p1018();

      break;
  }

  system("pause");
}