// FUN_00f26590 @ 00f26590 size=164 calls_out=3 calls_in=3
// strings: 

void FUN_00f26590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar7 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar3 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar3[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar3 = local_38;
    puVar3[1] = uStack_34;
    puVar3[2] = uStack_30;
    puVar3[3] = uStack_2c;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *puVar3 = uVar2 + 1;
  puVar3[1] = uVar4 + (0xfffffffe < uVar2);
  uVar1 = FUN_01a3b664();
  param_1[0xc] = uVar1;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  param_1[0xd] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = &DAT_0056d238;
  param_1[3] = 0;
  return;
}

