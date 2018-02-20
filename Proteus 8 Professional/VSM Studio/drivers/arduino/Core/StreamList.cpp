/********************************************************************/
/********************************************************************/
/*****                                                          *****/
/*****        L A B C E N T E R    E L E C T R O N I C S        *****/
/*****                                                          *****/
/*****                 Visual Designer for Arduino              *****/
/*****                                                          *****/
/*****            Stream List (Wrap for Class Stream)           *****/
/*****                                                          *****/
/********************************************************************/
/********************************************************************/

#include <arduino.h>
#include <ctype.h>

#include "core.h"

StreamList::StreamList ()
 { source = NULL;
   delimiter=0; 
 }
   
StreamList &StreamList::begin(Stream *s) 
 { source=s;  
   return *this; 
 }

StreamList &StreamList::arg (long &i)
// Parse an integer
 { if (source) 
    { skipSpaces(); 
      i = source->parseInt(); 
      skipDelimiter();  
    } 
   return *this; 
 }
 
StreamList &StreamList::arg (float &f) 
// Parse a float
 { if (source) 
    { skipSpaces(); 
      f = source->parseFloat(); 
      skipDelimiter();  
    } 
   return *this; 
 }
    
StreamList &StreamList::arg (String &s)
// Parse a string. If the string contains spaces it must be enclosed in quotes.
 { s = (char *)NULL;
   if (source) 
    { int c;
      skipSpaces();
      c = source->peek();
      if (c == '\"')
       { // String enclosed in quotes - string is fully escaped.
         s = fromEscaped();
       } 
      else
       { // String is terminated by the delimiter or white space
         while (c=source->peek(), c != delimiter && !isSpace(c))
          { s += char(c);
            source->read();
          }
       }
      skipDelimiter(); 
     }
    return *this; 
 }

    
void StreamList::skipSpaces ()    
// Skip spaces  but not cr/lf - the latter is assumed to be a delimiter.
 { if (source)
    { int c;
      while (c=source->peek(), c != -1 && isSpace(c))
         source->read();
    }        
 }        
  
void StreamList::skipDelimiter() 
 { if (source)
    { int c;
      while (c=source->peek(), c != -1 && c != delimiter && c != '\r' && c != '\n')
         source->read();
      if (c == '\r')
         source->read(); // skip '\n' as well.
    }
 }           
 
bool StreamList::isSpace (char c)
// Return true if char is to be considered as a space. 
// This includes newlines and tabs.
 { return c == ' ' ||  c == '\t' || c == '\r' || c == '\n';
 }
 
String StreamList::fromEscaped ()
// Parse and return a C++/Javascript compatible escaped string.
// Completes code in PrintList::toEscaped.
 { String s;
   if (source->read() == '\"')
    { int c;
      while (c = source->read(), c != -1 && c != '\"')
       { if (c == '\\')
          { switch (source->read())
             { case '0'  : c = 0;    break;
               case '\'' : c = '\''; break;
               case '\"' : c = '\"'; break;
               case '\\' : c = '\\'; break;   
               case 'n'  : c = '\n'; break;
               case 'r'  : c = '\r'; break;
               case 't'  : c = '\t'; break;
               case 'x'  : 
                { char hex[3];
                  hex[0] = source->read();
                  hex[1] = source->read();
                  hex[2] = 0;
                  c = strtol(hex, NULL, 16);
                  break;
                }
               default  : 
                  c = '?'; // Bad escape char
             }
          }
         s += c;      
       }        
    }
   return s;
 }