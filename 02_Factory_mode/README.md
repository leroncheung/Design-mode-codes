
# 工厂模式
属于创建型模式，提供了一种创建对象的最佳方式。在工厂模式中，我们在创建对象时，不会对客户端暴露创建逻辑，并且是通过一个共同的接口来指向新创建的对象。  
> 简单来说，使用了C++多态的特性，将存在继承关系的类，通过一个工厂类创建对应的子类对象。在项目复杂时，可以便于子类对象的创建。

# 工厂模式分类
1. 简单工厂模式
    > - 工厂类：定义一个用于创建指定具体实例对象的接口。
    > - 抽象产品类：具体产品类继承的父类或接口。
    > - 具体产品类：工厂类创建的对象就是具体产品类的实例。

    > **缺陷**：可扩展性差，新增产品时需要修改工厂类。
2. 工厂方法模式
    > - 抽象工厂类
    > - 具体工厂类
    > - 抽象产品类
    > - 具体产品类

    > **特点**：具体产品类的对象创建由具体对象对应的具体工厂类去实现  
    > **缺陷**：新增产品就需要增加对应的工厂类
3. 抽象工厂模式
    > 基本同2，具体工厂可以生产多种类型产品
4. 模板工厂
    > 针对工厂方法模式封装成模板工厂类，这样在新增产品时，不再需要新增具体的产品工厂类，减少代码实现量。
