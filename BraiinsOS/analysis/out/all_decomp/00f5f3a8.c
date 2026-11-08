// FUN_00f5f3a8 @ 00f5f3a8 size=288 calls_out=4 calls_in=0
// strings: 

void FUN_00f5f3a8(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  piVar3 = (int *)*param_2;
  DataMemoryBarrier(0xb);
  if (piVar3[4] == 1) {
    iVar4 = *piVar3;
    iVar5 = piVar3[1];
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = (iVar4 - param_3) + iVar5;
    param_1[3] = (int)piVar3;
    return;
  }
  if ((int)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_4);
  }
  if (param_4 == 0) {
    uVar7 = 0;
    iVar4 = 1;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(param_4);
    uVar7 = param_4;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  piVar6 = piVar3 + 4;
  FUN_016dd1aa(iVar4,param_3,param_4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
    thunk_FUN_016d3fb4(piVar3);
  }
  uVar2 = 0x20 - LZCOUNT(uVar7 >> 10);
  if (6 < uVar2) {
    uVar2 = 7;
  }
  *param_1 = iVar4;
  param_1[1] = param_4;
  param_1[2] = uVar7;
  param_1[3] = uVar2 << 2 | 1;
  return;
}

