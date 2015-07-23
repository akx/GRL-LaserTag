#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){	 
	
	//set background to black
	ofBackground(0, 0, 0);	
	
	//for smooth animation
	ofSetVerticalSync(true);
	
	init();
	appCtrl.setup();

}

//--------------------------------------------------------------
void testApp::update(){
	appCtrl.mainLoop();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetupScreen();
	appCtrl.draw();
}


//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
	appCtrl.keyPress(key);
}

//--------------------------------------------------------------
void testApp::keyReleased (int key){ 

	appCtrl.keyRelease(key);
}


//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){		
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	appCtrl.dragPoint(x,y);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	appCtrl.selectPoint(x,y);
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
	appCtrl.releasePoint();

}

//--------------------------------------------------------------
void testApp::init(){

}
