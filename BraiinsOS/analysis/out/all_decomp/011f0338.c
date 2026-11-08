// FUN_011f0338 @ 011f0338 size=672 calls_out=10 calls_in=3
// strings: 

int FUN_011f0338(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_a8 [8];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  int *piStack_30;
  undefined4 uStack_2c;
  
  piVar7 = (int *)(param_1 + 0x20);
  iVar10 = *piVar7;
  if (iVar10 == -0x7fffffee) {
    uVar3 = 0;
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    uVar9 = *(undefined4 *)(param_1 + 0x34);
    if (param_7 < 0) {
LAB_011f0370:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,param_7);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    if (param_7 == 0) {
      iVar4 = 1;
      iVar5 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(param_7);
      if (iVar4 == 0) {
        uVar3 = 1;
        goto LAB_011f0370;
      }
      iVar5 = param_7;
    }
    FUN_016dd1aa(iVar4,param_6,param_7);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x24);
    param_7 = *(int *)(param_1 + 0x2c);
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    uVar9 = *(undefined4 *)(param_1 + 0x34);
    local_100 = *(undefined4 *)(param_1 + 0x3c);
    uStack_fc = *(undefined4 *)(param_1 + 0x40);
    uStack_f8 = *(undefined4 *)(param_1 + 0x44);
    local_f4 = *(undefined4 *)(param_1 + 0x48);
    uStack_f0 = *(undefined4 *)(param_1 + 0x4c);
    uStack_ec = *(undefined4 *)(param_1 + 0x50);
    uStack_e8 = *(undefined4 *)(param_1 + 0x54);
  }
  local_38 = FUN_01238114(param_3);
  do {
    iVar6 = *param_4;
    bVar2 = (bool)hasExclusiveAccess(param_4);
  } while (!bVar2);
  *param_4 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11f05c8);
    (*pcVar1)();
  }
  local_50 = 6;
  uStack_6c = local_100;
  uStack_68 = uStack_fc;
  local_64 = uStack_f8;
  uStack_60 = local_f4;
  uStack_5c = uStack_f0;
  uStack_58 = uStack_ec;
  uStack_54 = uStack_e8;
  uStack_2c = param_5;
  local_a8[0] = 0;
  local_88 = iVar10;
  iStack_84 = iVar5;
  iStack_80 = iVar4;
  iStack_7c = param_7;
  local_78 = uVar8;
  uStack_74 = uVar9;
  uStack_70 = uVar3;
  local_4c = param_2;
  piStack_30 = param_4;
  iVar5 = thunk_FUN_016d4a50(0x80);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar5,local_a8,0x80);
  if (*(char *)(param_1 + 0x58) != '\x06') {
    FUN_01164f34();
  }
  if (iVar10 == -0x7fffffee) {
    if (*piVar7 == -0x7fffffee) {
      if (*(int *)(param_1 + 0x24) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
      }
    }
    else {
      FUN_011efbf4(piVar7);
    }
  }
  piVar7 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  piVar7 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  }
  FUN_0115842c(param_1);
  thunk_FUN_016d3fb4(param_1);
  return iVar5;
}

