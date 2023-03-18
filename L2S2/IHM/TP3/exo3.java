import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;

public class exo3 extends JFrame {
    public exo3() {
        super("SHUUUUURIKEN");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void dessin(Graphics g){
        Graphics2D g2 = (Graphics2D) g;
        Rectangle2D r = new Rectangle2D.Double(30, 40, 50, 80);
        AffineTransform at = new AffineTransform();
        g2.draw(r);
        g2.translate(-15,-20);
        at.scale(1.5, 1.5);
        g2.transform(at);
        g2.draw(r);
        Rectangle2D r2 = new Rectangle2D.Double(30, 40, 50, 80);
        g2.translate(-120, -160);
        at.scale(3, 3);
        g2.transform(at);
        g2.draw(r2);   
    }

    public void paint(Graphics g) {
        super.paint(g);
        dessin(g);
    }

    public static void main(String[] args) {
        new exo3().setVisible(true);
    }
}
