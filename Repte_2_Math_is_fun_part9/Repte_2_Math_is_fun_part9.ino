/********************************************************************************************************
 **
 **                          Math is fun  
 **                             Part 9  
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
int a = 3;
int b = 2;
int d;

//****************************Setup************************************
void setup()               
{
  Serial.begin(9600);      

  Serial.println(" Aqui esta la divisio :");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}
//***************************Loop**************************************
void loop ()
{
}
//***************************Funcions**********************************