/* Developed by Spikee */

void setup() {
// initialize serial communications at 9600 bps:
Serial.begin(9600);

delay(10000);
// print the serial data to GSM
Serial.print("ATD**********;" ); // replace "*" with the mobile no. to get a call using SIM800
// wait 10 seconds before the next loop
delay(10000);
Serial.print("ATH" ); // hold the call
}

void loop() {
}
