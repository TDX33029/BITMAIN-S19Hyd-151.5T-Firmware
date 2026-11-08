// FUN_01547944 @ 01547944 size=700 calls_out=12 calls_in=2
// strings: 

int FUN_01547944(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  int local_10c;
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
  undefined4 local_2c;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  else {
    piVar14 = *(int **)(param_1 + 0x14);
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    piVar4 = (int *)(iVar3 + 0x20);
    iVar8 = *piVar4;
    if (iVar8 == -0x7fffffee) {
      iVar15 = *(int *)(param_1 + 8);
      uVar5 = *(undefined4 *)(iVar3 + 0x30);
      uVar9 = *(undefined4 *)(iVar3 + 0x34);
      uVar12 = 0;
      if (iVar15 < 0) {
LAB_015479b0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,iVar15);
      }
      uVar10 = *(undefined4 *)(param_1 + 4);
      uVar6 = *(undefined4 *)(iVar3 + 0x38);
      if (iVar15 == 0) {
        local_10c = 1;
        iVar7 = 0;
      }
      else {
        uVar12 = 1;
        local_10c = FUN_01298504(iVar15,1);
        iVar7 = iVar15;
        if (local_10c == 0) goto LAB_015479b0;
      }
      FUN_01bed4e2(local_10c,uVar10,iVar15);
    }
    else {
      local_10c = *(int *)(iVar3 + 0x28);
      iVar7 = *(int *)(iVar3 + 0x24);
      iVar15 = *(int *)(iVar3 + 0x2c);
      uVar5 = *(undefined4 *)(iVar3 + 0x30);
      uVar9 = *(undefined4 *)(iVar3 + 0x34);
      uVar6 = *(undefined4 *)(iVar3 + 0x38);
      local_100 = *(undefined4 *)(iVar3 + 0x3c);
      uStack_fc = *(undefined4 *)(iVar3 + 0x40);
      uStack_f8 = *(undefined4 *)(iVar3 + 0x44);
      local_f4 = *(undefined4 *)(iVar3 + 0x48);
      uStack_f0 = *(undefined4 *)(iVar3 + 0x4c);
      uStack_ec = *(undefined4 *)(iVar3 + 0x50);
      uStack_e8 = *(undefined4 *)(iVar3 + 0x54);
    }
    local_38 = FUN_01531840(param_3);
    do {
      iVar11 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar11 + 1;
    if (iVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1547c00);
      (*pcVar1)();
    }
    local_50 = 6;
    iStack_80 = local_10c;
    uStack_6c = local_100;
    uStack_68 = uStack_fc;
    local_64 = uStack_f8;
    uStack_60 = local_f4;
    uStack_5c = uStack_f0;
    uStack_58 = uStack_ec;
    uStack_54 = uStack_e8;
    local_a8[0] = 0;
    local_88 = iVar8;
    iStack_84 = iVar7;
    iStack_7c = iVar15;
    local_78 = uVar5;
    uStack_74 = uVar9;
    uStack_70 = uVar6;
    local_4c = param_2;
    piStack_30 = piVar14;
    local_2c = uVar13;
    iVar7 = thunk_FUN_01be5118(0x80);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x80);
    }
    FUN_01bed4e2(iVar7,local_a8,0x80);
    if (*(char *)(iVar3 + 0x58) != '\x06') {
      FUN_00db4764();
    }
    if (iVar8 == -0x7fffffee) {
      if (*piVar4 == -0x7fffffee) {
        FUN_019bb7e0(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28));
      }
      else {
        FUN_0158fe10(piVar4);
      }
    }
    piVar4 = *(int **)(iVar3 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x74));
    }
    piVar4 = *(int **)(iVar3 + 0x78);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(iVar3 + 0x78),*(undefined4 *)(iVar3 + 0x7c));
    }
    FUN_01531780(iVar3);
    thunk_FUN_01be4678(iVar3);
  }
  return iVar7;
}

