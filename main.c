/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamini <aamini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:45:03 by aamini            #+#    #+#             */
/*   Updated: 2025/05/28 13:02:44 by aamini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
    int count;

    ft_printf("======== ft_printf TESTS ========\n\n");

    // Char test
    count = ft_printf("Char: %c\n", 'A');
    ft_printf("Printed chars: %d\n\n", count);

    // String test
    count = ft_printf("String: %s\n", "Hello");
    ft_printf("Printed chars: %d\n\n", count);

    // Empty string test
    count = ft_printf("Empty string: %s\n", "");
    ft_printf("Printed chars: %d\n\n", count);

    // NULL string test
    count = ft_printf("NULL string: %s\n", (char *)NULL);
    ft_printf("Printed chars: %d\n\n", count);

    // Pointer test
    count = ft_printf("Pointer: %p\n", (void *)0x1234abcd);
    ft_printf("Printed chars: %d\n\n", count);

    // NULL pointer test
    count = ft_printf("NULL pointer: %p\n", NULL);
    ft_printf("Printed chars: %d\n\n", count);

    // Decimal test
    count = ft_printf("Decimal: %d\n", 42);
    ft_printf("Printed chars: %d\n\n", count);

    // Integer negative test
    count = ft_printf("Integer negative: %i\n", -42);
    ft_printf("Printed chars: %d\n\n", count);

    // Integer INT_MAX
    count = ft_printf("INT_MAX: %d\n", INT_MAX);
    ft_printf("Printed chars: %d\n\n", count);

    // Integer INT_MIN
    count = ft_printf("INT_MIN: %d\n", INT_MIN);
    ft_printf("Printed chars: %d\n\n", count);

    // Unsigned test
    count = ft_printf("Unsigned: %u\n", 3000000000u);
    ft_printf("Printed chars: %d\n\n", count);

    // Hex lowercase
    count = ft_printf("Hex lower: %x\n", 255);
    ft_printf("Printed chars: %d\n\n", count);

    // Hex uppercase
    count = ft_printf("Hex upper: %X\n", 255);
    ft_printf("Printed chars: %d\n\n", count);

    // Percent test
    count = ft_printf("Percent: %%\n");
    ft_printf("Printed chars: %d\n\n", count);

    // Mixed formats
    count = ft_printf("Mix: char %c, str %s, int %d, hex %x\n", 'B', "Mixing", 123, 123);
    ft_printf("Printed chars: %d\n\n", count);

    // Compare with real printf
    printf("======== Real printf TESTS ========\n\n");

    printf("Percent real printf: %%\n\n");
    printf("INT_MAX real printf: %d\n", INT_MAX);
    printf("INT_MIN real printf: %d\n", INT_MIN);
    printf("Unsigned real printf: %u\n", 3000000000u);
    printf("Hex lower real printf: %x\n", 255);
    printf("Hex upper real printf: %X\n", 255);
    printf("Pointer real printf: %p\n", (void *)0x1234abcd);
    printf("NULL pointer real printf: %p\n", NULL);
    printf("Mix real printf: char %c, str %s, int %d, hex %x\n", 'B', "Mixing", 123, 123);

    return 0;
}
