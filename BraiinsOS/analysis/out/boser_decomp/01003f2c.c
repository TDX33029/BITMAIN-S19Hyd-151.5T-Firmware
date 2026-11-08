// FUN_01003f2c @ 01003f2c size=444 calls_out=4 calls_in=1
// strings: 

void FUN_01003f2c(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == 3) {
    uVar1 = FUN_00facfc4(param_2[1],param_2[2]);
    *param_1 = 3;
    param_1[1] = uVar1;
    param_1[2] = &DAT_01c1c0a8;
  }
  else {
    FUN_01004318(&local_b0,param_2);
    FUN_01004318(&local_a0,param_2 + 3);
    FUN_01004318(&local_90,param_2 + 6);
    FUN_01004318(local_80,param_2 + 9);
    FUN_01004318(local_70,param_2 + 0xc);
    FUN_01004318(local_60,param_2 + 0xf);
    FUN_01004318(&local_50,param_2 + 0x12);
    FUN_01004318(&local_40,param_2 + 0x15);
    FUN_01004318(&local_30,param_2 + 0x18);
    uVar2 = param_2[0x1b];
    if (uVar2 < 2) {
      uVar7 = FUN_00facfc4();
    }
    else {
      uVar7 = FUN_011d97e8(param_2[0x1c],param_2[0x1d]);
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
    local_120 = local_b0;
    uStack_11c = uStack_ac;
    uStack_118 = uStack_a8;
    local_114 = local_a0;
    uStack_110 = uStack_9c;
    uStack_10c = uStack_98;
    local_108 = local_90;
    uStack_104 = uStack_8c;
    uStack_100 = uStack_88;
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

