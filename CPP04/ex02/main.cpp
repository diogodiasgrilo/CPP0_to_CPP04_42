/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/28 23:17:51 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int number = 10;
    // const AAnimal* meta = new AAnimal();
    const AAnimal *animals[number];
    
    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < number; i++)
    {
        std::cout << i + 1 << ": ";
        animals[i]->makeSound();
    }
    for (int i = 0; i < number; i++)
    {
        delete animals[i];
    }
    {
        std::cout << std::endl << "Checking the copy constructors: " << std::endl;
        const 	Dog*	dog = new Dog;
        const	AAnimal* other = new Dog(*dog);
        dog->makeSound();
        other->makeSound();
        delete dog;
        delete other;
    }
}