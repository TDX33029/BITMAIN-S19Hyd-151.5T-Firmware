// FUN_0146b4f0 @ 0146b4f0 size=444 calls_out=5 calls_in=2
// strings: 

void FUN_0146b4f0(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  piVar6 = param_2 + 2;
  if (*piVar6 != 4 || param_2[3] != 0) {
    if (*piVar6 == 3 && param_2[3] == 0) {
      piVar7 = (int *)param_2[4];
      iVar8 = *piVar7;
      if (iVar8 != 0) {
        puVar10 = (undefined4 *)piVar7[1];
        pcVar3 = (code *)*puVar10;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar8);
        }
        if (puVar10[1] != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
      }
      thunk_FUN_016d3fb4(piVar7);
    }
    else {
      FUN_0146b7d0(piVar6);
    }
  }
  FUN_016dd1aa(piVar6,param_3,0x68);
  puVar2 = (uint *)(param_2 + 0x20);
  uVar5 = param_2[0x20];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_0146b5e8;
      uVar5 = *puVar2;
      if (uVar5 == uVar4) break;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(puVar2);
    if (bVar1) {
      *puVar2 = uVar4 | 2;
    }
    DataMemoryBarrier(0xb);
  } while (!bVar1);
LAB_0146b5e8:
  if ((uVar4 & 5) == 1) {
    (**(code **)(param_2[0x1e] + 8))(param_2[0x1f]);
  }
  if ((uVar4 & 4) == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar8 + -1;
  }
  else {
    iVar8 = *piVar6;
    iVar9 = param_2[3];
    *piVar6 = 4;
    param_2[3] = 0;
    if (iVar8 == 4 && iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    FUN_016dd1aa(param_1 + 2,param_2 + 4,0x60);
    *param_1 = iVar8;
    param_1[1] = iVar9;
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar8 + -1;
  }
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d948(param_2);
  }
  return;
}

