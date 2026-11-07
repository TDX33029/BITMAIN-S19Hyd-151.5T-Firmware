// FUN_011e37a8 @ 011e37a8 size=620 calls_out=8 calls_in=2
// strings: 

int FUN_011e37a8(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined4 local_88;
  undefined1 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar12 = CONCAT44(local_ac,local_b0);
  if (((*param_2 == '\x03') && (*(int *)(param_1 + 8) == *(int *)(param_2 + 0xc))) &&
     (iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 8)),
     iVar3 == 0)) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0xc);
  do {
    iVar3 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar3 + 1;
  if (iVar3 < 0) {
LAB_011e39fc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11e39fc);
    (*pcVar1)();
  }
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar4 = *(int **)(param_4 + 0xc);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) goto LAB_011e39fc;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar7 = 0;
    uVar10 = *(uint *)(param_1 + 0x10);
    uVar9 = (*(int **)(param_4 + 4))[1];
    if (uVar9 <= uVar10) {
      iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar8 + 2,uVar9);
      uVar7 = uVar9;
      if (iVar3 != 0) {
        uVar7 = 0;
      }
    }
    uVar12 = FUN_011e1508((int)(piVar8 + 2) + uVar7,uVar10 - uVar7);
    local_bc = 3;
    uVar5 = 2;
  }
  uVar13 = FUN_01238114(param_3);
  iVar3 = *(int *)(param_1 + 8);
  uVar6 = 0;
  if (iVar3 < 0) {
LAB_011e3900:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,iVar3);
  }
  uVar6 = *(undefined4 *)(param_1 + 4);
  if (iVar3 == 0) {
    local_7c = 0;
    local_78 = 1;
  }
  else {
    local_78 = thunk_FUN_016d4a50(iVar3);
    local_7c = iVar3;
    if (local_78 == 0) {
      uVar6 = 1;
      goto LAB_011e3900;
    }
  }
  FUN_016dd1aa(local_78,uVar6,iVar3);
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_50 = 6;
  local_80 = 3;
  local_88 = 0x8000000e;
  local_a8[0] = uVar5;
  local_74 = iVar3;
  local_4c = param_2;
  local_30 = piVar8;
  local_2c = uVar11;
  uStack_90 = uVar12;
  local_38 = uVar13;
  iVar3 = thunk_FUN_016d4a50(0x80);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar3,local_a8,0x80);
  return iVar3;
}

