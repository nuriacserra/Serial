/********************************************************************************************************
 **
 **                           
 **                            
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

int  tempaigua = 105;
//****************************Setup************************************
void setup()             
{
  Serial.begin(9600); 
  
  if ( tempaigua < 90)
  {
    Serial.print(" Aigua encara no bull ");
  }
  else if ( tempaigua >= 90 & tempaigua < 100)
  {
    Serial.print(" Aigua apunt de bullir ");
  }
  else if (tempaigua == 100)
  {
    Serial.print(" Aigua a 100 C ");
  }
  else
  {
    Serial.print(" Aigua bullint ");   
  }
}
//***************************Loop**************************************
void loop ()
{
}
//***************************Funcions**********************************
