// Server.h
#ifndef SERVER_H
#define SERVER_H

#include "libraryManager.h"
#include <iostream>
#include <thread>
#include <vector>
#include <cstring>
#include <netinet/in.h>



class Server {
private:
    int serverSocket;
    LibraryManager libraryManager; // To interact with the library system
    std::vector<std::thread> clientThreads;

    void handleClient(int clientSocket, LibraryManager& libraryManager);

public:
    int port = 8080;
	Server(LibraryManager* libraryManager);
    
    ~Server();

    void killProcessUsingPort();

    void start();
};

#endif
