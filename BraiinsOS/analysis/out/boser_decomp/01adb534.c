// FUN_01adb534 @ 01adb534 size=216 calls_out=2 calls_in=9
// strings: 

void FUN_01adb534(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uStack_44;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar6 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar3 = (uint *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if ((char)puVar3[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar3 = local_38;
    puVar3[1] = uStack_34;
    puVar3[2] = uStack_30;
    puVar3[3] = uStack_2c;
    *(undefined1 *)(puVar3 + 4) = 1;
  }
  uVar4 = *puVar3;
  uVar2 = puVar3[1];
  uVar5 = puVar3[2];
  uVar1 = puVar3[3];
  param_1[0x1b] = 1;
  *puVar3 = uVar4 + 1;
  puVar3[1] = uVar2 + (0xfffffffe < uVar4);
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = uStack_44;
  param_1[0x16] = 0;
  param_1[8] = uVar4;
  param_1[9] = uVar2;
  param_1[10] = uVar5;
  param_1[0xb] = uVar1;
  param_1[0xd] = 8;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &DAT_0056d238;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  return;
}

