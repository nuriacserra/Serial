/********************************************************************************************************
 **
 **                           Repte 5 Number Communication  
 *                                     Part 2                             
 **                            
 **   Nom: Núria Cordero Serra               Date: 17/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

long num;

//****************************Setup************************************
void setup() {
  Serial.begin(9600);
  Serial.println("Entrar un numero?");
}

//***************************Loop**************************************
void loop() {
  
  while (Serial.available() > 0) {
        
    num = Serial.parseInt(); 
    Serial.print("El ");
    Serial.print(num);
    
    if (Serial.read() == '\n') { 
      
      if ( num % 2 == 0){
        Serial.println(" es parell.");
      }
      else{
        Serial.println(" es imparell.");
      }
      Serial.println("");
      Serial.println("Entrar un numero?");
    }
  }
}

//***************************Funcions**********************************
