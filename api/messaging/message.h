/*message.h*/

#ifndef MESSAGE_H
#define MESSAGE_H

class CMessage {
public:
  CMessage();
  ~CMessage() = default;

protected:
std::size_t msg_size;
const char* message;
};

std::size_t message_sizeinfo();
const char* print_message( const char* pStr );

#endif
