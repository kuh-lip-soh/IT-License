import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;


public class Exo22 extends JFrame{
	public Exo22() {
		super("Exemple de dessin dans un JFrame");
		setSize(500,500);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
	}
	
	
	public void dessin(Graphics g) {
		Graphics2D g2 = (Graphics2D) g;		
		Rectangle2D rect = new Rectangle2D.Double(30, 40, 50, 80);
		//g2.rotate(0.5/3);//Qst1
		g2.rotate((0.5/3), 52, 83);//Qst2
		Area forme = new Area(rect);
		g2.setStroke(new BasicStroke(1.0f)); 
		g2.draw(forme);
	}
	
	public void paint(Graphics g) {
		super.paint(g);
		dessin(g);
	}
	
	public static void main (String [] args) {
		new Exo22().setVisible(true);
	}
}
