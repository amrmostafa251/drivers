/*
 * relay.c
 *
 * Created: 11/01/2024 01:56:15 م
 *  Author: AMR MOSTAFA
 */ 
void relay_innitialize(unsigned char portname, unsigned char pinnumber)
{
	DIO_SET_PIN_DIRECTION(portname,pinnumber,1);
}
void relay_turn_on(unsigned char portname, unsigned char pinnumber)
{
	DIO_WRITE(portname,pinnumber,1);
}
void relay_turn_off(unsigned char portname, unsigned char pinnumber)
{
	DIO_WRITE(portname,pinnumber,0);
}
