// FUN_00f5f22c @ 00f5f22c size=380 calls_out=6 calls_in=3
// strings: 

void FUN_00f5f22c(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  int extraout_r3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  iVar6 = *param_2;
  piVar7 = (int *)(iVar6 + 0x10);
  do {
    iVar3 = *piVar7;
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = iVar3 + 1;
  if (-1 < iVar3) {
    *param_1 = &DAT_018ad580;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = iVar6;
    return;
  }
  uVar8 = FUN_00f6015c();
  piVar7 = (int *)uVar8;
  piVar4 = (int *)*(undefined4 *)((ulonglong)uVar8 >> 0x20);
  piVar5 = piVar4 + 4;
  DataMemoryBarrier(0xb);
  if (piVar4[4] == 1) {
    iVar6 = *piVar4;
    iVar3 = piVar4[1];
    *piVar4 = 0;
    piVar4[1] = 1;
    piVar4[2] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(piVar4[1]);
      }
      thunk_FUN_016d3fb4(piVar4);
    }
    FUN_016dd52c(iVar3,extraout_r2,extraout_r3);
  }
  else {
    if (extraout_r3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,extraout_r3);
    }
    if (extraout_r3 == 0) {
      iVar6 = 0;
      iVar3 = 1;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(extraout_r3);
      iVar6 = extraout_r3;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,extraout_r3);
      }
    }
    FUN_016dd1aa(iVar3,extraout_r2,extraout_r3);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(piVar4[1]);
      }
      thunk_FUN_016d3fb4(piVar4);
      *piVar7 = iVar6;
      piVar7[1] = iVar3;
      piVar7[2] = extraout_r3;
      return;
    }
  }
  *piVar7 = iVar6;
  piVar7[1] = iVar3;
  piVar7[2] = extraout_r3;
  return;
}

