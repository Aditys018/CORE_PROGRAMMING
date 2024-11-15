
class Demo
{
    public Demo()
    {
        System.out.println("Inside constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside finalize method");
    }
}
class ObjectDemo3
{
    public static void main(String Ar[])
    {
       String s1 = "Marvellous";
       String s2 = "PPA";
       String s3 = "Marvellous";


       System.out.println(s1.hashCode());
       System.out.println(s2.hashCode());
       System.out.println(s3.hashCode());

    }
}