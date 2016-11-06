import java.lang.Math;
import javax.swing.JOptionPane;
import java.util.Scanner;

public class Circle{
	double radius;
	Circle(){
		radius = 0;
	}
	Circle(double r){
		radius = r;
	}
	double getRadius(){
		return radius;
		
	}
	double getPerimeter(){
		return 2*Math.PI*radius;
		
	}
			
}
class Cylinder extends Circle{
	double height;
	Cylinder()
	{
		Scanner cy = new Scanner(System.in);  
		System.out.println("请输入半径 ");  
        this.radius = cy.nextDouble(); 
		System.out.println("请输入周长 ");  
        this.height = cy.nextDouble();
	}
	double getHeight(){
		return height;
	}
	double getVol(){
		return Math.PI*radius*radius*height;
	}
	
}	
class test{
	static void disp(Circle c){
		System.out.println("该圆半径为："+ c.getRadius());
		System.out.println("该圆周长为："+ c.getPerimeter());
		System.out.println("该圆面积为："+ Math.PI*c.getRadius()*c.getRadius());
	}
	static void dispVol(Cylinder cy)
	{
		System.out.println("该圆柱体的体积为："+ cy.getVol());
	}
	public static void main(String args[]){
		Circle c1 = new Circle();
		Circle c2 = new Circle(2.0);
		System.out.println("圆c1半径为："+ c1.getRadius());
		System.out.println("圆c1周长为"+ c1.getPerimeter());
		System.out.println("圆c2半径为："+ c2.getRadius());
		System.out.println("圆c2周长为"+ c2.getPerimeter());
		disp(c2);
		Cylinder cy = new Cylinder();
		dispVol(cy);
        }

}
	