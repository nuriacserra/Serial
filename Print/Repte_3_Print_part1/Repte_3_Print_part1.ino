/********************************************************************************************************
 **
 **                           Repte 3. Print
 **                               Part 1 
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
int num=64;

//****************************Setup************************************

void setup () 
{
  Serial.begin(9600);    

  Serial.println("  Diferent formats per al mateix nombre : ");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);
  Serial.println(num,BIN);
  Serial.println(num,HEX);
  Serial.println(num,OCT);
  
}
//***************************Loop**************************************
void loop () 
{
}
//***************************Funcions**********************************
