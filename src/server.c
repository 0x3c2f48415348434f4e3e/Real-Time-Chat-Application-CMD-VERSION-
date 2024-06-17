#include"common.h"


void createServer(){
	//follow documentation
	struct addrinfo *hints, *res, *Node;
	hints->ai_family = AF_INET;
	hints->ai_socktype = SOCK_STREAM;
	hints->ai_protocol = 0;
	hints->ai_flags = AI_PASSIVE;
	hints->addrlen = 0;
	hints->ai_addr = (void*)0;
	hints->ai_canonname = (void*)0;
	hints->ai_next = (void*)0;
	U32 networkAddressLinkedList = getaddrinfo(NULL,PORT,hints,res);
	EXIT(networkAddressLinked != 0);

	//traverse LINKEDLIST to find apporiate node
	while(res!= (void*)0){
		U32 serverFileDescriptor = socket(res->ai_family,res->socktype,res->ai_protocol);
		if(serverFileDescriptor == -1){
			res = res->ai_next;
		}
		else{
		//found a suitable network node
			//check if we can bind
			U32 canBind = bind(serverFileDescriptor,res->ai_addr,res->ai_addrlen);
			if(canBind != 0){
				//close socket as we can not bind
				//and go back to linked list
				close(serverFileDescriptor);
				res = res->ai_next;
			}
			else{
				Node = res; //Store Acceptable node/address here
				break; //to denote success in creating
				//and binding socket
			}
		}

		//free result
		freeaddrinfo(res);
		//just to double check, we will see if we have a NULL node
		if(Node == (void*)0){
			fprintf(stdin,"Could not bind Node");
			EXIT(1==1);
		}
	}
}

void receiveMessage(){
	//Receive message
}
