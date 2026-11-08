// entry @ 00010b80  size=36  callers=0
// program: update-daemon


void entry(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  undefined1 uStack00000004;
  
  __libc_start_main(FUN_00010930,in_stack_00000000,&uStack00000004,0x10fd1,&DAT_0001100d,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}

