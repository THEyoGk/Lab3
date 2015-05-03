#include <stdio.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

#define PORT_NUMBER 5000
#define BUFFER_SIZE 256
#define FILENAME_MAX_SIZE 256

int main(int argc, char* argv[]){
	
	int socketId = 0, recieved_bytes = 0;
	char fileName[FILENAME_MAX_SIZE], buffer[BUFFER_SIZE];	
	struct sockaddr_in  serverSocket;
	FILE *file;
	
	memset(buffer, '0', sizeof(buffer));
	
	printf("Input file name: ");
	scanf("%s", filename);
	
	//Creating socket
	
	if( (socketId = socket(AF_INET,SOCK_STREAM,0) ) < 0 ){
		printf("Error : Socket could not be created.\n");
		return 1;
	}
	
	//Initializing structure data
	serverSocket.sin_family = AF_INET;
	serverSocket.sin_port = htons(PORT);
	server_socket.sin_addr.s_addr = inet_addr("127.0.0.1"); //localhost
	
	
	return 0;
}
