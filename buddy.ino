SYSTEM_THREAD(ENABLED);

SerialLogHandler logHandler;

const pin_t LED_PIN = D6;

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
}

void loop()
{

}

void myHandler(const char* event, const char* data)
{
    if (strcmp(data, "wave") == 0)
    {
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
        delay(100);
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
        delay(100);
        digitalWrite(LED_PIN, HIGH);
        delay(100);
        digitalWrite(LED_PIN, LOW);
    }
}
