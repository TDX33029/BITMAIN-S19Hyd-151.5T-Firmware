// FUN_0109363c @ 0109363c size=720 calls_out=6 calls_in=1
// strings: 

void FUN_0109363c(int *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_15c;
  int local_158;
  int local_14c;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined2 local_114;
  short local_112;
  int local_110;
  int local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined2 local_f4;
  undefined1 auStack_f0 [156];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  short local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_2a;
  
  sVar2 = param_2[0x20];
  if (*param_2 == 1) {
    iVar7 = *(int *)(param_2 + 6);
    uVar3 = 0;
    if (iVar7 < 0) {
LAB_01093678:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar7);
    }
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar5 = 1;
    if (iVar7 == 0) {
      local_14c = 0;
      iVar4 = 1;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(iVar7);
      local_14c = iVar7;
      if (iVar4 == 0) {
        uVar3 = 1;
        goto LAB_01093678;
      }
    }
    FUN_016dd1aa(iVar4,uVar3,iVar7);
    sVar1 = param_2[0x12];
  }
  else {
    local_3a = param_2[1];
    local_14c = *(int *)(param_2 + 2);
    iVar4 = *(int *)(param_2 + 4);
    iVar7 = *(int *)(param_2 + 6);
    local_50 = *(undefined4 *)(param_2 + 8);
    uStack_4c = *(undefined4 *)(param_2 + 10);
    uStack_48 = *(undefined4 *)(param_2 + 0xc);
    uStack_44 = *(undefined4 *)(param_2 + 0xe);
    uStack_40 = *(undefined4 *)(param_2 + 0x10);
    uVar5 = 0;
    sVar1 = param_2[0x12];
  }
  if (sVar1 == 1) {
    iVar8 = *(int *)(param_2 + 0x18);
    uVar3 = 0;
    if (iVar8 < 0) {
LAB_010936d8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar8);
    }
    uVar3 = *(undefined4 *)(param_2 + 0x16);
    if (iVar8 == 0) {
      local_15c = 0;
      local_158 = 1;
    }
    else {
      local_158 = thunk_FUN_016d4a50(iVar8);
      local_15c = iVar8;
      if (local_158 == 0) {
        uVar3 = 1;
        goto LAB_010936d8;
      }
    }
    FUN_016dd1aa(local_158,uVar3,iVar8);
    local_114 = 1;
  }
  else {
    local_15c = *(int *)(param_2 + 0x14);
    local_114 = 0;
    local_158 = *(int *)(param_2 + 0x16);
    iVar8 = *(int *)(param_2 + 0x18);
    local_38 = *(undefined4 *)(param_2 + 0x1a);
    uStack_34 = *(undefined4 *)(param_2 + 0x1c);
    uStack_30 = *(undefined4 *)(param_2 + 0x1e);
    local_2a = param_2[0x13];
  }
  local_138 = CONCAT22(local_3a,uVar5);
  local_128 = local_50;
  uStack_124 = uStack_4c;
  uStack_120 = uStack_48;
  uStack_11c = uStack_44;
  uStack_118 = uStack_40;
  local_134 = local_14c;
  local_130 = iVar4;
  local_12c = iVar7;
  FUN_016dd1aa(auStack_f0,param_3,0x9c);
  local_13c = 1;
  local_140 = 1;
  local_10c = local_158;
  local_110 = local_15c;
  local_f4 = 0;
  local_112 = local_2a;
  local_104 = local_38;
  uStack_100 = uStack_34;
  uStack_fc = uStack_30;
  local_54 = 0x15180;
  local_108 = iVar8;
  local_f8 = (char)sVar2;
  iVar4 = thunk_FUN_016d4a50(0xf0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xf0);
  }
  FUN_016dd1aa(iVar4,&local_140,0xf0);
  FUN_015f3b0c(&local_140,1);
  iVar7 = local_138;
  iVar8 = local_140 + 0x15180;
  uVar6 = local_13c + (0xfffeae7f < local_140);
  if ((int)((local_13c ^ uVar6) & ~local_13c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  FUN_016dd1aa(param_1 + 6,param_2,0x4c);
  param_1[4] = iVar4;
  param_1[5] = 1;
  *param_1 = iVar8;
  param_1[1] = uVar6;
  param_1[2] = iVar7;
  return;
}

