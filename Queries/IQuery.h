/**
 * Project Api
 */


#ifndef _IQUERY_H
#define _IQUERY_H

class IQuery {
public: 
    
    /**
     * A method returning the header in a String wich contains all the Head of the Query
     */
    const string& getHeader();
    
    /**
     * A method wich enables to set the Header of the Query
     * @param const string&
     */
    void setHeader(void const string&);
    
    /**
     * A method returning the Body of the query in a String
     */
    const string& getBody();
    
    /**
     * A method that allows to Set the Version of the Query
     * 
     * the version correspond to the http version.
     * 
     * @param float
     */
    void setVersion(void float);
    
    /**
     * A method that allows to Get the Version of the Query
     * 
     * the version correspond to the http version.
     */
    float getVersion();
    
    /**
     * A method retruning a Socket. it  allows you communicate with the client.
     */
    ISocket* getSocket();
    
    /**
     * A method allowing to Set a Socket, it MUST be set to communicate with the client.
     * @param ISocket*
     */
    void setSocket(void ISocket*);
    
    /**
     * A method returning the header in a map of Strings
     * <Key, Value>  wich contains all the Header of the Query
     */
    const map<string&; string&> getHeader();
    
    /**
     * A method returning a value from the  header in a Strings
     * It takes a String (key) as parameter and the value at this key will be return.
     * 
     * @param const string&
     */
    string& getHeader(void const string&);
    
    /**
     * @param const string&
     */
    string& operator[](void const string&);
};

#endif //_IQUERY_H