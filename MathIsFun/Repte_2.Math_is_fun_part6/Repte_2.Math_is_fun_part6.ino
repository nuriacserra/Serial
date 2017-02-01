/********************************************************************************************************
 **
 **                             
 **                              Match is fun 
 **                                Part 6 
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************
int drive_gb = 100;
long drive_mb;

//****************************Setup************************************

void setup()               
{
  Serial.begin(9600);      

  Serial.print(" El teu HD es ");
  Serial.print(drive_gb);
  Serial.println(" GB large -");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("Pot a emmagatzemar -");
  Serial.print(drive_mb);
  Serial.println(" Megabytes");
}

//***************************Loop**************************************
void loop () 
{
}

//***************************Funcions**********************************
