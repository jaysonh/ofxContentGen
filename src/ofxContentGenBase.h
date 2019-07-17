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
        
        void         init( int w, int h );
        ofTexture    getTexture();
        
        virtual void drawGui() = 0;
        virtual void update()  = 0;
        
    protected:
        
        ofxImGui::Gui gui;
        
        int width;
        int height;
        ofFbo fbo;
    };
}

#endif /* ofxContentGenBase_h */
