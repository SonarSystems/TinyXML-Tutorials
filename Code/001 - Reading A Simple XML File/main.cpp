#include <iostream>
#include "tinyxml2.h"
#include <string>

int main( int argc, const char *argv[] )
{
    tinyxml2::XMLDocument doc;
    doc.LoadFile( "Resources/example.xml" );
    
    std::string str = doc.FirstChildElement( "document" )->FirstChildElement( "data" )->GetText();
    
    std::string str2 = doc.FirstChildElement( "document" )[1].GetText();

    tinyxml2::XMLElement *str3 = doc.FirstChildElement( "document" )->FirstChildElement( "data" )->NextSiblingElement( );

    tinyxml2::XMLElement *str4 = str3->NextSiblingElement( );

    
    std::cout << str2 << std::endl;
    std::cout << str3->GetText( ) << std::endl;
    std::cout << str4->GetText( ) << std::endl;
    
    return 0;
}
