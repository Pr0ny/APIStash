/**
 * Project Api
 */


#ifndef _RESPONSE_H
#define _RESPONSE_H

#include "AQuery.h"


class Response: public AQuery {
public: 
    
    /**
     * setStatus allows to you Set the status code's Response
     * 
     * @param int
     */
    void setStatus(void int);
    
    /**
     * getStatus allows to you Get the status code's Response
     */
    int& getStatus();
    
    /**
     * getMessage allows you to Get the Message's Response
     */
    string& getMessage();
    
    /**
     * setMessage allows to Set the Message's Response
     * @param string&
     */
    void setMessage(void string&);
private: 
    /**
     * _status is the status code's Response
     */
    int _status;
    /**
     * _message contains the message of the Query Response
     */
    string _message;
};

#endif //_RESPONSE_H