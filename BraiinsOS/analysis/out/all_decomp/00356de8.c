// FUN_00356de8 @ 00356de8 size=1 calls_out=0 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */

void FUN_00356de8(undefined4 param_1,char param_2)

{
  int in_r12;
  bool in_OV;
  
  if (!in_OV) {
    *(char *)(in_r12 + -0x176) = -0x78 - param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

