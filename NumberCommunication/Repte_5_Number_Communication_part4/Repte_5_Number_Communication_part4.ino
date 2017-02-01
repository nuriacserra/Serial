/********************************************************************************************************
 **
 **                           Repte 5 Number Communication  
 *                                     Part 4                           
 **                            
 **   Nom: Núria Cordero Serra               Date: 17/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
const int ledPin = 13;
int hores;
float salari;

//****************************Setup************************************
void setup() {
 
  Serial.begin(9600);
  Serial.println("Quantes hores de treball?");
   pinMode(ledPin, OUTPUT); 
}
//***************************Loop**************************************
void loop() {
   while (Serial.available() > 0) {

   hores = Serial.parseInt(); 
    
    if (Serial.read() == '\n') {
      
      if (hores <= 37){
        salari = hores * 20;
      }
      else{
        salari = 37 * 20 + (hores - 37) * 30;
      }
      if (salari <= 800){
        salari = salari * 0.95;
      }
      else{
        salari = salari * 0.9;
      }
      
      Serial.print("El salari per ");
      Serial.print(hores);
      Serial.print(" hores treballades es de ");
      Serial.print(salari);
      Serial.println(" Euros.");
      Serial.println("");
      Serial.println("Quantes hores de treball?");
    }
  }
}
//***************************Funcions**********************************
