import java.util.*;
class Player1
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String s=sc.next();
StringBuffer sb=new StringBuffer(s);
StringBuffer sb1=sb.reverse();
System.out.print(String.valueOf(sb1));
}
}
