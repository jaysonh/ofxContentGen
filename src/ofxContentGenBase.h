//
//  ofxContentGenBase.h
//  ChemViz
//
//  Created by Jayson Haebich on 17/07/2019.
//

#ifndef ofxContentGenBase_h
#define ofxContentGenBase_h

#include "ofMain.h"
#include "ofxImGui.h"

namespace ofxContentGen
{
    class ofxContentGenBase
    {
    public:
        
        void         init( int w, int h, string name );
        ofTexture    getTexture();
        ofFbo        getFbo();
        
        virtual void   drawGui() = 0;
        virtual void   update()  = 0;
        virtual ofJson getJson() = 0;
        virtual void   setJson( ofJson json ) = 0;
        
        int getWidth()   { return width;  }
        int getHeight()  { return height; }
        string getName() { return name;   }
        
        
    protected:
        
        string name;
        int    width;
        int    height;
        ofFbo  fbo;
    };
}

#endif /* ofxContentGenBase_h */
