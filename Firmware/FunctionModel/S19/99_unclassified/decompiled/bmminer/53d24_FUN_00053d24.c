// FUN_00053d24 @ 00053d24  size=72  callers=1
// program: bmminer


void FUN_00053d24(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 + 2U < 2) {
    return;
  }
  FUN_00053aa0();
  iVar1 = FUN_00055278(param_1 + 0x28);
  if (iVar1 != param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("c == d","load.c",0x11a,"lex_unget_unsave");
  }
  return;
}

