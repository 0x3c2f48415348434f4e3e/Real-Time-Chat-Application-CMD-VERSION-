void getInput(){
	//Get user input
	//so what we want to do is allow user to enter
    //characters in the input and we read from the stdin
    int pointer = 0;
    int numOfResize = 1;
    static char *userInput;
    userInput = (char*) malloc(sizeof(char)*BUFFERSIZE);
    int character = getc(stdin);
   //inputs in c
   //https://www.geeksforgeeks.org/eof-and-feof-in-c/
    while(1){
        if(character == EOF || character == '\n'){
            break;
        }
        else{
            //in order to make sure we do not run over
            //the allocated buffer, we have to do something
            //smart and that is check if the pointer
            //is above the BUFFERSIZE, and if so
            //reallocate
            if(pointer >= BUFFERSIZE){
                numOfResize+=1;
                //do stuff
                //we will reallocat the size
                userInput = (char *) realloc(userInput,(numOfResize*BUFFERSIZE));
            }
            else{
                    userInput[pointer] = character;
                    character = getc(stdin);
                    pointer++;
            }
        }
    }
    printf("%s\n",userInput);

    return userInput;
}

void createUsername(){
	//allow user to create a 'Unique' username, and we will
	//compare this will every other username in the Linked list to
	//see if a user with that name already exist
}

void releaseResource(void * memoryBlock){
	free(memoryBlock);
}
