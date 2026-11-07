// FUN_011cbca8 @ 011cbca8 size=548 calls_out=7 calls_in=2
// strings: 

int FUN_011cbca8(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined1 local_84;
  byte local_83;
  undefined1 local_50;
  undefined1 *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uStack_90 = CONCAT44(local_ac,local_b0);
  bVar2 = *(byte *)(param_1 + 2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    bVar4 = bVar2 & 8;
    break;
  case 1:
    bVar4 = bVar2 & 2;
    break;
  case 2:
    if ((*(uint *)(param_2 + 8) & 0xfffffffe) == 0) {
      bVar4 = bVar2 & 0x14;
    }
    else {
      bVar4 = bVar2 & 0x10;
    }
    break;
  case 3:
    bVar4 = bVar2 & 0x40;
    break;
  case 4:
    bVar4 = bVar2 & 1;
    break;
  case 5:
    bVar4 = bVar2 & 0x20;
  }
  if (bVar4 != 0) {
    return 0;
  }
  piVar8 = (int *)*param_1;
  do {
    iVar6 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = iVar6 + 1;
  if (iVar6 < 0) {
LAB_011cbec8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11cbec8);
    (*pcVar1)();
  }
  uVar10 = param_1[1];
  if (param_4 == 0) {
    local_a8[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar5 = *(int **)(param_4 + 0xc);
    do {
      iVar6 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_011cbec8;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar9 = (*(int **)(param_4 + 4))[1];
    uVar7 = 0;
    if (uVar9 <= uVar10) {
      iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
      uVar7 = uVar9;
      if (iVar6 != 0) {
        uVar7 = 0;
      }
    }
    uStack_90 = FUN_011e1508((int)(piVar8 + 2) + uVar7,uVar10 - uVar7);
    local_bc = 3;
    local_a8[0] = 2;
  }
  local_38 = FUN_01238114(param_3);
  local_84 = 1;
  local_88 = &DAT_80000028;
  local_50 = 6;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_83 = bVar2;
  local_4c = param_2;
  local_30 = piVar8;
  local_2c = uVar10;
  iVar6 = thunk_FUN_016d4a50(0x80);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar6,local_a8,0x80);
  return iVar6;
}

