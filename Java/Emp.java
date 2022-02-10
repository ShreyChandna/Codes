public class Emp{
    protected int id;
    protected String name;
    protected float Basic_Salary; 
    protected String Company_Name;
    Emp()
    {
    Company_Name="Amazon";
    }

   static class Emp2 extends Emp{
     Emp2(int id,String name,float Basic_Salary)
    {   super();
        this.id=id;
        this.name=name;
        this.Basic_Salary=Basic_Salary;
    }
    
    void display()
    {
        System.out.println("ID:"+id);
        System.out.println("NAME:"+name);
        System.out.println("BASIC SALARY:"+Basic_Salary);
        System.out.println("COMPANY NAME:"+Company_Name);
        System.out.println("HRA="+(0.3*Basic_Salary));
        System.out.println("DA="+(0.2*Basic_Salary));
        System.out.println("TA="+(0.1*Basic_Salary));
        System.out.println("MA="+(0.15*Basic_Salary));
        System.out.println("PF="+(0.05*Basic_Salary));
    }
}
    public static void main(String[] args) {
       
            Emp2 e3=new Emp2(12,"shrey", 100000);
            e3.display();
            Emp2 e4=new Emp2(30,"Megha Lohani",200000);
            System.out.println();
            e4.display();
        }
}
