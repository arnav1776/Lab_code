import javax.swing.*;  
import java.awt.*;  

class swingProgram extends JFrame{
	
	JTextField text1, text2, text3;
	JLabel l1, l2, l3;  
    JButton add1;  
    JPanel panel;
    
    swingProgram(){
    	l1 = new JLabel();
    	l1.setText("UserId");
    	text1 = new JTextField(20);  
    	
    	l2 = new JLabel();
    	l2.setText("Name==>");
    	text2 = new JTextField(20);  
    	
    	l3 = new JLabel();
    	l3.setText("Email==>");
    	text3 = new JTextField(20);  
    	
    	add1=new JButton("ADD");
    	panel=new JPanel(new GridLayout(6,2));
    	panel.add(l1);
    	panel.add(text1);
    	panel.add(l2);
    	panel.add(text2);
    	panel.add(l3);
    	panel.add(text3);
    	panel.add(add1);
    	
    	add(panel, BorderLayout.CENTER);
    	setTitle("form");
    }
    
    public static void main(String s[]) {
    	swingProgram f = new swingProgram();
    	f.setSize(300,300);
    	f.setVisible(true);
    }
}