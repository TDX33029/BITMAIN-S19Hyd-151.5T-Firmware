// FUN_00d051dc @ 00d051dc size=532 calls_out=8 calls_in=0
// strings: 

void FUN_00d051dc(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_1398 [704];
  int local_10d8;
  int local_10d4;
  undefined1 auStack_10d0 [2128];
  undefined1 auStack_880 [1432];
  undefined1 auStack_2e8 [708];
  undefined4 local_24;
  
  FUN_016e0146(10);
  FUN_00ba6388((int)*(undefined8 *)(param_1 + 0x630),auStack_1398,param_1,param_1 + 0x598,
               param_1 + 0x638,*(undefined4 *)(param_1 + 0x628),*(undefined4 *)(param_1 + 0x62c));
  piVar7 = *(int **)(param_1 + 0x670);
  FUN_016dd1aa(auStack_880,param_1,0x598);
  FUN_016dd1aa(auStack_2e8,auStack_1398,0x2c0);
  local_24 = 0;
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a47a4);
  }
  piVar8 = piVar7 + 2;
  if (*piVar8 != 2 || piVar7[3] != 0) {
    FUN_00d054d0(piVar8);
  }
  FUN_016dd1aa(piVar8,auStack_880,0x858);
  puVar2 = (uint *)(piVar7 + 0x21c);
  uVar5 = piVar7[0x21c];
  do {
    while( true ) {
      uVar4 = uVar5;
      if ((uVar4 & 4) != 0) goto LAB_00d052ec;
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
LAB_00d052ec:
  if ((uVar4 & 5) == 1) {
    (**(code **)(piVar7[0x21a] + 8))(piVar7[0x21b]);
  }
  if ((uVar4 & 4) == 0) {
    local_10d4 = 0;
    local_10d8 = 2;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar3 + -1;
  }
  else {
    iVar9 = *piVar8;
    iVar6 = piVar7[3];
    *piVar8 = 2;
    piVar7[3] = 0;
    if (iVar9 == 2 && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a47b4);
    }
    FUN_016dd1aa(auStack_10d0,piVar7 + 4,0x850);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar3 + -1;
    local_10d8 = iVar9;
    local_10d4 = iVar6;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d0554c(piVar7);
  }
  if (local_10d8 != 2 || local_10d4 != 0) {
    FUN_00d054d0(&local_10d8);
  }
  FUN_00ad1570(param_1 + 0x598);
  FUN_00c48cbc(param_1 + 0x660);
  return;
}

