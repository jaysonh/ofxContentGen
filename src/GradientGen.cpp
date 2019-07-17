//
//  GradientGen.cpp
//  ChemViz
//
//  Created by Jayson Haebich on 17/07/2019.
//

#include "GradientGen.h"

namespace ofxContentGen
{
    void GradientGen::update()
    {
        fbo.begin();
        
        ofSetColor(0,255,0);
        ofDrawRectangle(0,0,width,height);
        
        fbo.end();
    }
}
