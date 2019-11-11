//
// Padding
// (c) matesteinforth.com 2019
//

void setup() {
    Serial.begin(9600); 
    Serial.println(paddd(123456, 9));
}

void loop() {
}

char * paddd (long number, int digits)
{
  	char * buf = (char *) malloc (digits);
  	char buffer [2];
  
  	int i=digits;
  
  	while (i > 0) {
  		itoa (number%10,buffer,10);
    	number = number / 10;
    	i--;    
      	memcpy ( buf+i, buffer, 1 );
 	}
  	return buf;
  	free(buf);
}
