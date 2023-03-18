import javax.swing.*;
import java.awt.*;

public class exo2 extends JFrame {
    public exo2() {
        super("hmm");
        setSize(1024, 640);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public static void main(String[] args) {
        new exo2().setVisible(true);
        JFrame fenetre = new JFrame("Align");
        JPanel Checks = new JPanel();
        JPanel Coords = new JPanel();
        JPanel Buttons = new JPanel();
        JButton btnOk = new JButton("Ok");
        JButton btnHelp = new JButton("Aide");
        JButton btnCancel = new JButton("Annuler");
        JTextField fldX = new JTextField("04", 5);
        JTextField fldY = new JTextField("04", 5);
        JCheckBox chkAlign = new JCheckBox ( "Aligner la Grille" );
        JCheckBox chkShow = new JCheckBox ( "Montrer la Grille" );
        JLabel txtX = new JLabel("X:");
        JLabel txtY = new JLabel("Y:");
        fenetre.setSize(500, 200);
        fenetre.setLayout(new FlowLayout());

        Checks.setLayout(new BoxLayout(Checks, BoxLayout.Y_AXIS));
        Checks.add(chkAlign);
        Checks.add(chkShow);

        Coords.setLayout(new BoxLayout(Coords, BoxLayout.Y_AXIS));
        Coords.add(txtX);
        Coords.add(fldX);
        Coords.add(txtY);
        Coords.add(fldY);

        Buttons.setLayout(new BoxLayout(Buttons, BoxLayout.Y_AXIS));
        Buttons.add(btnOk);
        Buttons.add(btnCancel);
        Buttons.add(btnHelp);

        fenetre.add(Checks);
        fenetre.add(Coords);
        fenetre.add(Buttons);
        fenetre.setVisible(true);

    }
}
