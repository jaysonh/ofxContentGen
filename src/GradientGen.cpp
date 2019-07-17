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
        glBegin(GL_QUADS);
        
        glColor3f(colSelector[0].x,colSelector[0].y,colSelector[0].z);
        glVertex2f(0,     0);
        glColor3f(colSelector[1].x,colSelector[1].y,colSelector[1].z);
        glVertex2f(width, 0);
        glColor3f(colSelector[2].x,colSelector[2].y,colSelector[2].z);
        glVertex2f(width, height);
        glColor3f(colSelector[3].x,colSelector[3].y,colSelector[3].z);
        glVertex2f(0,     height);
        glEnd();
        
        fbo.end();
    }
    
    void GradientGen::drawGui()
    {
        gui.begin();
    
        for(int i = 0; i < NUM_CORNERS;i++)
        {
            string label ="col"+ofToString(i);
            ImGui::ColorEdit3(label.c_str(), (float*)&colSelector[i]);
        }
        gui.end();
    }
    
}
