// FUN_01696040 @ 01696040 size=136 calls_out=4 calls_in=2
// strings: 

void FUN_01696040(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  piVar2 = (int *)FUN_00fba86c();
  local_14 = param_1[2];
  iStack_1c = *param_1;
  iStack_18 = param_1[1];
  *param_1 = 0;
  if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ae130);
  }
  FUN_01695ef8(&iStack_1c,piVar2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00fbaa00(piVar2);
    return;
  }
  return;
}

