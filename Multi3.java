class Multi3
{
    public static void main(String Arg[])
    {
        Thread t = Thread.currentThread();
        System.out.println("Name of current thread is : "+ t.getname());
        System.out.println("priority of main thread is :"+ t.getpriority());
    }
}