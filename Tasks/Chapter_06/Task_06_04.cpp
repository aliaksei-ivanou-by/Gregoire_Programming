// SOLID:

// S: Single Responsibility Principle (SRP)
// A single component should have a single, well-defined responsibility and should not combine unrelated functionality.

// O : Open / Closed Principle (OCP)
// A class should be open to extension, but closed for modification.
// Inheritance is one way to accomplish this.
// Other mechanisms are templates, function overloading, and more.
// In general, we speak about customization points in this context.

// L : Liskov Substitution Principle (LSP)
// You should be able to replace an instance of an object with an instance of a subtype of that object.
// Chapter 5 explains this principle in the section "The Fine Line Between Has-A and Is-A" with an example to decide whether the relationship between AssociativeArray and MultiAssociativeArray is a has-a or an is-a relationship.

// I : Interface Segregation Principle (ISP)
// Keep interfaces clean and simple.
// It is better to have many smaller, well-defined single-responsibility interfaces than to have broad, general-purpose interfaces.

// D : Dependency Inversion Principle (DIP)
// Use interfaces to invent dependency relationships.
// One way to support the dependency inversion principle is dependency injection, discussed earlier in this chapter and further in Chapter 33, "Applying Design Patterns."
