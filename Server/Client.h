/**
 * Project Api
 */


#ifndef _CLIENT_H
#define _CLIENT_H

class Client {
public: 
    
    IRequest* getRequest();
    
    IResponse* getResponse();
    
    /**
     * @param const ISocket&
     */
    void setSocket(void const ISocket&);
};

#endif //_CLIENT_H