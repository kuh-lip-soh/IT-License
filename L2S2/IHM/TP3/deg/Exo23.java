import java.applet.Applet;
import java.awt.*;

public class Exo23 extends Applet{
	void dessin(Graphics g)
	{   
		Graphics2D g2 = (Graphics2D) g;
		g2.setFont(new Font("Arial",Font.BOLD,14));
		
		for(int i=1;i<=12;i++)
		{
		    Color c = new Color(60+4*i,50+7*i,50+4*i);
		    g2.setColor(c);
			
			g2.setFont(new Font("Arial",Font.ITALIC,12));
			g2.rotate(0.5,300,300);
			g2.drawString("      Bienvenue au mode Graphique de JAVA.",300,300);	
		}
	}

	public void paint(Graphics g)
	{
		dessin(g);
	}
}