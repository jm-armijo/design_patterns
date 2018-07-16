#include "Strategy.hpp"

void ConcreteStrategyTextSmall::do_job() {
    std::cout << "Some text" << std::endl;
}

void ConcreteStrategyTextMedium::do_job() {
    std::cout << "   ___                  _           _    " << std::endl;
    std::cout << "  / __| ___ _ __  ___  | |_ _____ _| |_  " << std::endl;
    std::cout << "  \\__ \\/ _ \\ '  \\/ -_) |  _/ -_) \\ /  _| " << std::endl; 
    std::cout << "  |___/\\___/_|_|_\\___|  \\__\\___/_\\_\\\\__| " << std::endl; 
}

void ConcreteStrategyTextLarge::do_job() {
    std::cout << "    ______                                               " << std::endl; 
    std::cout << "   / _____)                       _                 _    " << std::endl;
    std::cout << "  ( (____   ___  ____  _____    _| |_ _____ _   _ _| |_  " << std::endl;
    std::cout << "   \\____ \\ / _ \\|    \\| ___ |  (_   _) ___ ( \\ / |_   _) " << std::endl;
    std::cout << "   _____) ) |_| | | | | ____|    | |_| ____|) X (  | |_  " << std::endl;
    std::cout << "  (______/ \\___/|_|_|_|_____)     \\__)_____|_/ \\_)  \\__) " << std::endl;
}
