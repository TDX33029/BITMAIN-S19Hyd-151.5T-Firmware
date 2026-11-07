// FUN_00eac858 @ 00eac858 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_00eac858(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_2c [12];
  
  FUN_013184d8(auStack_2c,0x2000);
  uVar6 = FUN_0189bc00(auStack_2c);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  param_1[6] = *param_2;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[0xb] = param_2[5];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  uVar1 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[10];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar5;
  *param_1 = 3;
  param_1[1] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 4) = uVar6;
  return;
}

