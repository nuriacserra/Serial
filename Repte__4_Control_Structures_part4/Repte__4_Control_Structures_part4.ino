/********************************************************************************************************
 **
 **                      Repte 4 Control Structures 
 **                            Part 4 
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

float qualEnergy = 15;

//****************************Setup************************************

void setup ()
{
  Serial.begin(9600);
  
  if (qualEnergy < 3.5)
  {
    Serial.print("A");
  }
  else if (qualEnergy >= 3.5 & qualEnergy < 6.5)
  {
    Serial.print("B");
  }
  else if (qualEnergy >= 6.5 & qualEnergy <11.1)
  {
    Serial.print("C");
  }
  else if (qualEnergy >= 11.1 & qualEnergy <17.7)
  {
    Serial.print("D");
  }
  else if (qualEnergy >= 17.7 & qualEnergy < 38.2 )
  {
    Serial.print("E");
  }
  else if (qualEnergy >= 38.2 & qualEnergy <43.2)
  {
    Serial.print("F");
  }
  else
  {
    Serial.print("G");
  }
}

//***************************Loop**************************************
 void loop ()
 {
 }
//***************************Funcions**********************************
