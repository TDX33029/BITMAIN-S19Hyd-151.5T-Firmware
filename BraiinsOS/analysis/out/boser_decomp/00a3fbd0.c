// FUN_00a3fbd0 @ 00a3fbd0 size=2072 calls_out=6 calls_in=2
// strings: Cannot merge two `MethodRouter`s that both have a fallback

void FUN_00a3fbd0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = param_2[2];
  FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_00477de4,3,&local_50,param_5);
  uVar10 = local_38;
  if (local_38 == 0) {
    *param_2 = local_34;
    param_2[1] = uStack_30;
    param_2[2] = uStack_2c;
    local_50 = param_2[3];
    local_4c = param_2[4];
    local_48 = param_2[5];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_0056efe0,4,&local_50,param_5 + 0xc);
    if (local_38 != 0) {
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *param_1 = 3;
      goto LAB_00a3fd04;
    }
    param_2[3] = local_34;
    param_2[4] = uStack_30;
    param_2[5] = uStack_2c;
    local_50 = param_2[6];
    local_4c = param_2[7];
    local_48 = param_2[8];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_00477dea,6,&local_50,param_5 + 0x18);
    if (local_38 != 0) {
      uVar9 = 1;
      uVar10 = 1;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *param_1 = 3;
      bVar5 = false;
      goto LAB_00a3fd1c;
    }
    param_2[6] = local_34;
    param_2[7] = uStack_30;
    param_2[8] = uStack_2c;
    local_50 = param_2[9];
    local_4c = param_2[10];
    local_48 = param_2[0xb];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_00477ddd,7,&local_50,param_5 + 0x24);
    if (local_38 != 0) {
      uVar9 = 1;
      uVar10 = 1;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *param_1 = 3;
      bVar5 = true;
      bVar6 = false;
      goto LAB_00a3fd28;
    }
    param_2[9] = local_34;
    param_2[10] = uStack_30;
    param_2[0xb] = uStack_2c;
    local_50 = param_2[0xc];
    local_4c = param_2[0xd];
    local_48 = param_2[0xe];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_00477df7,5,&local_50,param_5 + 0x30);
    if (local_38 != 0) {
      uVar10 = 1;
      uVar9 = 1;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      bVar7 = false;
      *param_1 = 3;
      bVar5 = true;
      bVar6 = true;
      goto LAB_00a3fd34;
    }
    param_2[0xc] = local_34;
    param_2[0xd] = uStack_30;
    param_2[0xe] = uStack_2c;
    local_50 = param_2[0xf];
    local_4c = param_2[0x10];
    local_48 = param_2[0x11];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_0056e630,4,&local_50,param_5 + 0x3c);
    if (local_38 != 0) {
      uVar9 = 1;
      uVar10 = 1;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *param_1 = 3;
      bVar8 = false;
      bVar5 = true;
      bVar6 = true;
      bVar7 = true;
      goto LAB_00a3fd4c;
    }
    param_2[0xf] = local_34;
    param_2[0x10] = uStack_30;
    param_2[0x11] = uStack_2c;
    local_50 = param_2[0x12];
    local_4c = param_2[0x13];
    local_48 = param_2[0x14];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_00477de7,3,&local_50,param_5 + 0x48);
    if (local_38 != 0) {
      bVar1 = false;
      uVar10 = 1;
      uVar9 = 1;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      *param_1 = 3;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      goto LAB_00a3fd58;
    }
    param_2[0x12] = local_34;
    param_2[0x13] = uStack_30;
    param_2[0x14] = uStack_2c;
    local_50 = param_2[0x15];
    local_4c = param_2[0x16];
    local_48 = param_2[0x17];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_005319d2,5,&local_50,param_5 + 0x54);
    if (local_38 != 0) {
      bVar2 = false;
      uVar9 = 1;
      uVar10 = 1;
      param_1[1] = local_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      bVar1 = true;
      *param_1 = 3;
      bVar5 = true;
      bVar6 = true;
      bVar7 = true;
      bVar8 = true;
      goto LAB_00a3fd64;
    }
    param_2[0x15] = local_34;
    param_2[0x16] = uStack_30;
    param_2[0x17] = uStack_2c;
    local_50 = param_2[0x18];
    local_4c = param_2[0x19];
    local_48 = param_2[0x1a];
    FUN_00a3fa6c(&local_38,param_3,param_4,&DAT_00477df0,7,&local_50,param_5 + 0x60);
    if (local_38 == 0) {
      param_2[0x18] = local_34;
      param_2[0x19] = uStack_30;
      param_2[0x1a] = uStack_2c;
      local_38 = param_2[0x1b];
      local_34 = param_2[0x1c];
      uStack_30 = param_2[0x1d];
      FUN_00a94e68(&local_50,&local_38,param_5 + 0x6c);
      if (local_50 != 3) {
        param_2[0x1b] = local_50;
        param_2[0x1c] = local_4c;
        param_2[0x1d] = local_48;
        local_38 = param_2[0x1e];
        local_34 = param_2[0x1f];
        uStack_30 = param_2[0x20];
        uStack_2c = param_2[0x21];
        uStack_28 = param_2[0x22];
        FUN_0070a708(&local_50,&local_38,param_5 + 0x78);
        param_2[0x1e] = local_50;
        param_2[0x1f] = local_4c;
        param_2[0x20] = local_48;
        param_2[0x21] = uStack_44;
        param_2[0x22] = uStack_40;
        FUN_01bed4e2(param_1,param_2,0x8c);
        return;
      }
      param_1[2] = "Cannot merge two `MethodRouter`s that both have a fallback";
      *param_1 = 3;
      param_1[1] = 0x80000000;
      bVar4 = false;
      param_1[3] = 0x3a;
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      uVar10 = 1;
      uVar9 = 1;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      goto LAB_00a3fd7c;
    }
    bVar2 = true;
    bVar1 = true;
    uVar10 = 1;
    param_1[1] = local_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    bVar3 = false;
    uVar9 = 1;
    *param_1 = 3;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
  }
  else {
    param_1[1] = local_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    *param_1 = 3;
    FUN_00a28374(param_5 + 0xc);
LAB_00a3fd04:
    uVar9 = uVar10 ^ 1;
    FUN_00a28374(param_5 + 0x18);
    bVar5 = true;
LAB_00a3fd1c:
    bVar6 = true;
    FUN_00a28374(param_5 + 0x24);
LAB_00a3fd28:
    bVar7 = true;
    FUN_00a28374(param_5 + 0x30);
LAB_00a3fd34:
    FUN_00a28374(param_5 + 0x3c);
    bVar8 = true;
LAB_00a3fd4c:
    bVar1 = true;
    FUN_00a28374(param_5 + 0x48);
LAB_00a3fd58:
    bVar2 = true;
    FUN_00a28374(param_5 + 0x54);
LAB_00a3fd64:
    bVar3 = true;
    FUN_00a28374(param_5 + 0x60);
  }
  bVar4 = true;
  FUN_009436dc(param_5 + 0x6c);
LAB_00a3fd7c:
  if (1 < *(uint *)(param_5 + 0x78)) {
    FUN_012840cc(param_5 + 0x7c);
  }
  if (uVar9 != 0) {
    FUN_00a28374(param_2);
  }
  if (uVar10 != 0) {
    FUN_00a28374(param_2 + 3);
  }
  if (bVar5) {
    FUN_00a28374(param_2 + 6);
  }
  if (bVar6) {
    FUN_00a28374(param_2 + 9);
  }
  if (bVar7) {
    FUN_00a28374(param_2 + 0xc);
  }
  if (bVar8) {
    FUN_00a28374(param_2 + 0xf);
  }
  if (bVar1) {
    FUN_00a28374(param_2 + 0x12);
  }
  if (bVar2) {
    FUN_00a28374(param_2 + 0x15);
  }
  if (bVar3) {
    FUN_00a28374(param_2 + 0x18);
  }
  if (bVar4) {
    FUN_009436dc(param_2 + 0x1b);
  }
  if (param_2[0x1e] < 2) {
    return;
  }
  FUN_012840cc(param_2 + 0x1f);
  return;
}

