// FUN_00f07bf4 @ 00f07bf4 size=104 calls_out=2 calls_in=3
// strings: 

void FUN_00f07bf4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  param_1[6] = *param_2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  param_1[0xb] = param_2[5];
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar6 = param_2[0xe];
  uVar7 = param_2[0xf];
  param_1[0x10] = param_2[10];
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar7;
  uVar7 = param_2[0x20];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar8 = param_3[5];
  *param_1 = *param_3;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar8;
  iVar2 = param_2[0x1d];
  bVar1 = *(byte *)(param_2 + 0x1b);
  param_1[0x16] = uVar7;
  if ((9 < bVar1) && (iVar2 != 0)) {
    thunk_FUN_01be4678(param_2[0x1c]);
  }
  FUN_01a8c248(param_2 + 0x10);
  return;
}

