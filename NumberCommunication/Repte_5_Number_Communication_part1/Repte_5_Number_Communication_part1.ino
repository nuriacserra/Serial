/********************************************************************************************************
 **
 **                           Repte 5 Number Communication  
 *                                     Part 1                             
 **                            
 **   Nom: Núria Cordero Serra               Date: 17/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

float r1, r2;
float rSerie, rParalel;


//****************************Setup************************************
void setup() {

  Serial.begin(9600);
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//***************************Loop**************************************
 void loop() {

  while (Serial.available() > 0) {

   
    r1 = Serial.parseInt(); 
    Serial.print("r1 = ");
    Serial.print(r1);
    Serial.print(" ohms\t");
   
    r2 = Serial.parseInt(); 
    Serial.print("r2 = ");
    Serial.print(r2);
    Serial.println(" ohms");

    if (Serial.read() == '\n') {

      rSerie = r1 + r2;
      rParalel = (r1 * r2) / (r1 + r2);
      
      Serial.print("rSerie = ");
      Serial.print(rSerie);
      Serial.print(" ohms\t");
      Serial.print("rParal.lel = ");
      Serial.print(rParalel);
      Serial.println(" ohms");
      Serial.println();
      Serial.println("Entra nous valors per r1 i r2 (separats per una coma)");
    }
  }
}

//***************************Funcions**********************************
