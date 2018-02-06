#include<Servo.h>

 Servo servo1;
 Servo servo2;
 Servo servo3;
 Servo servo4;
 int a;
 
void setup() {
         servo1.attach(5);
         servo2.attach(6);
         servo3.attach(10);
         servo4.attach(7);
         pinMode(13, OUTPUT); // Motor wird Port 13 um seine Richtung zu setzen
         pinMode(8, OUTPUT); //  Motor wird Port 8 fur die Bremsen verwenden
         pinMode(11, OUTPUT); // Motor wird Port 11 um die Spannung zu nehmen 
} 
//Strecke zu Sektor 1
void sektor1(){
    
          servo1.write(45); //Die Klammern werden geoffnet
           delay(1000);     //Man wartet 1 Sekunde bis der nachste Bewegung passiert
          servo3.write(148); //Der erste Gelenge der Arm geht unten
           delay(1000);
          servo2.write(60);  //Der erste Gelenge der Arm geht nach oben
           delay(1000);
          servo1.write(84); //Die Klammern werden geschlossen
           delay(1000);
          servo3.write(60); //Der zweite Gelenge der Arm geht nach oben
           delay(1000);
          servo4.write(180); //Der Arm umdreht
           delay(1000);
    
     digitalWrite(13, HIGH);   //Der Motor wird nach vorne umdrehen
     digitalWrite(8, LOW);    //Bremsen werden deaktiviert
     analogWrite(11,80);     //Spannung und die Geschwindigkeit werden zu den Motor gegeben
      delay(3000);          //Motor dreht fur 3 Sekunden nach vorne 
          
     
     digitalWrite(8, HIGH); //Bremsen werden aktiviert
      delay(1000);
  
            servo3.write(145);   //Der erste Gelenge der Arm geht unten
             delay(3000);
            servo1.write(45);   //Die Klammern werden geoffnet
             delay(2000);
            servo3.write(60);  //Der erste Gelenge der Arm geht nach oben
             delay(5000);
            servo4.write(0);  //Der Arm umdreht
             delay(2000);
 
     digitalWrite(13, LOW);   //Der Motor wird zuruck umdrehen
     digitalWrite(8, LOW);   //Bremsen werden deaktiviert
     analogWrite(11,150);   //Spannung und die Geschwindigkeit werden zu den Motor gegeben
      delay(3000);         //Motor dreht fur 3 Sekunden zuruck
         
     digitalWrite(8, HIGH); //Bremsen werden aktiviert
      delay(1000);

}

//Strecke zu zweite Sektor
void sektor2(){
    
          servo1.write(45);
           delay(1000);
          servo3.write(148); 
           delay(1000);
          servo2.write(60); 
           delay(1000);
          servo1.write(84); 
           delay(1000);
          servo3.write(60); 
           delay(1000);
          servo4.write(180); 
           delay(1000);
    
     digitalWrite(13, HIGH); 
     digitalWrite(8, LOW);   
     analogWrite(11,80);
      delay(5000);             //Motor dreht fur 3 Sekunden nach vorne
          
      
     digitalWrite(8, HIGH); 
      delay(1000);
  
         servo3.write(145); 
          delay(3000);
         servo1.write(45); 
          delay(2000);
         servo3.write(60);
          delay(5000);
         servo4.write(0); 
          delay(2000);
 
     digitalWrite(13, LOW); 
     digitalWrite(8, LOW);   
     analogWrite(11,150);
      delay(5000);          //Motor dreht fur 3 Sekunden zuruck
         
     digitalWrite(8, HIGH); 
      delay(1000);

}

void sektor3(){
    
          servo1.write(45);
           delay(1000);
          servo3.write(148); 
           delay(1000);
          servo2.write(60); 
           delay(1000);
          servo1.write(84); 
           delay(1000);
          servo3.write(60); 
           delay(1000);
          servo4.write(180); 
           delay(1000);
    
     digitalWrite(13, HIGH); 
     digitalWrite(8, LOW);   
     analogWrite(11,80);
      delay(7000);             //Motor dreht fur 7 Sekunden nach vorne
          
      
     digitalWrite(8, HIGH); 
      delay(1000);
  
         servo3.write(145); 
          delay(3000);
         servo1.write(45); 
          delay(2000);
         servo3.write(60);
          delay(5000);
         servo4.write(0); 
          delay(2000);
 
     digitalWrite(13, LOW); 
     digitalWrite(8, LOW);   
     analogWrite(11,150);
      delay(7000);          //Motor dreht fur 7 Sekunden zuruck
         
     digitalWrite(8, HIGH); 
      delay(1000);

}
    
void loop() {
  
 if(a=10)         // Ob der Abstand von der Sektor  gleich 10 ist muss der Roboterarm zu den erste Sektor fahren
 {
 sektor1();      //Man ruft die Methode sektor1();
 }
 else if(a=15)  // Ob der Abstand von der Sektor  gleich 15 ist muss der Roboterarm zu den zweite Sektor fahren
 {
  sektor2();   //Man ruft die Methode sektor2();
 }
 else if(a=20) // Ob der Abstand von der Sektor gleich 20 ist muss der Roboterarm zu den dritte Sektor fahren
 {
 sektor3();    //Man ruft die Methode sektor3();
 }
}


