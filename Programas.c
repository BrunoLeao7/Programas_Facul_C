#include <stdio.h>
#include <stdlib.h>

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

  scanf("%lf", &raio);

  area = 3.14159 * (raio * raio);

  printf("A = %.4lf", area);
  
}

void p1003() {

  int a, b, x;

  scanf("%d", &a);
  scanf("%d", &b);

  x = a+b;

  printf("SOMA = %d", x);
  
}

void p1004() {

  int a, b, x;

  scanf("%d", &a);
  scanf("%d", &b);

  x = a*b;
  
  printf("PROD = %d", x);
  
}

void p1005() {

  double a, b, media;

  scanf("%lf", &a);
  scanf("%lf", &b);

  media = ((a*3.5) + (b*7.5))/11;

  printf("MEDIA = %.5lf", media);
  
}

void p1006() {

  double a, b, c, media;

  scanf("%lf", &a);
  scanf("%lf", &b);
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

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  x = (a*b - c*d);

  printf("DIFERENCA = %d", x);
  
}

void p1008() {

  int n_func, hr_trb;
  double sal_hr, salary;

  scanf("%d", &n_func);
  scanf("%d", &hr_trb);
  scanf("%lf", &sal_hr);

  salary = (sal_hr*hr_trb);

  printf("NUMBER = %d", n_func);
  printf("\nSALARY = U$ %.2lf", salary);
  
}

void p1009() {

  char nome_fun[100];
  double sal, vendas, sal_total;

  scanf("%s", nome_fun);
  scanf("%lf", &sal);
  scanf("%lf", &vendas);

  sal_total = sal + (vendas*0.15);

  printf("TOTAL = R$ %.2lf", sal_total);
  
}

void p1010() {

  int cod_pc1, num_pc1, cod_pc2, num_pc2;
  double val_pc1, val_pc2, total;

  scanf("%d %d %lf", &cod_pc1, &num_pc1, &val_pc1);
  scanf("%d %d %lf", &cod_pc2, &num_pc2, &val_pc2);

  total = (num_pc1 * val_pc1) + (num_pc2 * val_pc2);

  printf("VALOR A PAGAR: R$ %.2lf \n", total);
  
}

void p1011() {

  int raio;
  double volume;

  scanf("%d", &raio);

  volume = (4.0/3)*3.14159*(raio*raio*raio);

  printf("VOLUME = %.3lf \n", volume);

}

int main() {
  
  p1001();
  
  system("pause");
}