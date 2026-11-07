// FUN_00046ff8 @ 00046ff8  size=72  callers=1
// program: cgminer


void FUN_00046ff8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 + 2U < 2) {
    return;
  }
  FUN_00046d74();
  iVar1 = FUN_0004854c(param_1 + 0x28);
  if (iVar1 != param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("c == d","load.c",0x11a,"lex_unget_unsave");
  }
  return;
}

