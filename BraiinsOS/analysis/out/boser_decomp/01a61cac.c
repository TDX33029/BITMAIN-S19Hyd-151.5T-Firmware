// FUN_01a61cac @ 01a61cac size=84 calls_out=2 calls_in=0
// strings: 

void FUN_01a61cac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = param_2[0x15];
  uVar8 = param_2[0x16];
  uVar9 = param_2[0x17];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  iVar1 = param_2[0x12];
  param_1[0xc] = uVar10;
  param_1[0xd] = uVar8;
  if (-1 < iVar1) {
    uVar2 = param_2[0x13];
  }
  param_1[0xe] = uVar9;
  if (-1 < iVar1) {
    FUN_0134bd64(iVar1,uVar2);
  }
  FUN_01a60060(param_2 + 0xc);
  return;
}

