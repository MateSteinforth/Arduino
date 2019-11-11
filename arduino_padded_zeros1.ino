//
// Padding
// (c) matesteinforth.com 2019
//

char buf[10];

void setup() {  
  	Serial.begin(9600); 
    Serial.println(paddd(123456, 9));
}

void loop() {
}

char * paddd (long number, int digits)
{	  
  	int i=digits;
  	while (i > 0) {
      	buf[i-1]=(number%10)+48;
    	number = number / 10;
    	i--;    
 	}
   	return buf;
}
