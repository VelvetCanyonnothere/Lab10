#include<stdio.h>
#include<string.h>



int main(){
	
	
	char correctpass[20], confirmpass[20] ;
		
		
	printf("Enter the password : \n");
	gets(correctpass);
	
	if (strlen(correctpass) > 8){
		printf("Invalid length");
   }
	else{
	
		printf("Confirm password: \n");
		gets(confirmpass);
		
		if (strcmp(confirmpass , correctpass) == 0){
		printf("Correct pass");
	    }
	    else{
	    	printf("Wrong pass ");
		}
    }


	return 0;
		
		
}
