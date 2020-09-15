#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main ()
{
  time_t timer;               //asigna el tiempo del computador en la variable llamada timer
  struct tm estructure = {0};        //crea una estructura que lleve el tiempo
  double seconds;             //almacena estructure

  estructure.tm_hour = 0;            //crea una variable con valor 0
  estructure.tm_min = 0;             //crea una variable con valor 0
  estructure.tm_sec = 0;             //crea una variable con valor 0
  int ano;                    // crea una variable int llamada año sin definirse
  cout<<"year de nacimiento:"; cin>> ano;//imprime el mensaje y guarda el valor
  int mes;                       // crea una variable int llamada mes aun no definida
  cout<<"mes nacimiento:"; cin>> mes;        //imprime el mensaje y guarda el valor
  int dias;                       // crea una variable int llamada dias aun no definida
  cout<<"dia nacimiento:"; cin>> dias; //imprime el mensaje y guarda el valor
  estructure.tm_year=ano-1900;        // variable igualada a operacion con el tiempo inicial

  estructure.tm_mon=mes-1;           // variable igualada a operacion con el tiempo inicial

  estructure.tm_mday=dias;           // variable igualada a operacion con el tiempo inicial


  time(&timer);                  // convierte en tiempo unix asignado del computador a la  varible timer

  seconds = difftime(timer,mktime(&estructure)); //es una operacion del tiempo entre la estructura estructure y el timer en tiempo unix) 
  float dia=seconds/86400;        // se iguala la variable dia a la operacion que convierte el tiempo unix en dias
  printf ( " sus dias vividos son :% .f: D " , dia);;   // imprime el resultado de los dias totales
  return 0;
}