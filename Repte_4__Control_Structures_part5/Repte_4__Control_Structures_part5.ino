/********************************************************************************************************
 **
 **                           
 **                            
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
int sensorLectura = 4;

//****************************Setup************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("el dia es "); 
   
  switch (sensorLectura) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");
  } 
}
//***************************Loop**************************************
void loop()  
{
}
//***************************Funcions**********************************
