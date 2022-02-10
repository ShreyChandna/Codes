class Test1
    {public String name;
    Test1(String name)
    {
        this.name=name;
        System.out.println("name is(parent):"+name);
    }
}
    class Test extends Test1{
        public String name;
        Test(String name) {
            super(name);
            this.name=name;
            System.out.println("name is(child)"+name);
        }
    }
    public class Inherit {
    public static void main(String[] args) {
        Test t=new Test("shrey");

        
    }
}


