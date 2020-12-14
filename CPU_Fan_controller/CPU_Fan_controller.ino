int Controller_pin = 3;

int SecToMil(int TimeInSecond){
    return TimeInSecond*1000;
};

void setup()
{
	pinMode(Controller_pin,OUTPUT);
}

void loop()
{
    // define initial velocity and hold on that speed for 7 seconds
    int initial_velocity = 0;
    analogWrite(Controller_pin, initial_velocity);
    delay(SecToMil(7));
    // define current and incremental increase in V
    int current_velocity = initial_velocity;
    int incremental_velocity = 5;
    // gradually increase the speed of the fan until max and hold for 3 seconds
    while(current_velocity<256){
	    analogWrite(Controller_pin,current_velocity);
        current_velocity += incremental_velocity;
        delay(100);
    }
    delay(SecToMil(3));
}
