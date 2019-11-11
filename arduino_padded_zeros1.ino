//
// Padding
// (c) matesteinforth.com 2019
//

void setup() {  
  	Serial.begin(9600); // open serial port for debug

  	char myBuf[10];
	padd(myBuf, 3, 9);
	Serial.println(myBuf);
}

void loop() {
}

// as a return function, use with global buffer
char * paddd (long number, int digits) 
{	  
  	for (int i = digits; i >0; i--) { // loop over decimals
      	buf[i-1]=(number%10)+48; // converts number to ASCII, writes it in Char Array
    	number /= 10; // next decimal
 	}
   	return buf;
}

// pass a buffer to function and read it's content, see above
void padd (char *buf, long number, int digits) 
{	  
  	for (int i = digits; i >0; i--) { // loop over decimals
      	buf[i-1]=(number%10)+48; // converts number to ASCII, writes it in Char Array
    	number /= 10; // next decimal
 	}
}
