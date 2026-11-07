// FUN_019e1794 @ 019e1794 size=92 calls_out=4 calls_in=1
// strings: queue not empty

void FUN_019e1794(undefined4 param_1)

{
  int iVar1;
  
  if (((DAT_01d51b08 & 0x7fffffff) != 0) && (iVar1 = FUN_0197ac0c(), iVar1 == 0)) {
    return;
  }
  iVar1 = FUN_019e17fc(param_1);
  if (iVar1 != 0) {
    thunk_FUN_019d8d64();
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("queue not empty",0x1f,&DAT_01d2903c);
  }
  return;
}

