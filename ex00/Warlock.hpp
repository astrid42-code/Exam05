#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>


class Warlock{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();


        const std::string &	getName() const;
		const std::string & getTitle() const;
		void	setTitle(const std::string title);
        void    introduce() const;


    private:
        Warlock();
        Warlock(const Warlock & warlock_cp);
        Warlock & operator=(const Warlock & warlock_op);
        std::string _name;
        std::string _title;
};
// std::ostreqm operator<(ostream &o, const Warlock & warlock_op);

#endif