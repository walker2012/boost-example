//
//timer.cpp

#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
using namespace::std;

int main()
{
 boost::asio::io_service io;
 
 boost::asio::deadline_timer t(io,boost::posix_time::seconds(5));

 t.wait();

 std::cout<<"hello,sys"<<endl;
 std::cout<<"Hello,world!"<<endl;
 

 return 0;
}
