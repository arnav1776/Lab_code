import java.applet.*;
import java.awt.*;
 
public class rectangle extends Applet{
	int height,width;
	public void init()
	{
		height = getSize().height;
		width = getSize().width;
		setName("MyApplet");
	}
 
 public void paint(Graphics g){
 g.drawRect(10,10,50,100);
 
}
}