
// #include <iostream>
// #include <string>
// #include "./include/libraryManager.h"
// #include "./include/server.h"
// #include "./include/client.h"


// void runConsoleApp() {
//     LibraryManager libraryManager;
//     libraryManager.start();
// }

// void runServer() {
//     LibraryManager libraryManager;
//     libraryManager.loadData();
//     Server server = Server(libraryManager);
//     server.start();
// }

// void runClient() {
//     Client client;
//     client.start();
// }

// int main() {
//     int choice;

//     std::cout << "Select Mode:\n";
//     std::cout << "1. Run Console Application\n";
//     std::cout << "2. Run as Server\n";
//     std::cout << "3. Run as Client\n";
//     std::cout << "Enter your choice: ";
//     std::cin >> choice;

//     switch (choice) {
//         case 1:
//             runConsoleApp();
//             break;
//         case 2:
//             runServer();
//             break;
//         case 3:
//             runClient();
//             break;
//         default:
//             std::cout << "Invalid choice. Exiting...\n";
//     }

//     return 0;
// }
