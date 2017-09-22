#include <iostream>
#include "tinyxml2.h"
#include <string>

int main( int argc, const char *argv[] )
{
    tinyxml2::XMLDocument doc;
    doc.LoadFile( "Resources/example.xml" );
    
    tinyxml2::XMLElement *root = doc.FirstChildElement( "document" );
    
    for ( tinyxml2::XMLElement *element = root->FirstChildElement( "data" ); NULL != element; element = element->NextSiblingElement( "data" ) )
    {
        std:: string wmName = element->GetText( );
        
        std::cout << wmName << std::endl;
    }
    
    return 0;
}
