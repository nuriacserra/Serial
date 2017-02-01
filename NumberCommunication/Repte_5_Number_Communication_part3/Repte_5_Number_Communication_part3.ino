/********************************************************************************************************
 **
 **                           Repte 5 Number Communication  
 *                                     Part 3                             
 **                            
 **   Nom: Núria Cordero Serra               Date: 17/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

const int ledPin = 13;
long numentrat, num;
int numxifres;
//****************************Setup************************************
void setup() {
:
  Serial.begin(9600);
  Serial.println("Entra un numero? ");
}
//***************************Loop**************************************
void loop() {
 
  while (Serial.available() > 0) {

    
    numentrat = Serial.parseInt(); 
    num = numentrat;
    numxifres = 0;
    
    if (Serial.read() == '\n') { 
      do{
        num = num / 10;
        numxifres++;
      }while (num != 0);
      Serial.print("El el numero ");
      Serial.print(numentrat);
      Serial.print(" te ");
      Serial.print(numxifres);
      Serial.println(" xifres.");
      Serial.println("");
      Serial.println("Entra un numero? ");
    }
  }
}

//***************************Funcions**********************************
