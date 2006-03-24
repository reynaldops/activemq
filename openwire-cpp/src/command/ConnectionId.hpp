/*
* Copyright 2006 The Apache Software Foundation or its licensors, as
* applicable.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef ConnectionId_hpp_
#define ConnectionId_hpp_

#include <string>
#include "command/BaseDataStructure.hpp"
    

#include "util/ifr/ap.hpp"
#include "util/ifr/p.hpp"

namespace apache
{
  namespace activemq
  {
    namespace client
    {
      namespace command
      {
        using namespace ifr;
        using namespace std;
        using namespace apache::activemq::client;

/*
 *
 *  Marshalling code for Open Wire Format for ConnectionId
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
class ConnectionId : public BaseDataStructure
{
private:
    p<string> value ;

public:
    const static int TYPE = 120;

public:
    ConnectionId() ;
    virtual ~ConnectionId() ;

    virtual int getCommandType() ;

    virtual p<string> getValue() ;
    virtual void setValue(p<string> value) ;


} ;

/* namespace */
      }
    }
  }
}

#endif /*ConnectionId_hpp_*/
