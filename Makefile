#timer:timer.cpp
#	g++ -o timer timer.cpp -lboost_system -lboost_thread-mt -lpthread 
#client:client.cpp
#	g++ -o client client.cpp -lboost_system -lboost_thread-mt -lpthread
server:server.cpp
	g++ -o server server.cpp -lboost_system -lboost_thread-mt -lpthread
