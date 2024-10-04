using System.Xml.Serialization;
using static lab4.Boquet.Plant.Bush;

namespace lab4
{
   public abstract class Need
    {
        public int a = 5;
    virtual  public void  Cool()
        {
            Console.WriteLine("COOOOOOOL");
            
        }
    }
    sealed public class Test
    {
        public int a = 2;
    }
    interface IFlower
    {
        string name { get; set;}
        public void Cool();
    }
    interface ITest:IFlower
    {

    }
 
    public class Boquet
    {

       public class Plant
        {
            public class Bush//куст
            {
             
             public class Cactus:Need,IFlower//Test
                {
                    public void ToString(Cactus arr)
                    {
                        Console.WriteLine("Price"+arr.price);
                        Console.WriteLine("Beauty:"+arr.beauty);
                    }
                    public override void Cool()
                    {
                        Console.WriteLine("Class Cool");
                    }
                    void IFlower.Cool()
                    {
                        Console.WriteLine("Inteface Cool");
                    }

                    public string name { get; set; }
               
                    public int GetHashCode(Cactus arr)
                    {
                        return arr.price.GetHashCode();
                    }
                   public System.Type GetType <T>(T arr)
                    {

                      return arr.GetType();
                    }
                   public bool Equals(Cactus arr,Cactus arr2)
                    {
                        return(arr.price==arr2.price&&arr.beauty==arr2.beauty);
                    }
                    int price = 200;
                    int beauty = 40;
                }
            }
            public class Flower
            { 
              public  class Rose:IFlower
                {
                    public void ToString(Rose arr)
                    {
                        Console.WriteLine("Price"+arr.price);
                        Console.WriteLine("Beauty:"+arr.beauty);
                    }
                    public  void Cool()
                    {
                        Console.WriteLine("Cool");
                    }
                    public string name { get; set; }
                    int price = 1000;
                    int beauty = 100;
                }
                public class Gladioulus:IFlower
                {
                    public void ToString(Gladioulus arr)
                    {
                        Console.WriteLine("Price"+arr.price);
                        Console.WriteLine("Beauty:"+arr.beauty);
                    }
                    public void Cool()
                    {
                        Console.WriteLine("Cool");
                    }
                    public string name { get; set; }
                    int price = 400;
                    int beauty = 70;
                }

            }
        }
        class Paper
        {
            int price1 = 50;
            int density1 = 300;//плотность
            int price2 = 70;
            int density2 = 450;
        }
    }


    public static class main
    { 
      public static void Main()
        {

          //  Boquet.Plant.Bush.Cactus test1 = new Boquet.Plant.Bush.Cactus();
          //  test1.ToString(test1);
          //Console.WriteLine(test1.GetHashCode(test1));
          //  Console.WriteLine(test1.GetType(test1));
          //  Boquet.Plant.Bush.Cactus test2 = new Boquet.Plant.Bush.Cactus();
          //  Console.WriteLine(test1.Equals(test1, test2));
          Boquet.Plant.Bush.Cactus temp1=new Boquet.Plant.Bush.Cactus();
          Boquet.Plant.Flower.Rose temp2 = new Boquet.Plant.Flower.Rose();
            Console.WriteLine(temp1 is IFlower);
            Console.WriteLine(temp1 is ITest);
            ITest gg=temp1 as ITest;
            Console.WriteLine(gg is ITest);
            //Console.WriteLine(temp1.a);
            //  temp2.name="rose";
            //temp1.Cool();
            //  IFlower temp=temp1;
            //  temp.Cool();
          //  temp2.Cool();

        }
    }
    
}