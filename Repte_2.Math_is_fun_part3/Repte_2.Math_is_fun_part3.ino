/********************************************************************************************************
 **
 **                            Repte 2. Math is fun
 **                                   Part 3
 **                            
 **   Nom: Núria Cordero Serra               Date: 14/12/2016
 *********************************************************************************************************/
//****************************Include**********************************
int a = 3;
int b = 4;
int h = 5;

int drive_gb = 5;
int drive_mb;
//****************************Variables********************************

//****************************Setup************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");


  drive_mb = 1024 * drive_gb;


  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}


//***************************Loop**************************************

void loop()  
{
}

//***************************Funcions**********************************
