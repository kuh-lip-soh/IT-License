import javax.swing.*;
import java.awt.*;
import java.awt.geom.*;

public class graphe extends JFrame {
    public graphe() {
        super("Shmem");
        setSize(1280, 720);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void dessin(Graphics g) {
        Graphics2D g2 = (Graphics2D) g;
        Ellipse2D oval = new Ellipse2D.Float(100, 200, 80, 60);
        Rectangle2D rect = new Rectangle2D.Float(120, 230, 90, 80);
        Area forme = new Area(oval);
        forme.add(new Area(rect)); // ou forme.intersect(new Area(rect));
        g2.draw(forme);
        AffineTransform at = new AffineTransform();
        at.translate(100, 100); // Translation de (x=100, y=100)
        at.rotate(0.5); // Rotation d’un angle de 0,5 radians
        forme.transform(at); // appliquer la translation suivie de la rotation
        g2.draw(forme); // Dessiner la forme, ou utiliser g2.fill(forme)
    }

    public void paint(Graphics g) {
        super.paint(g);
        dessin(g);
    }

    public static void main(String[] args) {
        new graphe().setVisible(true);
    }
}
