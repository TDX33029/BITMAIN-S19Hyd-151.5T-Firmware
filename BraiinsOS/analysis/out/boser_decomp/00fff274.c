// FUN_00fff274 @ 00fff274 size=784 calls_out=6 calls_in=1
// strings: 

void FUN_00fff274(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_120 [96];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == 3) {
    uVar1 = FUN_011d8f14(param_2[1],param_2[2]);
    *param_1 = 3;
    param_1[1] = uVar1;
    param_1[2] = &DAT_01c1c900;
    return;
  }
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_b0,param_2,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_a0,param_2 + 3,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_90,param_2 + 6,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_80,param_2 + 9,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_70,param_2 + 0xc,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_60,param_2 + 0xf,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_50,param_2 + 0x12,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(local_40,param_2 + 0x15,local_120);
  FUN_00f1e8e8(local_120,param_3);
  FUN_00fff8f4(&local_30,param_2 + 0x18,local_120);
  iVar3 = param_2[0x1b];
  iVar5 = param_2[0x1c];
  iVar2 = param_2[0x1d];
  if (iVar3 == 0) {
    FUN_00f1e8e8(local_120,param_3);
    uVar7 = FUN_011d8f14(iVar5,iVar2,local_120);
    FUN_00fff208(param_3);
  }
  else if (iVar3 == 1) {
    FUN_00f1e8e8(local_120,param_3);
    uVar7 = FUN_011d8f14(iVar5,iVar2,local_120);
    FUN_00fff208(param_3);
  }
  else {
    uVar7 = FUN_011d9048(iVar5,iVar2,param_3);
  }
  iVar2 = param_2[0x1f];
  iVar5 = param_2[0x20];
  iVar4 = param_2[0x21];
  iVar6 = param_2[0x22];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = iVar2;
  param_1[0x20] = iVar5;
  param_1[0x21] = iVar4;
  param_1[0x22] = iVar6;
  local_c0 = local_30;
  uStack_bc = uStack_2c;
  uStack_b8 = uStack_28;
  FUN_01bed4e2(param_1,local_120,0x6c);
  param_1[0x1b] = iVar3;
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  return;
}

