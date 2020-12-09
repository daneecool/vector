#include "FREDServer/Fred/Mapi/scaapi.h"
#pragma once

class config: public Iterativemapi
{

 protected:
 uint32_t size;

 public:
 config();

 void config::gbtx1_Query(uint32_t size);

 string requestType;
 string sequence;

 string processInputMessage(string input);
 string processOutputMessage(string output);
};
