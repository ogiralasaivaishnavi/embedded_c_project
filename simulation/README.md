# Activity1- state of heater and seat button sensor considered as switches in simulation.
## Both ON state of switches leads to LED On state. 

|ON|OFF|
|:--:|:--:|
||

## Code 
```
	if(sw1 is closed && sw2 is closed)
	{
        change_led_state(HIGH);
		delay_ms(LED_ON_TIME);
	} else{
        change_led_state(LOW);
		delay_ms(LED_OFF_TIME);	
	}
```