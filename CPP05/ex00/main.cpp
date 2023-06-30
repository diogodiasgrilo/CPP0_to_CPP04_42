/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/28 20:49:30 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongCat* c = new WrongCat();
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;

    std::cout << wrong->getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl << std::endl;
    wrong->makeSound();
    c->makeSound();
    meta->makeSound();
    j->makeSound();
    i->makeSound(); //will output the cat sound!
   
    std::cout << std::endl;
    
    delete wrong;
    delete c;
    delete meta;
    delete j;
    delete i;
    return 0;
}