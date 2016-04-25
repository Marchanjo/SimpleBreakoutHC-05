//Código usado na Arduino Leonardo
//No celular usei a AppBluetoth terminal
//Com este código a App recebe o texto "Bluetooth Test"
//E a partir do terminal da App o caracter que for enviado aparece no monitor serial da IDE da Arduino

char c;

void setup() 
{
    Serial1.begin(9600); //Pode ser outra velocidade, esta é a mais comum
    delay(100);
}
 
void loop() 
{
    Serial1.println("Teste"); 
    delay(1000); 
    if (Serial1.available() > 0)
        {
        c=Serial1.read();
        Serial.print(c); 
        }
}
