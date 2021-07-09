#include <REGX51.H> 
#define Street_lights P2 
sbit light_sensor = P1^0; 
void main(void) { 
 while(1)                                                   // light sensor=0  
 { 
  if(light_sensor == 0)                     // night time   
  { 
   Street_lights = 0XFF;        // light on    }   else                       
   { 
   Street_lights = 0x00;           // light off   
   }  
   } 
   } 
