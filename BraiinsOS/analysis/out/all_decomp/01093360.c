// FUN_01093360 @ 01093360 size=576 calls_out=4 calls_in=2
// strings: 

void FUN_01093360(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_128;
  int local_124;
  undefined2 local_120;
  short local_11e;
  int local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined2 local_fc;
  short local_fa;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  short local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_2a;
  
  sVar3 = param_2[0x20];
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 6);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar7);
    }
    uVar6 = *(undefined4 *)(param_2 + 4);
    if (iVar7 == 0) {
      iVar4 = 1;
      local_124 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar7);
      local_124 = iVar7;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar7);
      }
    }
    FUN_016dd1aa(iVar4,uVar6,iVar7);
    uVar5 = 1;
    sVar1 = param_2[0x12];
  }
  else {
    local_3a = param_2[1];
    local_124 = *(int *)(param_2 + 2);
    iVar4 = *(int *)(param_2 + 4);
    iVar7 = *(int *)(param_2 + 6);
    local_d8 = *(undefined4 *)(param_2 + 8);
    uStack_d4 = *(undefined4 *)(param_2 + 10);
    uStack_d0 = *(undefined4 *)(param_2 + 0xc);
    uStack_cc = *(undefined4 *)(param_2 + 0xe);
    uStack_c8 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = 0;
    sVar1 = param_2[0x12];
  }
  if (sVar1 == 1) {
    iVar9 = *(int *)(param_2 + 0x18);
    uVar6 = 0;
    if (iVar9 < 0) {
LAB_010933e8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,iVar9);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x16);
    if (iVar9 == 0) {
      iVar8 = 0;
      local_128 = 1;
    }
    else {
      local_128 = thunk_FUN_016d4a50(iVar9,uVar6);
      iVar8 = iVar9;
      if (local_128 == 0) {
        uVar6 = 1;
        goto LAB_010933e8;
      }
    }
    FUN_016dd1aa(local_128,uVar6,iVar9);
    local_fc = 1;
  }
  else {
    local_128 = *(int *)(param_2 + 0x16);
    iVar8 = *(int *)(param_2 + 0x14);
    iVar9 = *(int *)(param_2 + 0x18);
    local_fc = 0;
    local_38 = *(undefined4 *)(param_2 + 0x1a);
    uStack_34 = *(undefined4 *)(param_2 + 0x1c);
    uStack_30 = *(undefined4 *)(param_2 + 0x1e);
    local_2a = param_2[0x13];
  }
  local_11e = local_3a;
  local_110 = local_d8;
  uStack_10c = uStack_d4;
  uStack_108 = uStack_d0;
  uStack_104 = uStack_cc;
  uStack_100 = uStack_c8;
  uVar6 = *(undefined4 *)(param_2 + 0x72);
  sVar1 = param_2[0x23];
  sVar2 = param_2[0x22];
  local_f4 = local_128;
  local_fa = local_2a;
  local_ec = local_38;
  uStack_e8 = uStack_34;
  uStack_e4 = uStack_30;
  local_120 = uVar5;
  local_11c = local_124;
  local_118 = iVar4;
  local_114 = iVar7;
  local_f8 = iVar8;
  local_f0 = iVar9;
  local_e0 = (char)sVar3;
  FUN_010913fc(&local_d8,param_2 + 0x24);
  FUN_016dd1aa(param_1,&local_120,0x44);
  *(undefined4 *)(param_1 + 0xe4) = uVar6;
  *(short *)(param_1 + 0x46) = sVar1;
  *(short *)(param_1 + 0x44) = sVar2;
  FUN_016dd1aa(param_1 + 0x48,&local_d8,0x9c);
  return;
}

