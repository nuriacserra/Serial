/********************************************************************************************************
 **
 **                  Repte 6. Character Communication         
 **                                Part 1  
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
char thisByte;
char thatByte = 33; 
//****************************Setup************************************
void setup() { 
   Serial.begin(9600); 
   Serial.println("Prem una tecla..."); 
} 
//***************************Loop**************************************
void loop() { 
  while (Serial.available() > 0) {

    thisByte = thatByte; 
    thatByte = Serial.read(); 

      Serial.print(", bin: "); 
      Serial.println(thisByte, BIN);   
      
    }
  }  
} 

//***************************Funcions**********************************
