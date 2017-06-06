void drawTarget(float X,float Y){
  if (mousePressed){
    for (int i=5; i>0; i--){
      if (i%2==0) {
        fill(0);
        ellipse(mouseX,mouseY,10*i,10*i);
      }
      else if(i%2!=0) {
        fill(255);
        ellipse(mouseX,mouseY,10*i,10*i);
      }
    }
  }
}