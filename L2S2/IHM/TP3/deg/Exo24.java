import java.applet.Applet;
import java.awt.*;
import java.awt.geom.Area;
import java.awt.geom.Rectangle2D;

public class Exo24 extends Applet{
	void dessin(Graphics g)
	{   
		Graphics2D g2 = (Graphics2D) g;
		Rectangle2D rect = new Rectangle2D.Double(30, 40, 50, 80);
		
		for(int i=1;i<=12;i++)
		{
			Area forme = new Area(rect);
			g2.rotate(0.5,60,100);
			g2.draw(forme);
		}
	}

	public void paint(Graphics g)
	{
		dessin(g);
	}
}