/* Automação do Guindaste elétrico  
 Aguinaldo Alves de Souza,01/03/17-as 16:54min
*/
#include <Servo.h>
#define servoombro 5
#define servobase 3
#define servocotovelo 6
#define servopulso 9
#define servogarra 11      
Servo servobase1; //objeto para o servo utilizar
Servo servoombro2;
Servo servocotovelo3;
Servo servopulso4;
Servo servogarra5;
int posision1;
int posision2;
int posision3;
int posision4;
int posision5;
int i;
int j;
         void setup() {
 
servobase1.attach(servobase);  //_________Liga o servo no pino 3 ao servo-objeto(servobase)
servoombro2.attach(servoombro);//__________Liga o servo no pino 5 ao servo-objeto(servoombro)
servocotovelo3.attach(servocotovelo);//_____Liga o servo no pino 6 ao servo-objeto(servocotovelo)
servopulso4.attach(servopulso);  //_________Liga o servo no pino 9 ao servo-objeto(servopulso)
servogarra5.attach(servogarra); //__________Liga o servo no pino 11 ao servo-objeto(servogarra)
  }                                   
       void loop() {
        //_______________________________Contador de voltas dos servos motores
        if(posision1<180)
      for(posision1 = 0;posision1 <=180; posision1 ++ ){  //_____Vai de 0 graus a 180 graus,em passos de 1 grau
 servobase1.write(posision1);//_____________________________Diga para o servo ir para a posição na variável 'posision1'
 
delay(6000);//________________________________________________Aguarda 20s para que o servo atinja a posição
 
  for (posision1 =180; posision1 >=0 ; posision1 --){//______Vai de 180 graus a 0 graus retornando em passos de 1 grau
    servobase1.write(posision1);//____________________________Diga servo para ir para a posição na variável 'posision1'
    delay(6000);//_____________________________________________Aguarda 20s para que o servo atinja a posição
 break; 
 }
 }
    if(posision2<180)  
   for (posision2 = 0;posision2 <=180; posision2 ++ ){//_____Vai de 0 graus a 180 graus,em passos de 1 grau
 servoombro2.write(posision2);//_____________________________Diga para o servo ir para a posição na variável 'posision2'
delay(2000);//________________________________________________Aguarda 20ms para que o servo atinja a posição
   
   
  for (posision2 =180; posision1 >=0 ; posision2 --){//______Vai de 180 graus a 0 graus retornando em passos de 1 grau
    servoombro2.write(posision2);//____________________________Diga servo para ir para a posição na variável 'posision2'
    delay(2000);//_____________________________________________Aguarda 20ms para que o servo atinja a posição
break;    
}
}
  if(posision3<180)
  for(posision3 = 0;posision3 <=180; posision3 ++ ){  //_______Vai de 0 graus a 180 graus,em passos de 1 grau
 servocotovelo3.write(posision3);//_____________________________Diga para o servo ir para a posição na variável 'posision3'
delay(1000);//________________________________________________Aguarda 20ms para que o servo atinja a posição

  for (posision3 =180; posision3 >=0 ; posision3 --){//______Vai de 180 graus a 0 graus retornando em passos de 1 grau
    servocotovelo3.write(posision3);//____________________________Diga servo para ir para a posição na variável 'posision3'
    delay(2000);//_____________________________________________Aguarda 20ms para que o servo atinja a posição  
 break;
}
}
 if (posision4<180)
  for(posision4 = 0;posision4 <=180; posision4 ++ ){ //______Vai de 0 graus a 180 graus,em passos de 1 grau
 servopulso4.write(posision4);//_____________________________Diga para o servo ir para a posição na variável 'posision4'
delay(1000);//________________________________________________Aguarda 20ms para que o servo atinja a posição

  for (posision4 =180; posision4 >=0 ; posision4 --){//______Vai de 180 graus a 0 graus retornando em passos de 1 grau
    servopulso4.write(posision4);//____________________________Diga servo para ir para a posição na variável 'posision4'
    delay(2000);//_____________________________________________Aguarda 20ms para que o servo atinja a posição  
    break;
  }
  }
 if (posision5<=180)
  for(posision5 = 0;posision5 <=180; posision5 ++ ){ //_______Vai de 0 graus a 180 graus,em passos de 1 grau
 servogarra5.write(posision5);//_____________________________Diga para o servo ir para a posição na variável 'posision5'
delay(1000);//________________________________________________Aguarda 20ms para que o servo atinja a posição
   
  for (posision5 =180; posision5 >=0 ; posision5 --){//______Vai de 180 graus a 0 graus retornando em passos de 1 grau
    servogarra5.write(posision5);//____________________________Diga servo para ir para a posição na variável 'posision5'
    delay(2000);//_____________________________________________Aguarda 20ms para que o servo atinja a posição 
   break;
  }  
  //COMEÇA O LOOP DE RETORNO DOS SERVOS
    }
   }
  
  
     
