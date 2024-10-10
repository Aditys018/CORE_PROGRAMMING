
class WrapperDemo
{
    public static void main(String Wrapper[])
    {
        int no1 = 11;

        Integer no2 = 11;

        System.out.println(no1);
        System.out.println(no2);

        int x = no2;    //autounboxing
        System.out.println(x);

        Integer y = no1;    //autoboxing
        System.out.println(y);
    }

}