// FUN_015f0d2c @ 015f0d2c size=188 calls_out=2 calls_in=2
// strings: 

void FUN_015f0d2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar6 = thunk_FUN_01bee35a(0,0x2c0);
  puVar2 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar2[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar2 = local_38;
    puVar2[1] = uStack_34;
    puVar2[2] = uStack_30;
    puVar2[3] = uStack_2c;
    *(undefined1 *)(puVar2 + 4) = 1;
  }
  uVar3 = *puVar2;
  uVar1 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *puVar2 = uVar3 + 1;
  puVar2[1] = uVar1 + (0xfffffffe < uVar3);
  param_1[0xc] = 0;
  param_1[0xd] = 4;
  param_1[0xe] = 0;
  *param_1 = &DAT_0056d238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[4] = uVar3;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  return;
}

