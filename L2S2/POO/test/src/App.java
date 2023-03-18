class A 
{
    int a=1;
    public void a()
    {
        System.out.println("Shmem");
    }
}

class B extends A 
{
    int b=5;
    public void a() {
        System.out.println("Shmem b " +b+ " a "+a+" A.a ");
    }
}

class Main {
    public static void main(String[] args) 
    {
        B bou = new B();
        bou.a();  
    }
}