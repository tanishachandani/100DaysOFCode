public class App {
    
    // ENCAPSULATION
    public class Person {
        private String name;
        private int age;
        
        public Person(String name, int age) {
            this.name = name;
            this.age = age;
        }
        
        public String getName() {
            return name;
        }
        
        public int getAge() {
            return age;
        }
        
        public void celebrateBirthday() {
            age++;
            System.out.println("Happy birthday, " + name + "! You are now " + age + " years old.");
        }
    }

    // INHERITANCE 

    public class Animal {
        protected String name;
        
        public Animal(String name) {
            this.name = name;
        }
        
        public void eat() {
            System.out.println(name + " is eating.");
        }
    }
    
    public class Dog extends Animal {
        public Dog(String name) {
            super(name);
        }
        
        public void bark() {
            System.out.println(name + " is barking.");
        }
    }

    // POLYMORPHISM
    public class Shape {
        public void draw() {
            System.out.println("Drawing a shape.");
        }
    }
    
    public class Circle extends Shape {
        @Override
        public void draw() {
            System.out.println("Drawing a circle.");
        }
    }
    
    public class Square extends Shape {
        @Override
        public void draw() {
            System.out.println("Drawing a square.");
        }
    }
    
    

    public static void main(String[] args){
    }
}
