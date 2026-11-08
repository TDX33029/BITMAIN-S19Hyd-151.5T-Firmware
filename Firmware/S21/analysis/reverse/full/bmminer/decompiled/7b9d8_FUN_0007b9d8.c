// FUN_0007b9d8 @ 0007b9d8  size=144  callers=3
// program: bmminer


void FUN_0007b9d8(int param_1,uint param_2)

{
  byte bVar1;
  
  if ((param_2 != 0xffffffff) && (param_2 != 0xfffffffe)) {
    FUN_0007b7a4(param_1,param_2);
    bVar1 = FUN_0007dda8(param_1 + 0x28);
    if (param_2 != bVar1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("c == d","load.c",0x11a,"lex_unget_unsave");
    }
  }
  return;
}

