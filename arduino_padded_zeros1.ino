//
// Padding
// (c) matesteinforth.com 2019
//

char buf[10]; // define global buffer with 9 digits space (long)

void setup() {  
  	Serial.begin(9600); 
}

void loop() {
    Serial.println(paddd(123456, 9));
}

char * paddd (long number, int digits)
{	  
  int i=digits;
  while (i > 0) {
    buf[i-1]=(number%10)+48; // converts number to ASCII, writes it in Char Array
    number = number / 10;
    i--;    
 	}
  return buf;
}
