// FUN_01000248 @ 01000248 size=568 calls_out=4 calls_in=1
// strings: 

void FUN_01000248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int local_114;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_120 = param_3;
  local_11c = param_4;
  if (*param_2 == 3) {
    local_118 = param_2[1];
    local_114 = param_2[2];
    uVar1 = FUN_00fad280(&local_120);
    *param_1 = 3;
    param_1[1] = uVar1;
    param_1[2] = &DAT_01c1c438;
  }
  else {
    FUN_010006b0(local_b0,param_2,param_3,param_4);
    FUN_010006b0(local_a0,param_2 + 3,param_3,param_4);
    FUN_010006b0(local_90,param_2 + 6,param_3,param_4);
    FUN_010006b0(local_80,param_2 + 9,param_3,param_4);
    FUN_010006b0(local_70,param_2 + 0xc,param_3,param_4);
    FUN_010006b0(&local_60,param_2 + 0xf,param_3,param_4);
    FUN_010006b0(&local_50,param_2 + 0x12,param_3,param_4);
    FUN_010006b0(&local_40,param_2 + 0x15,param_3,param_4);
    FUN_010006b0(&local_30,param_2 + 0x18,param_3,param_4);
    local_118 = param_2[0x1c];
    local_114 = param_2[0x1d];
    uVar2 = param_2[0x1b];
    if (uVar2 < 2) {
      uVar7 = FUN_00fad280(&local_120);
    }
    else {
      uVar7 = FUN_011d825c(local_118,local_114,param_3,param_4);
    }
    iVar3 = param_2[0x1f];
    iVar4 = param_2[0x20];
    iVar5 = param_2[0x21];
    iVar6 = param_2[0x22];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = iVar3;
    param_1[0x20] = iVar4;
    param_1[0x21] = iVar5;
    param_1[0x22] = iVar6;
    local_e4 = local_60;
    uStack_e0 = uStack_5c;
    uStack_dc = uStack_58;
    local_d8 = local_50;
    uStack_d4 = uStack_4c;
    uStack_d0 = uStack_48;
    local_cc = local_40;
    uStack_c8 = uStack_3c;
    uStack_c4 = uStack_38;
    local_c0 = local_30;
    uStack_bc = uStack_2c;
    uStack_b8 = uStack_28;
    FUN_01bed4e2(param_1,&local_120,0x6c);
    param_1[0x1b] = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = uVar7;
  }
  return;
}

