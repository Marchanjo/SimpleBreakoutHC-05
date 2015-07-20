//Código usado na Arduino Leonardo
//No celular usei a AppBluetoth terminal
//Com este código a App recebe o texto "Bluetooth Test"
//E a partir do terminal da App o caracter que for enviado aparece no monitor serial da IDE da Arduino

char c;

void setup() 
{
    // We need to match the baud rate of the bluetooth module.
    // 9600 is not universal. You may need to try different rates. Another common speed is 38400
    Serial1.begin(9600); 
    delay(100);
}
 
void loop() 
{
    Serial1.println("Bluetooth Test"); 
    delay(1000); 
    if (Serial1.available() > 0)
        {
        c=Serial1.read();
        Serial.print(c); 
        }
}
