// FUN_00f5e6a4 @ 00f5e6a4 size=324 calls_out=6 calls_in=3
// strings: 

void FUN_00f5e6a4(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 uStack_21;
  
  piVar4 = param_2 + 2;
  if (*piVar4 == 1) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *piVar4 = 0;
        DataMemoryBarrier(0xb);
        iVar2 = *param_2;
        iVar5 = param_2[1];
        thunk_FUN_016d3fb4(param_2);
        FUN_016dd52c(iVar2,param_3,param_4);
        goto LAB_00f5e7ac;
      }
    } while (*piVar4 == 1);
  }
  ClearExclusiveLocal();
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == 0) {
    iVar5 = 0;
    iVar2 = 1;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(param_4);
    iVar5 = param_4;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iVar2,param_3,param_4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    if (param_2[1] < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_21,&DAT_0187f9b8,&DAT_0187fa1c);
    }
    thunk_FUN_016d3fb4(*param_2);
    thunk_FUN_016d3fb4(param_2);
  }
LAB_00f5e7ac:
  *param_1 = iVar5;
  param_1[1] = iVar2;
  param_1[2] = param_4;
  return;
}

