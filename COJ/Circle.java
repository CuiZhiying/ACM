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
		System.out.println("������뾶 ");  
        this.radius = cy.nextDouble(); 
		System.out.println("�������ܳ� ");  
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
		System.out.println("��Բ�뾶Ϊ��"+ c.getRadius());
		System.out.println("��Բ�ܳ�Ϊ��"+ c.getPerimeter());
		System.out.println("��Բ���Ϊ��"+ Math.PI*c.getRadius()*c.getRadius());
	}
	static void dispVol(Cylinder cy)
	{
		System.out.println("��Բ��������Ϊ��"+ cy.getVol());
	}
	public static void main(String args[]){
		Circle c1 = new Circle();
		Circle c2 = new Circle(2.0);
		System.out.println("Բc1�뾶Ϊ��"+ c1.getRadius());
		System.out.println("Բc1�ܳ�Ϊ��"+ c1.getPerimeter());
		System.out.println("Բc2�뾶Ϊ��"+ c2.getRadius());
		System.out.println("Բc2�ܳ�Ϊ��"+ c2.getPerimeter());
		disp(c2);
		Cylinder cy = new Cylinder();
		dispVol(cy);
        }

}
	