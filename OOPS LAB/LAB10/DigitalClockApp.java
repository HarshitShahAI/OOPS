package com.oopslab.LAB9; 

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.util.Date;

public class DigitalClockApp extends JFrame {
    private JLabel clockLabel; 
    private Timer clockTimer; 

    public DigitalClockApp() {
        setTitle("Digital Clock");
        setSize(300, 100);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        
        clockLabel = new JLabel(); 
        clockLabel.setFont(new Font("Arial", Font.BOLD, 24));
        clockLabel.setHorizontalAlignment(SwingConstants.CENTER);
        add(clockLabel, BorderLayout.CENTER);

        
        clockTimer = new Timer(1000, new ActionListener() { 
            @Override
            public void actionPerformed(ActionEvent e) {
                updateClock();
            }
        });
        clockTimer.start(); 
    }

    
    private void updateClock() {
        SimpleDateFormat dateTimeFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        String currentDateTime = dateTimeFormat.format(new Date()); 
        clockLabel.setText(currentDateTime); 
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            DigitalClockApp digitalClock = new DigitalClockApp(); 
            digitalClock.setVisible(true);
        });
    }
}
