/********************************************************************************************************
 **
 **                  Repte 6. Character Communication         
 **                                Part 2 
 **                            
 **   Nom: Núria Cordero Serra               Date: 17/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
char thisByte;
//****************************Setup************************************
void setup() { 
  Serial.begin(9600); 
  Serial.println("Introdueixi lletra de l'alfabet en majuscula o minuscula..."); 
} 

//***************************Loop**************************************
void loop()
{ 
  while (Serial.available() > 0)
  {
    thisByte = thatByte; 
    thatByte = Serial.read(); 
    if (thatByte == '\n')
    {
      if (thisByte > 96 &  thisByte < 123)
      {
        Serial.println("");
        Serial.print("La lletra ");  
        Serial.write(thisByte); 
        Serial.println(" esta en minuscula");
      }
      else if (thisByte > 64 &  thisByte < 91)
      {
        Serial.println("");
        Serial.print("La lletra ");  
        Serial.write(thisByte); 
        Serial.println(" esta en majuscula");
      }
      else
      {
        Serial.println("No has entrat una lletra!");
      } 
      Serial.println("");
      Serial.println("Introdueixi lletra de l'alfabet en majuscula o minuscula...");      
    }
  }  
} 
//***************************Funcions**********************************
