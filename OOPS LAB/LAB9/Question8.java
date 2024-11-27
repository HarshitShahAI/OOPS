package com.oopslab.LAB8;

abstract class Figure {
    protected double r, a, v;
    protected final double pi = 3.1428;

    public abstract void calcArea();
    public abstract void calcVolume();
    public abstract void dispArea();
    public abstract void dispVolume();
}

class Cone extends Figure {
    private double s; 
    private double h; 

    public Cone(double radius, double slantHeight, double height) {
        this.r = radius;
        this.s = slantHeight;
        this.h = height;
        calcArea();
        calcVolume();
    }

    public void calcArea() {
        a = (pi * r * s) + (pi * r * r);
    }

    public void calcVolume() {
        v = (pi * r * r * h) / 3;
    }

    public void dispArea() {
        System.out.println("Cone Area: " + a);
    }

    public void dispVolume() {
        System.out.println("Cone Volume: " + v);
    }
}

class Sphere extends Figure {
    public Sphere(double radius) {
        this.r = radius;
        calcArea();
        calcVolume();
    }

    public void calcArea() {
        a = 4 * pi * r * r;
    }

    public void calcVolume() {
        v = (4 * pi * r * r * r) / 3;
    }

    public void dispArea() {
        System.out.println("Sphere Area: " + a);
    }

    public void dispVolume() {
        System.out.println("Sphere Volume: " + v);
    }
}

class Cylinder extends Figure {
    private double h; 

    public Cylinder(double radius, double height) {
        this.r = radius;
        this.h = height;
        calcArea();
        calcVolume();
    }

    public void calcArea() {
        a = (2 * pi * r * r) + (2 * pi * r * h);
    }

    public void calcVolume() {
        v = pi * r * r * h;
    }

    public void dispArea() {
        System.out.println("Cylinder Area: " + a);
    }

    public void dispVolume() {
        System.out.println("Cylinder Volume: " + v);
    }
}

public class Question8 {
    public static void main(String[] args) {
        Cone cone = new Cone(3, 5, 4);
        cone.dispArea();
        cone.dispVolume();

        Sphere sphere = new Sphere(3);
        sphere.dispArea();
        sphere.dispVolume();

        Cylinder cylinder = new Cylinder(3, 4);
        cylinder.dispArea();
        cylinder.dispVolume();
    }
}


