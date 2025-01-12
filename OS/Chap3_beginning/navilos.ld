ENTRY(vector_start)
SECTIONS
{
    . = 0x0;

    .text :
    {
        *(vector_start)
        *(vector .rodata)
    }
    .data :
    {
        *(.data)
    }
    .bss :
    {
        *(.bss)
    }
}
