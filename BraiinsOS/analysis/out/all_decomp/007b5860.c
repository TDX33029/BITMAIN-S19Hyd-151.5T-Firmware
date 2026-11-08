// FUN_007b5860 @ 007b5860 size=480 calls_out=3 calls_in=5
// strings: 

void FUN_007b5860(undefined2 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  undefined4 local_54;
  short local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  sVar2 = param_2[0x20];
  if (*param_2 == 1) {
    iVar8 = *(int *)(param_2 + 6);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar8);
    }
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = 1;
    if (iVar8 == 0) {
      iVar3 = 1;
      local_4c = 0;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(iVar8);
      local_4c = iVar8;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar8);
      }
    }
    FUN_016dd1aa(iVar3,uVar4,iVar8);
    sVar1 = param_2[0x12];
  }
  else {
    local_4c = *(int *)(param_2 + 2);
    local_50 = param_2[1];
    iVar3 = *(int *)(param_2 + 4);
    iVar8 = *(int *)(param_2 + 6);
    local_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)(param_2 + 10);
    uStack_40 = *(undefined4 *)(param_2 + 0xc);
    uStack_3c = *(undefined4 *)(param_2 + 0xe);
    uStack_38 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = 0;
    sVar1 = param_2[0x12];
  }
  if (sVar1 == 1) {
    iVar6 = *(int *)(param_2 + 0x18);
    if (iVar6 < 0) {
      uVar4 = 0;
LAB_007b58dc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,iVar6);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x16);
    if (iVar6 == 0) {
      iVar10 = 0;
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar6);
      if (iVar7 == 0) {
        uVar4 = 1;
        goto LAB_007b58dc;
      }
      iVar10 = iVar6;
      local_54 = uVar4;
    }
    FUN_016dd1aa(iVar7,uVar4,iVar6);
    uVar9 = 1;
  }
  else {
    iVar10 = *(int *)(param_2 + 0x14);
    uVar9 = 0;
    iVar7 = *(int *)(param_2 + 0x16);
    iVar6 = *(int *)(param_2 + 0x18);
    local_30 = *(undefined4 *)(param_2 + 0x1a);
    uStack_2c = *(undefined4 *)(param_2 + 0x1c);
    uStack_28 = *(undefined4 *)(param_2 + 0x1e);
    local_54._0_2_ = param_2[0x13];
  }
  param_1[1] = local_50;
  *(int *)(param_1 + 2) = local_4c;
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 6) = iVar8;
  *param_1 = uVar5;
  *(char *)(param_1 + 0x20) = (char)sVar2;
  *(undefined4 *)(param_1 + 8) = local_48;
  *(undefined4 *)(param_1 + 10) = uStack_44;
  *(undefined4 *)(param_1 + 0xc) = uStack_40;
  *(undefined4 *)(param_1 + 0xe) = uStack_3c;
  *(undefined4 *)(param_1 + 0x10) = uStack_38;
  param_1[0x13] = (short)local_54;
  param_1[0x12] = uVar9;
  *(int *)(param_1 + 0x14) = iVar10;
  *(int *)(param_1 + 0x16) = iVar7;
  *(int *)(param_1 + 0x18) = iVar6;
  *(undefined4 *)(param_1 + 0x1a) = local_30;
  *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x1e) = uStack_28;
  return;
}

