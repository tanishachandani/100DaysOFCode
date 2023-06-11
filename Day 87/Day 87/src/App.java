// https://www.codechef.com/problems/INSTNOODLE
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			Scanner sc = new Scanner(System.in);
		    int X = sc.nextInt();
		    int Y = sc.nextInt();
		    System.out.println(X*Y);
	}
}


// https://www.codechef.com/problems/CHEFSCORE
import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner read = new Scanner(System.in);
		int test = read.nextInt();
		for(int i=0; i<test; i++){
		    int a = read.nextInt();
		    int b = read.nextInt();
		    int c = read.nextInt();
		    
		    if(c % b == 0){
		        System.out.println("Yes");
		    }else {
		        System.out.println("No");
		    }
		}
	}
}


// https://www.codechef.com/problems/CHEFRACES
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int t=  sc.nextInt();
	    while(t-->0)
	    {
	        int x = sc.nextInt();
	        int y = sc.nextInt();
	        int u = sc.nextInt();
	        int v = sc.nextInt();
	        int count=0;
	        if(x !=u && x != v)
	        count++;
	        if(y !=u && y !=v)
	        count++;
	        System.out.println(count);
	    }
	    
	}
}


// https://www.codechef.com/problems/KITCHENCOST
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
		    int f = sc.nextInt();
		    int[] f_arr = new int[n];
		    int[] c_arr = new int[n];
		    int total = 0;
		    for(int i=0; i<n; i++)
		        f_arr[i] = sc.nextInt();
		    for(int j=0; j<n; j++)
		        c_arr[j] = sc.nextInt();
		    for(int k=0; k<n; k++)
		    {
		        if(f_arr[k]>=f)
		            total += c_arr[k];
		    }
		    System.out.println(total);
		}
	}
}