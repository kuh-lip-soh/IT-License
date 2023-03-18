import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;

public class exo1 extends JFrame {
    public exo1() {
        super("La cisaille");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void paint(Graphics g) {
        super.paint(g);
        Graphics2D g2 = (Graphics2D) g;
        Rectangle2D r = new Rectangle2D.Double(50, 70, 50, 80);
        g2.draw(r);
        AffineTransform at = new AffineTransform();

        //at.shear(0, 2); at.shear(2, 0);

        //at.shear(2, 0); at.shear(0, 2);

        at.shear(2, 2);

        g2.transform(at);
        g2.draw(r);
    }

    public static void main(String[] args) {
        new exo1().setVisible(true);
    }
}
