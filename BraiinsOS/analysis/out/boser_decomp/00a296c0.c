// FUN_00a296c0 @ 00a296c0 size=1372 calls_out=12 calls_in=1
// strings: HashChainSetter | HashChainSetter | enabled | HashChainSetter | frequency | voltage

void FUN_00a296c0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int *local_100;
  undefined1 *local_fc;
  int *local_f8;
  code *local_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined1 *local_c4;
  undefined8 local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
  char *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  char *pcStack_5c;
  int iStack_58;
  int local_50;
  char *local_4c;
  int local_48;
  int *local_40;
  char *local_3c;
  int *local_38;
  undefined1 *local_34;
  
  iVar5 = param_2[4];
  if (iVar5 < 0) {
    local_80 = -0x80000000;
    if (iVar5 != -0x7ffffff9) {
      local_90 = *param_2;
      local_8c = param_2[1];
      local_88 = param_2[2];
      local_84 = param_2[3];
      local_7c = param_2[5];
      iStack_78 = param_2[6];
      iStack_74 = param_2[7];
      local_70 = param_2[8];
      iStack_6c = param_2[9];
      iStack_68 = param_2[10];
      iStack_64 = param_2[0xb];
      local_80 = iVar5;
    }
    local_f4 = FUN_00700f8c;
    local_f8 = &local_90;
    local_100 = &local_b0;
    local_a8 = 0xf;
    local_ac = "HashChainSetter";
    local_b0 = -0x80000000;
    local_fc = &LAB_012b97d8;
    FUN_00664898(&local_d0,&DAT_0059054b,&local_100);
    if (local_b0 != -0x80000000) {
      FUN_019bb7e0(local_b0,local_ac);
    }
    param_1[6] = (int)local_d0;
    param_1[7] = (int)local_cc;
    param_1[8] = (int)local_c8;
    param_1[2] = 0;
    FUN_00ba8128(&local_90);
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  local_100 = (int *)*param_2;
  local_fc = (undefined1 *)param_2[1];
  local_f8 = (int *)param_2[2];
  local_f4 = (code *)param_2[3];
  iStack_f0 = param_2[4];
  iStack_ec = param_2[5];
  local_e8 = param_2[6];
  iStack_e4 = param_2[7];
  iStack_e0 = param_2[8];
  iStack_dc = param_2[9];
  iStack_d8 = param_2[10];
  iStack_d4 = param_2[0xb];
  uVar3 = FUN_007017a8(&local_100,&DAT_0056ee18,4);
  FUN_006c1c88(&local_90,uVar3);
  FUN_006c8594(&local_b0,&local_90);
  if (local_b0 == 2) {
    local_118 = (int)local_ac;
    local_114 = local_a8;
    local_11c = local_a4;
LAB_00a298ec:
    uVar3 = FUN_007017a8(&local_100,"enabled",7);
    FUN_006c1c88(&local_90,uVar3);
    FUN_00abc09c(&local_b0,&local_90);
    if (local_b0 == 2) {
      uVar6 = local_ac._0_1_;
LAB_00a299f4:
      uVar3 = FUN_007017a8(&local_100,"frequency",9);
      FUN_006c1c88(&local_90,uVar3);
      FUN_00abc874(&local_b0,&local_90);
      iVar2 = local_a4;
      iVar5 = local_a8;
      if (local_b0 == 1) {
        piVar4 = (int *)((uint)&local_b0 | 4);
        local_90 = *piVar4;
        local_8c = piVar4[1];
        local_88 = piVar4[2];
        local_84 = piVar4[3];
        local_80 = piVar4[4];
        local_7c = piVar4[5];
        iStack_78 = piVar4[6];
        FUN_00a1f0e8((uint)&local_d0 | 4,&local_90);
        local_110 = (int)local_c0;
        iStack_10c = (int)((ulonglong)local_c0 >> 0x20);
      }
      else {
        uVar1 = CONCAT44(iStack_9c,local_a0);
        uVar3 = FUN_007017a8(&local_100,"voltage",7);
        FUN_006c1c88(&local_90,uVar3);
        FUN_00abc874(&local_b0,&local_90);
        if (local_b0 != 1) {
          param_1[4] = local_a8;
          param_1[5] = local_a4;
          param_1[8] = local_118;
          param_1[9] = local_114;
          *param_1 = iVar5;
          param_1[1] = iVar2;
          param_1[10] = local_11c;
          *(undefined8 *)(param_1 + 2) = uVar1;
          *(undefined1 *)(param_1 + 0xb) = uVar6;
          *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_9c,local_a0);
          FUN_006c1408(&local_100);
          if (param_2[4] == -0x7ffffff9) {
            return;
          }
          if (-1 < param_2[4]) {
            return;
          }
          goto LAB_00a29ba4;
        }
        piVar4 = (int *)((uint)&local_b0 | 4);
        local_90 = *piVar4;
        local_8c = piVar4[1];
        local_88 = piVar4[2];
        local_84 = piVar4[3];
        local_80 = piVar4[4];
        local_7c = piVar4[5];
        iStack_78 = piVar4[6];
        FUN_00a1f0e8((uint)&local_d0 | 4,&local_90);
        local_108 = (int)local_c0;
        iStack_104 = (int)((ulonglong)local_c0 >> 0x20);
        local_110 = local_108;
        iStack_10c = iStack_104;
      }
      param_1[5] = local_110;
      param_1[6] = iStack_10c;
      param_1[3] = (int)local_c8;
      param_1[4] = (int)local_c4;
      param_1[7] = local_b8;
      param_1[8] = iStack_b4;
      param_1[2] = (int)local_cc;
    }
    else {
      local_90 = local_b0;
      local_8c = (int)local_ac;
      local_88 = local_a8;
      local_84 = local_a4;
      local_80 = local_a0;
      local_7c = iStack_9c;
      iStack_78 = iStack_98;
      local_48 = 0xf;
      local_50 = -0x80000000;
      local_38 = &local_50;
      local_40 = &local_80;
      local_4c = "HashChainSetter";
      local_34 = &LAB_012b97d8;
      local_3c = &LAB_00632348;
      FUN_00664898(&local_60,&DAT_005bd155,&local_40);
      if (local_50 != -0x80000000) {
        FUN_019bb7e0(local_50,local_4c);
      }
      FUN_01bed4e2((int)&local_c8 + 3,&local_60,0xc);
      iVar5 = local_90;
      uVar6 = (undefined1)local_8c;
      FUN_01bed4e2(&local_d0,(uint)&local_90 | 5,0xb);
      FUN_019bb7e0(local_80,local_7c);
      if (iVar5 == 2) goto LAB_00a299f4;
      FUN_01bed4e2((int)param_1 + 0xd,&local_d0,0x17);
      *(undefined1 *)(param_1 + 3) = uVar6;
      param_1[2] = iVar5;
    }
    *param_1 = 3;
    param_1[1] = 0;
    FUN_019bb7e0(local_118,local_114);
  }
  else {
    local_90 = local_b0;
    local_8c = (int)local_ac;
    local_88 = local_a8;
    local_84 = local_a4;
    local_80 = local_a0;
    local_7c = iStack_9c;
    iStack_78 = iStack_98;
    local_38 = (int *)&DAT_0000000f;
    local_40 = (int *)&DAT_80000000;
    local_c8 = &local_40;
    local_d0 = &local_80;
    local_3c = "HashChainSetter";
    local_c4 = &LAB_012b97d8;
    local_cc = &LAB_00632348;
    FUN_00664898(&local_50,&DAT_005bd155,&local_d0);
    if (local_40 != (int *)&DAT_80000000) {
      FUN_019bb7e0(local_40,local_3c);
    }
    local_11c = local_84;
    local_114 = local_88;
    local_118 = local_8c;
    iVar5 = local_90;
    local_60 = local_50;
    pcStack_5c = local_4c;
    iStack_58 = local_48;
    FUN_019bb7e0(local_80,local_7c);
    if (iVar5 == 2) {
      goto LAB_00a298ec;
    }
    param_1[6] = local_60;
    param_1[7] = (int)pcStack_5c;
    param_1[8] = iStack_58;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = iVar5;
    param_1[3] = local_118;
    param_1[4] = local_114;
    param_1[5] = local_11c;
  }
  FUN_006c1408(&local_100);
  if (param_2[4] == 0x80000007) {
    return;
  }
  if ((uint)param_2[4] < 0x80000000) {
    return;
  }
LAB_00a29ba4:
  FUN_00db19c4(param_2);
  return;
}

