// A Person class containing their name, phone number, address, list of recent orders, loyalty card number, salary, employee ID, job title(engineer, senior engineer, ...) is combining too much into a single class.
// This can be split up into more logical concepts.One option is as follows:

// -The Person class only stores their name, phone number, and address, things that are really direct properties of a person.
// - A Customer class derives from Person and additionally stores a list of recent orders, loyalty card number, properties that are linked to a customer.
// - An Employee class also derives from Person and stores a salary, employee ID, and title, properties that are linked to an employee.
