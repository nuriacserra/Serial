/********************************************************************************************************
 **
 **                            Repte3.Print         
 **                                Part 2 
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************
//****************************Variables********************************
int thisByte = 33 ;
//****************************Setup************************************
void setup() 
{ 
 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Mapa de Caràcters" ); 

} 
//***************************Loop**************************************
void loop()
{ 
  Serial.write(thisByte);    

  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   



  if(thisByte == 126)  
  { 
    while(true)
    { 
    } 
  } 
  thisByte++;
} 
//***************************Funcions**********************************
