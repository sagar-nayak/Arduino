#define ON   	1
#define OFF  	0
#define DELAY  	1000

static int output_pin;

void setup() 
{
	output_pin = LED_BUILTIN;	//LED Connected Pin
 	pinMode(output_pin, OUTPUT);	//Set Mode as Output
}

static void write_pin(int pin, int state)
{
	delay(DELAY);
	digitalWrite(pin, state);
}

void loop() 
{
	do
	{
		write_pin(output_pin, ON);
		write_pin(output_pin, OFF);
	}while(0);
}

