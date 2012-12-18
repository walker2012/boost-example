all:chat_client chat_server
chat_client :chat_client.o
	g++ -o chat_client chat_client.o -lboost_system -lboost_thread-mt -lpthread	
chat_client.o : chat_message.hpp chat_client.cpp
	g++ -c chat_client.cpp
chat_server : chat_server.o
	g++ -o chat_server chat_server.o -lboost_system -lboost_thread-mt -lpthread
chat_server.o: chat_message.hpp chat_server.cpp
	g++ -c chat_server.cpp 
