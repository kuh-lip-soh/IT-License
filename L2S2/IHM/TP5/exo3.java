import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.Panel;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.DefaultListModel;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;

public class exo3 extends JFrame
{
	public exo3()
	{
		initUI();
	}

	public final void initUI()
	{
		JPanel panel = new JPanel();
		getContentPane().add(panel);
		panel.setLayout(new GridLayout());
		
		JButton ajouter = new JButton("Ajouter");
		ajouter.setPreferredSize(new Dimension(100,10));
                
		JTextField texte = new JTextField(" ");
		texte.setPreferredSize(new Dimension(100,30));

                DefaultListModel listBox1 = new DefaultListModel();
		JList liste = new JList(listBox1);
		listBox1.addElement("un");
		
		JButton deplacer1 = new JButton("Deplacer (1 vers 2)");
		ajouter.setPreferredSize(new Dimension(100,30));
		JButton deplacer2 = new JButton("Deplacer (2 vers 1)");

                
                DefaultListModel listBox2 = new DefaultListModel();
		JList liste2 = new JList(listBox2);
		listBox2.addElement("deux");

		ajouter.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent event)
			{
				listBox1.addElement(texte.getText());
			}
		});
		
		deplacer1.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent event)
			{
				listBox2.insertElementAt(liste.getSelectedValue(),liste.getSelectedIndex());
				listBox1.removeElementAt(liste.getSelectedIndex());
			}
		});
		
		deplacer2.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent event)
			{
				listBox1.insertElementAt(liste2.getSelectedValue(),liste2.getSelectedIndex());
				listBox2.removeElementAt(liste2.getSelectedIndex());
			}
		});
		
		Panel pend=new Panel();
		GridLayout g1 = new GridLayout(3,1);
		g1.setHgap(50);
		g1.setVgap(10);
		pend.setLayout(g1);
		pend.add(ajouter); 
		pend.add(texte); 
		pend.add(liste); 
		panel.add(pend);
		
		Panel pend2=new Panel();
		GridLayout g2 = new GridLayout(3,1);
		g2.setHgap(50);
		g2.setVgap(10);
		pend2.setLayout(g2);
		pend2.add(deplacer1); 
		pend2.add(deplacer2); 
		pend2.add(liste2); 
		panel.add(pend2);

	
		setTitle("Narita Boy");
		setSize(500, 500);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

	public static void main(String[] args)
	{
		exo3 ex = new exo3();
		ex.setVisible(true); 
	}
}
