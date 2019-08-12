
// function to generate the right "phrase" based on the time

void displayTime(void) {

	// time we display the appropriate thetime.minute() counter
  	if ((thetime.minute() > 4) && (thetime.minute() < 10)) {
    	MFIVE;
      PAST;
  	}
  
    if ((thetime.minute() > 9) && (thetime.minute() < 15)) {
    	MTEN;
      PAST;
    }
  
  	if ((thetime.minute() > 14) && (thetime.minute() < 20)) {
    	AQUARTER;
      PAST;
  	}
  
  	if ((thetime.minute() > 19) && (thetime.minute() < 25)) {
    	MTEN;
      TO;
      HALF;
  	}
  
  	if ((thetime.minute() > 24) && (thetime.minute() < 30)) {
    	MFIVE;
      TO;
      HALF;
  	}
  	
  	if ((thetime.minute() > 29) && (thetime.minute() < 35))
    	HALF;
  
  	if ((thetime.minute() > 34) && (thetime.minute() < 40)) {
    	MFIVE;
      PAST;
      HALF;
  	}
  
  	if ((thetime.minute() > 39) && (thetime.minute() < 45)) {
    	MTEN;
      PAST;
      HALF;
  	} 
  
  	if ((thetime.minute() > 44) && (thetime.minute() < 50)) {
    	AQUARTER;
      TO;
  	}
  
  	if ((thetime.minute() > 49) && (thetime.minute() < 55)) {
    	MTEN;
      TO;
  	}
  	
  	if (thetime.minute() > 54) {
    	MFIVE;
      TO;
  	}
  
    if ((thetime.minute() < 20))
  	{
    	switch (thetime.hour()) {
      		case 1:
      		case 13:
        		ONE;
        		break;
        		
      		case 2:
      		case 14:
        		TWO;
        		break;
        		
		      case 3:
		      case 15:
		        THREE;
		        break;
		        
		      case 4:
		      case 16:
		        FOUR;
		        break;
		        
		      case 5:
		      case 17:
		        FIVE;
		        break;
		        
		      case 6:
		      case 18:
		        SIX;
		        break;
		        
		      case 7:
		      case 19:
		        SEVEN;
		        break;
		        
		      case 8:
		      case 20:
		        EIGHT;
		        break;
		        
		      case 9:
		      case 21:
		        NINE;
		        break;
		        
		      case 10:
		      case 22:
		        TEN;
		        break;
		        
		      case 11:
		      case 23:
		        ELEVEN;
		        break;
		        
		      case 0:
		      case 12:
		        TWELVE;
		        break;
    	}
	  }
  	else
  	{
   
    	switch (thetime.hour()) {
		      case 1:
		      case 13:
		        TWO;
		        break;
		        
		      case 14:
		      case 2:
		        THREE;
		        break;
		        
		      case 15:
		      case 3:
		        FOUR;
		        break;
		        
		      case 4:
		      case 16:
		        FIVE;
		        break;
		        
		      case 5:
		      case 17:
		        SIX;
		        break;
		        
		      case 6:
		      case 18:
		        SEVEN;
		        break;
		        
		      case 7:
		      case 19:
		        EIGHT;
		        break;
		        
		      case 8:
		      case 20:
		        NINE;
		        break;
		        
		      case 9:
		      case 21:
		        TEN;
		        break;
		        
		      case 10:
		      case 22:
		        ELEVEN;
		        break;
		        
		      case 11:
		      case 23:
		        TWELVE;
		        break;
		        
		      case 0:
		      case 12:
		        ONE;
		        break;
    	}
  	}
  	
  	applyMask(); // apply phrase mask to colorshift function
}
