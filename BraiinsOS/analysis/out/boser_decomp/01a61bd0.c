// FUN_01a61bd0 @ 01a61bd0 size=188 calls_out=2 calls_in=2
// strings: 

void FUN_01a61bd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [52];
  
  FUN_01a4a968(local_58);
  param_1[0x12] = 0x80000000;
  param_1[0x13] = uStack_8c;
  param_1[0x14] = uStack_88;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0xc] = 0x80000003;
  param_1[0xd] = uStack_6c;
  param_1[0xe] = uStack_68;
  param_1[0xf] = 0x80000003;
  param_1[0x10] = uStack_60;
  param_1[0x11] = uStack_5c;
  param_1[0x15] = 0;
  param_1[0x16] = uStack_80;
  param_1[0x17] = uStack_7c;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  FUN_01272b84();
  return;
}

