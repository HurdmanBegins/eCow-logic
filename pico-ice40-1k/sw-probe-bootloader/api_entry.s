    .syntax unified
    .arch armv6-m

    .section .api_entry
    .align 4
api_entry:

api_dhcp:
    .long    DHCP_init
    .long    DHCP_run

api_tftp:
    .long    tftp_init
    .long    tftp_run

    .align 4
api_oled:
    .long    0x00000000 /* ToDo: oled_config */
    .long    oled_line
    .long    oled_puts
    .long    0x00000000 /* ToDo: oled_wr */

    .align 4
api_uart:
    .long    uart_putc
    .long    uart_puts
    .long    uart_puthex8