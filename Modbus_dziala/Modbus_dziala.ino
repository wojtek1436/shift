/*
  Modbus-Arduino Example - TempSensor (Modbus IP)
  Copyright by André Sarmento Barbosa
  http://github.com/andresarmento/modbus-arduino
*/
 
#include <SPI.h>
#include <Ethernet.h>
#include <Modbus.h>
#include <ModbusIP.h>

int tab_index [100];
int tab_index1 [100];

const int sensorPin = A0;

//ModbusIP object
ModbusIP mb;

void setup() {
    // The media access control (ethernet hardware) address for the shield
    byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };  
    // The IP address for the shield
    byte ip[] = { 172, 16, 17, 100 };   
    //Config Modbus IP 
    mb.config(mac, ip);



for(int i=0;i<50;i++){

  tab_index[i]=i;
}


for(int j=0;j<50;j++){

  mb.addHreg(tab_index[j],100);
}
    //mb.addHreg(1, 100);
   // mb.addHreg(2, 100);
   // mb.addHreg(3, 100);
   // mb.addHreg(4, 100);
   // mb.addHreg(5, 100);
   // mb.addHreg(6, 100);
   // mb.addHreg(7, 100);
   // mb.addHreg(8, 100);
   // mb.addHreg(9, 100);
   // mb.addHreg(10, 100);
    
 
    Serial.begin(9600);
}

void loop() {
   //Call once inside loop() - all magic here
   mb.task();
   
   
       //Setting raw value (0-1024)
       mb.Hreg(1, analogRead(sensorPin));
       mb.Hreg(2, (analogRead(sensorPin)+200));
        mb.Hreg(3, (analogRead(sensorPin)-100));
       mb.Hreg(4, (analogRead(sensorPin)*1.5));
       mb.Hreg(5, analogRead(sensorPin));
       mb.Hreg(6, (analogRead(sensorPin)+200));
        mb.Hreg(7, (analogRead(sensorPin)-100));
       mb.Hreg(8, (analogRead(sensorPin)*1.5));
       mb.Hreg(9, analogRead(sensorPin));

        mb.Hreg(10, analogRead(sensorPin));
       mb.Hreg(11, (analogRead(sensorPin)+200));
        mb.Hreg(12, (analogRead(sensorPin)-100));
       mb.Hreg(13, (analogRead(sensorPin)*1.5));
       mb.Hreg(14, analogRead(sensorPin));
       mb.Hreg(15, (analogRead(sensorPin)+200));
        mb.Hreg(16, (analogRead(sensorPin)-100));
       mb.Hreg(17, (analogRead(sensorPin)*1.5));
       mb.Hreg(18, analogRead(sensorPin));


    mb.Hreg(19, analogRead(sensorPin));
       mb.Hreg(20, (analogRead(sensorPin)+200));
        mb.Hreg(21, (analogRead(sensorPin)-100));
       mb.Hreg(22, (analogRead(sensorPin)*1.5));
       mb.Hreg(23, analogRead(sensorPin));
       mb.Hreg(24, (analogRead(sensorPin)+200));
        mb.Hreg(25, (analogRead(sensorPin)-100));
       mb.Hreg(26, (analogRead(sensorPin)*1.5));
       mb.Hreg(27, analogRead(sensorPin));



    mb.Hreg(28, analogRead(sensorPin));
       mb.Hreg(29, (analogRead(sensorPin)+200));
        mb.Hreg(30, (analogRead(sensorPin)-100));
       mb.Hreg(31, (analogRead(sensorPin)*1.5));
       mb.Hreg(32, analogRead(sensorPin));
       mb.Hreg(33, (analogRead(sensorPin)+200));
        mb.Hreg(34, (analogRead(sensorPin)-100));
       mb.Hreg(35, (analogRead(sensorPin)*1.5));
       mb.Hreg(36, analogRead(sensorPin));



    mb.Hreg(37, analogRead(sensorPin));
       mb.Hreg(38, (analogRead(sensorPin)+200));
        mb.Hreg(39, (analogRead(sensorPin)-100));
       mb.Hreg(40, (analogRead(sensorPin)*1.5));
       mb.Hreg(41, analogRead(sensorPin));
       mb.Hreg(42, (analogRead(sensorPin)+200));
        mb.Hreg(43, (analogRead(sensorPin)-100));
       mb.Hreg(44, (analogRead(sensorPin)*1.5));
       mb.Hreg(45, analogRead(sensorPin));



    mb.Hreg(46, analogRead(sensorPin));
       mb.Hreg(47, (analogRead(sensorPin)+200));
        mb.Hreg(48, (analogRead(sensorPin)-100));
       mb.Hreg(49, (analogRead(sensorPin)*1.5));
       mb.Hreg(50, analogRead(sensorPin));
      
   
   
      
       Serial.println(mb.Hreg(10));
     
   
}
