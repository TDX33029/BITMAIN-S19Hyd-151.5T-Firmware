// FUN_00567808 @ 00567808 size=1 calls_out=0 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */

void FUN_00567808(void)

{
  bool in_OV;
  
  if (in_OV) {
    software_interrupt(0x746f72);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

