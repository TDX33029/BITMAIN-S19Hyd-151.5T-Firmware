// FUN_00a92884 @ 00a92884 size=960 calls_out=10 calls_in=2
// strings: HashChainAutotuningSetter | HashChainAutotuningSetter | enabled | HashChainAutotuningSetter

void FUN_00a92884(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int local_ec;
  int *local_e8;
  undefined1 *local_e4;
  int *local_e0;
  code *local_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int *local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined1 *local_ac;
  int local_a0;
  char *local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  char *pcStack_4c;
  int iStack_48;
  int local_40;
  char *local_3c;
  int local_38;
  int *local_34;
  char *local_30;
  int *local_2c;
  undefined1 *local_28;
  
  iVar2 = param_2[4];
  if (iVar2 < 0) {
    local_70 = -0x80000000;
    if (iVar2 != -0x7ffffff9) {
      local_80 = *param_2;
      local_7c = param_2[1];
      local_78 = param_2[2];
      local_74 = param_2[3];
      local_6c = param_2[5];
      iStack_68 = param_2[6];
      iStack_64 = param_2[7];
      local_60 = param_2[8];
      iStack_5c = param_2[9];
      iStack_58 = param_2[10];
      iStack_54 = param_2[0xb];
      local_70 = iVar2;
    }
    local_dc = FUN_00700f8c;
    local_e0 = &local_80;
    local_e8 = &local_a0;
    local_98 = 0x19;
    local_9c = "HashChainAutotuningSetter";
    local_a0 = -0x80000000;
    local_e4 = &LAB_012b97d8;
    FUN_00664898(&local_b8,&DAT_0059054b,&local_e8);
    if (local_a0 != -0x80000000) {
      FUN_019bb7e0(local_a0,local_9c);
    }
    param_1[4] = (int)local_b8;
    param_1[5] = (int)local_b4;
    param_1[6] = (int)local_b0;
    *param_1 = 0;
    FUN_00ba8128(&local_80);
    return;
  }
  local_e8 = (int *)*param_2;
  local_e4 = (undefined1 *)param_2[1];
  local_e0 = (int *)param_2[2];
  local_dc = (code *)param_2[3];
  iStack_d8 = param_2[4];
  iStack_d4 = param_2[5];
  local_d0 = param_2[6];
  iStack_cc = param_2[7];
  iStack_c8 = param_2[8];
  iStack_c4 = param_2[9];
  iStack_c0 = param_2[10];
  iStack_bc = param_2[0xb];
  uVar1 = FUN_007017a8(&local_e8,&DAT_0056ee18,4);
  FUN_006c1c88(&local_80,uVar1);
  FUN_006c8594(&local_a0,&local_80);
  if (local_a0 == 2) {
    local_ec = (int)local_9c;
    iVar3 = local_94;
    iVar5 = local_98;
LAB_00a92a90:
    uVar1 = FUN_007017a8(&local_e8,"enabled",7);
    FUN_006c1c88(&local_80,uVar1);
    FUN_00abc09c(&local_a0,&local_80);
    if (local_a0 == 2) {
      uVar4 = local_9c._0_1_;
    }
    else {
      local_80 = local_a0;
      local_7c = (int)local_9c;
      local_78 = local_98;
      local_74 = local_94;
      local_70 = iStack_90;
      local_6c = iStack_8c;
      iStack_68 = iStack_88;
      local_3c = "HashChainAutotuningSetter";
      local_40 = -0x80000000;
      local_2c = &local_40;
      local_34 = &local_70;
      local_38 = 0x19;
      local_28 = &LAB_012b97d8;
      local_30 = &LAB_00632348;
      FUN_00664898(&local_50,&DAT_005bd155,&local_34);
      if (local_40 != -0x80000000) {
        FUN_019bb7e0(local_40,local_3c);
      }
      FUN_01bed4e2((int)&local_b0 + 3,&local_50,0xc);
      iVar2 = local_80;
      uVar4 = (undefined1)local_7c;
      FUN_01bed4e2(&local_b8,(uint)&local_80 | 5,0xb);
      FUN_019bb7e0(local_70,local_6c);
      if (iVar2 != 2) {
        FUN_01bed4e2((int)param_1 + 5,&local_b8,0x17);
        *(undefined1 *)(param_1 + 1) = uVar4;
        *param_1 = iVar2;
        FUN_019bb7e0(local_ec,iVar5);
        goto LAB_00a92c18;
      }
    }
    *(undefined1 *)(param_1 + 4) = uVar4;
    *param_1 = 2;
    param_1[1] = local_ec;
    param_1[2] = iVar5;
    param_1[3] = iVar3;
    FUN_006c1408(&local_e8);
    if (param_2[4] == -0x7ffffff9) {
      return;
    }
    if (-1 < param_2[4]) {
      return;
    }
  }
  else {
    local_80 = local_a0;
    local_7c = (int)local_9c;
    local_78 = local_98;
    local_74 = local_94;
    local_70 = iStack_90;
    local_6c = iStack_8c;
    iStack_68 = iStack_88;
    local_2c = (int *)&DAT_00000019;
    local_34 = (int *)&DAT_80000000;
    local_b0 = &local_34;
    local_b8 = &local_70;
    local_30 = "HashChainAutotuningSetter";
    local_ac = &LAB_012b97d8;
    local_b4 = &LAB_00632348;
    FUN_00664898(&local_40,&DAT_005bd155,&local_b8);
    if (local_34 != (int *)&DAT_80000000) {
      FUN_019bb7e0(local_34,local_30);
    }
    iVar3 = local_74;
    iVar5 = local_78;
    local_ec = local_7c;
    iVar2 = local_80;
    local_50 = local_40;
    pcStack_4c = local_3c;
    iStack_48 = local_38;
    FUN_019bb7e0(local_70,local_6c);
    if (iVar2 == 2) {
      goto LAB_00a92a90;
    }
    param_1[4] = local_50;
    param_1[5] = (int)pcStack_4c;
    param_1[6] = iStack_48;
    *param_1 = iVar2;
    param_1[1] = local_ec;
    param_1[2] = iVar5;
    param_1[3] = iVar3;
LAB_00a92c18:
    FUN_006c1408(&local_e8);
    if (param_2[4] == 0x80000007) {
      return;
    }
    if ((uint)param_2[4] < 0x80000000) {
      return;
    }
  }
  FUN_00db19c4(param_2);
  return;
}

