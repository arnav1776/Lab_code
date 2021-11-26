import java.applet.*;
import java.awt.*;

public class applet extends Applet {
   public void init() {
	   setBackground(Color.CYAN);
   }
   public void paint(Graphics g)
   {
      g.drawString ("Hello World", 25, 50);
   }
}

/*
<applet code="applet.class" width="300" height="300";>
</applet>
*/
