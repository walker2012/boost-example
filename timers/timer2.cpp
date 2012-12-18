#include <iostream>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
using namespace::std;
void print(const boost::system::error_code& )
{
  std::cout << "Hello, world! ";
}

int main()
{
  boost::asio::io_service io;

  boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
  t.async_wait(print);
  cout<<"hello,asy"<<endl;
  io.run();
  cout<<"hello,asy"<<endl;
  return 0;
}


