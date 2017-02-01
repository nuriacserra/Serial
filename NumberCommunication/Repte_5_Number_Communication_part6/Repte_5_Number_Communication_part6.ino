/********************************************************************************************************
 **
 **                           Repte 5 Number Communication  
 *                                     Part 6                             
 **                            
 **   Nom: Núria Cordero Serra               Date: 17/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

const int ledPin = 13;
int num, nums;
long suma;
double mitja;

//****************************Setup************************************
void setup() {
  
  Serial.begin(9600);
  Serial.print("Entrar numeros un a un (per acabar 0): ");
  pinMode(ledPin, OUTPUT); 
}
//***************************Loop**************************************
void loop() {
  nums = 0;
  num = 1;
  do{

    while (Serial.available() > 0) {
     
      num = Serial.parseInt(); 
      Serial.print(num);
      Serial.print(" - ");
 
      if (Serial.read() == '\n') { 
          suma = suma + num;
          nums++; 
      }
    }
  }while (num != 0);
  nums--;
  mitja = float(suma) / nums;
    
  Serial.println(""); 
  Serial.print("S'han entrat ");
  Serial.print(nums);
  Serial.print(" numeros, la suma de tots ells es ");
  Serial.print(suma);
  Serial.print(" i la mitja ");
  Serial.print(mitja);
  Serial.println(".");
  Serial.println("");
  Serial.print("Entrar numeros un a un (per acabar 0): ");   
}
//***************************Funcions**********************************
