//
//  main.c
//  FizzBuzz
//
//  Created by Umraan Ahmed on 2019-03-20.
//  Copyright © 2019 Umraan Ahmed. All rights reserved.
//

#include <stdio.h>

int main(void){
    
    int i;
    for(i=1; i<101; i++) {
        if(i % 15 ==0)
            printf("FizzBuzz\n");
        else if(i % 3 ==0)
            printf("Fizz\n");
        else if(i % 5 ==0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}
