/********************************************************************************************************
 **
 **                          Math is fun  
 **                             Part 8 
 **                            
 **   Nom: Núria Cordero Serra               Date: 11/01/2017
 *********************************************************************************************************/
//****************************Include**********************************


//****************************Variables********************************

int drive_gb = 100;
long drive_mb;
long drive_kb;
long missing_drive_kb;
long real_drive_mb;
long real_drive_kb;

//****************************Setup************************************
void setup()
{  Serial.begin(9600);
  Serial.print(" La seva HD es :");
  Serial.print(drive_gb);
  Serial.println(" GB large .");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print(" En teoria, es pot emmagatzemar :");
  Serial.print(drive_mb);
  Serial.print(" Megabytes - ");

  drive_kb = drive_mb;
  drive_kb = drive_kb * 1024;

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  
  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;

  Serial.print("Pero en realitat nomes les botigues : ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes  - ");

  real_drive_kb = real_drive_mb;
  real_drive_kb = real_drive_kb * 1000;

  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  missing_drive_kb = drive_kb - real_drive_kb;

  Serial.print("Es troba a faltar :");
  Serial.print(missing_drive_kb);
  Serial.println(" Kilobytes!");
}

//***************************Loop**************************************
void loop ()
{
}
//***************************Funcions**********************************
