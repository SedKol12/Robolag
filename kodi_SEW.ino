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
         pinMode(13, OUTPUT); //Lidh motorin ne bllokun A porta 12
         pinMode(8, OUTPUT); //Lidh frenat ne bllokun A porta 9
         pinMode(11, OUTPUT); // I jep energji motorit
}

void sektor1(){
    
          servo1.write(45); //hapet
           delay(2000);
          servo3.write(148); //krahu ulet
           delay(3000);
          servo2.write(60); // ngrihet
           delay(2000);
          servo1.write(84); //mbyllet
           delay(2000);
          servo3.write(60); // cohet
           delay(5000);
          servo4.write(180); //rrotullohet
           delay(2000);
    
     digitalWrite(13, HIGH); //Vendos drejtimin para te motorit
     digitalWrite(8, LOW);   //Caktvizon frenat
     analogWrite(11,80);
      delay(3000);
          
      //Procesi i ndaljes
     digitalWrite(8, HIGH); //aktivizon frenat
      delay(1000);
  
            servo3.write(145); //krahu ulet
             delay(3000);
            servo1.write(45); //hapet
             delay(2000);
            servo3.write(60); // cohet
             delay(5000);
            servo4.write(0); //rrotullohet
             delay(2000);
 
     digitalWrite(13, LOW); //vendos drejtimin prapa te motorit
     digitalWrite(8, LOW);   //Caktivizon frenat
     analogWrite(11,150);
      delay(3000);
         
     digitalWrite(8, HIGH); //aktivizon frenat
      delay(1000);

}

void sektor2(){
    
          servo1.write(45); //hapet
           delay(2000);
          servo3.write(148); //krahu ulet
           delay(3000);
          servo2.write(60); // ngrihet
           delay(2000);
          servo1.write(84); //mbyllet
           delay(2000);
          servo3.write(60); // cohet
           delay(5000);
          servo4.write(180); //rrotullohet
           delay(2000);
    
     digitalWrite(13, HIGH); //Vendos drejtimin para te motorit
     digitalWrite(8, LOW);   //Caktvizon frenat
     analogWrite(11,80);
      delay(3000);
          
      //Procesi i ndaljes
     digitalWrite(8, HIGH); //aktivizon frenat
      delay(1000);
  
         servo3.write(145); //krahu ulet
          delay(3000);
         servo1.write(45); //hapet
          delay(2000);
         servo3.write(60); // cohet
          delay(5000);
         servo4.write(0); //rrotullohet
          delay(2000);
 
     digitalWrite(13, LOW); //vendos drejtimin prapa te motorit
     digitalWrite(8, LOW);   //Caktivizon frenat
     analogWrite(11,150);
      delay(3000);
         
     digitalWrite(8, HIGH); //aktivizon frenat
      delay(1000);

}
    
void loop() {
  
 if(a<=10)
 {
 sektor1();
 }
 else if(a>15)
 {
  sektor2();
 }
 
}


